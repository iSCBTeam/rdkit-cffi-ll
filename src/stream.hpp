#ifndef RDKIT_CFFI__STREAM_HPP
#define RDKIT_CFFI__STREAM_HPP 1

#include <any>
#include <bit>
#include <istream>
#include <ostream>
#include <streambuf>

#include "rdkit-cffi/stream.h"
#include "rdkit-cffi/types.h"

struct rdkit_istream : std::istream
{
	struct istreambuf : std::streambuf
	{
		const rdkit_istream_ops *ops;
		std::any ctx;
		size_t buf_size;
		char *buf;
		int z;

		explicit istreambuf(std::any ctx_, const rdkit_istream_ops *ops_, size_t buf_size_);
		~istreambuf() override;

		traits_type::int_type underflow() override;
	};

	istreambuf strmbuf;

	explicit rdkit_istream(std::any ctx, const rdkit_istream_ops *ops, size_t buf_size = RDKIT_DEFAULT_SIZE);
};

struct rdkit_ostream : std::ostream
{
	struct ostreambuf : std::streambuf
	{
		const rdkit_ostream_ops *ops;
		std::any ctx;
		size_t buf_size;
		char *buf;

		explicit ostreambuf(std::any ctx_, const rdkit_ostream_ops *ops_, size_t buf_size_);
		~ostreambuf() override;

		traits_type::int_type overflow(int_type ci = traits_type::eof()) override;
	};

	ostreambuf strmbuf;

	explicit rdkit_ostream(std::any ctx, const rdkit_ostream_ops *ops, size_t buf_size = RDKIT_DEFAULT_SIZE);
};

namespace RDKit {

constexpr rdkit_istream *c2cpp(rdkit_istream *cthis)
{
	return cthis;
}

constexpr rdkit_istream *cpp2c(rdkit_istream *this_)
{
	return this_;
}

constexpr rdkit_ostream *c2cpp(rdkit_ostream *cthis)
{
	return cthis;
}

constexpr rdkit_ostream *cpp2c(rdkit_ostream *this_)
{
	return this_;
}

}

#endif /* RDKIT_CFFI__STREAM_HPP */
