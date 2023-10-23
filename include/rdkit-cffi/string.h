#ifndef RDKIT_CFFI__STRING_H
#define RDKIT_CFFI__STRING_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The non-owned variant of ffi string.
 * The storage is managed by the owner, so it *cannot* be freed.
 */
struct rdkit_string
{
	const char *s;
	size_t len;
};

/*
 * The owned variant of ffi string.
 * It *must* be freed when not needed.
 */
struct rdkit_string_owned
{
	struct rdkit_string base;
	void *ctx;
};

RDKIT_CFFI_API rdkit_string *rdkit_string_ctor(rdkit_string *cthis);
RDKIT_CFFI_API rdkit_string *rdkit_string_ctor_str(rdkit_string *cthis, size_t len, const char *str);
RDKIT_CFFI_API rdkit_string *rdkit_string_ctor_cstr(rdkit_string *cthis, const char *cstr);
RDKIT_CFFI_API rdkit_string_owned *rdkit_string_owned_ctor(rdkit_string_owned *cthis);
RDKIT_CFFI_API void rdkit_string_owned_dtor(rdkit_string_owned *cthis);
RDKIT_CFFI_API rdkit_string_owned *rdkit_string_to_owned(const rdkit_string *cthis, rdkit_string_owned *cowned);
RDKIT_CFFI_API rdkit_string *rdkit_string_owned_borrow(const rdkit_string_owned *cthis, rdkit_string *cborrowed);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__STRING_H */
