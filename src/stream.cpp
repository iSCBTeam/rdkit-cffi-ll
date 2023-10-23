#include <istream>

#include "rdkit-cffi/stream.h"
#include "rdkit-cffi/types.h"

#include "stream.hpp"

using namespace RDKit;

constexpr size_t default_buf_size = 8192;

// istreambuf

rdkit_istream::istreambuf::istreambuf(std::any ctx_, const rdkit_istream_ops *ops_, size_t buf_size_):
		ops(ops_),
		ctx(ctx_),
		buf_size(buf_size_),
		buf(new char_type[buf_size]) {}

rdkit_istream::istreambuf::~istreambuf()
{
	delete[] buf;
}

rdkit_istream::istreambuf::int_type rdkit_istream::istreambuf::underflow()
{
	constexpr auto eof = traits_type::eof();
	size_t size_read;

	if (gptr() && gptr() < egptr())
		return traits_type::to_int_type(*gptr());

	size_read = ops->read(std::any_cast<void *>(ctx), buf, buf_size);
	if (!size_read)
		return eof;

	setg(buf, buf, &buf[size_read]);

	return traits_type::to_int_type(*gptr());
}

// istream

rdkit_istream::rdkit_istream(std::any ctx_, const rdkit_istream_ops *ops_, size_t buf_size_):
		std::istream(&strmbuf),
		strmbuf(ctx_, ops_, buf_size_ == RDKIT_DEFAULT_SIZE ? default_buf_size : buf_size_) {}

// ostreambuf

rdkit_ostream::ostreambuf::ostreambuf(std::any ctx_, const rdkit_ostream_ops *ops_, size_t buf_size_):
		ops(ops_),
		ctx(ctx_),
		buf_size(buf_size_),
		buf(new char_type[buf_size]) {}

rdkit_ostream::ostreambuf::~ostreambuf()
{
	delete[] buf;
}

rdkit_ostream::ostreambuf::int_type rdkit_ostream::ostreambuf::overflow(int_type ch)
{
	constexpr auto eof = traits_type::eof();
	size_t size_written;
	char_type c;

	if (ch == eof)
		return eof;

	c = traits_type::to_char_type(ch);

	size_written = ops->write(std::any_cast<void *>(ctx), &c, sizeof(c));
	if (!size_written)
		return eof;

	return ch;
}

// ostream

rdkit_ostream::rdkit_ostream(std::any ctx, const rdkit_ostream_ops *ops, size_t buf_size):
		std::ostream(&strmbuf),
		strmbuf(ctx, ops, buf_size == RDKIT_DEFAULT_SIZE ? default_buf_size : buf_size) {}

rdkit_istream *rdkit_istream_ctor(void *ctx, const struct rdkit_istream_ops *ops)
{
	auto this_ = new rdkit_istream(ctx, ops);
	return cpp2c(this_);
}

void rdkit_istream_dtor(rdkit_istream *cthis)
{
	auto this_ = c2cpp(cthis);
	delete this_;
}

rdkit_ostream *rdkit_ostream_ctor(void *ctx, const struct rdkit_ostream_ops *ops)
{
	auto this_ = new rdkit_ostream(ctx, ops);
	return cpp2c(this_);
}

void rdkit_ostream_dtor(rdkit_ostream *cthis)
{
	auto this_ = c2cpp(cthis);
	delete this_;
}
