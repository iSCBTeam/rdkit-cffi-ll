#ifndef RDKIT_CFFI__STREAM_H
#define RDKIT_CFFI__STREAM_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The read and write callbacks *must* return 0 in case of eof or error *only*,
 * otherwise remain blocked until at least one character can be stored in the buffer.
 */
typedef size_t (*rdkit_stream_read_cb_t)(void *ctx, void *buf, size_t size);
typedef size_t (*rdkit_stream_write_cb_t)(void *ctx, const void *buf, size_t size);

struct rdkit_istream_ops
{
	rdkit_stream_read_cb_t read;
};

struct rdkit_ostream_ops
{
	rdkit_stream_write_cb_t write;
};

RDKIT_CFFI_API rdkit_istream *rdkit_istream_ctor(void *ctx, const struct rdkit_istream_ops *ops);
RDKIT_CFFI_API void rdkit_istream_dtor(rdkit_istream *cthis);
RDKIT_CFFI_API rdkit_ostream *rdkit_ostream_ctor(void *ctx, const struct rdkit_ostream_ops *ops);
RDKIT_CFFI_API void rdkit_ostream_dtor(rdkit_ostream *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__STREAM_H */
