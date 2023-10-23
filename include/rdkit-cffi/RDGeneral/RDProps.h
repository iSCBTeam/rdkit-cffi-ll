#ifndef RDKIT_CFFI__RDGENERAL__RDPROPS_H
#define RDKIT_CFFI__RDGENERAL__RDPROPS_H 1

#include "rdkit-cffi/config.h"
#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/string.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_RDProps
{
    alignas(RDKIT_ALIGNOF_RDPROPS) char opaque[RDKIT_SIZEOF_RDPROPS];
};

RDKIT_CFFI_API rdkit_RDProps *rdkit_rdprops_new(void);
RDKIT_CFFI_API void rdkit_rdprops_del(rdkit_RDProps *cthis);
RDKIT_CFFI_API void rdkit_rdprops_ctor(rdkit_RDProps *cthis);
RDKIT_CFFI_API void rdkit_rdprops_dtor(rdkit_RDProps *cthis);
RDKIT_CFFI_API void rdkit_rdprops_clear(rdkit_RDProps *cthis);
RDKIT_CFFI_API void rdkit_rdprops_set_prop_str(rdkit_RDProps *cthis, const rdkit_string *key, const rdkit_string *val);
RDKIT_CFFI_API void rdkit_rdprops_set_prop_u32(rdkit_RDProps *cthis, const rdkit_string *key, uint32_t val);
RDKIT_CFFI_API void rdkit_rdprops_set_prop_i32(rdkit_RDProps *cthis, const rdkit_string *key, int32_t val);
RDKIT_CFFI_API bool rdkit_rdprops_get_prop_str(const rdkit_RDProps *cthis, const rdkit_string *key, rdkit_string_owned *val);
RDKIT_CFFI_API bool rdkit_rdprops_get_prop_u32(const rdkit_RDProps *cthis, const rdkit_string *key, uint32_t *val);
RDKIT_CFFI_API bool rdkit_rdprops_get_prop_i32(const rdkit_RDProps *cthis, const rdkit_string *key, int32_t *val);
RDKIT_CFFI_API bool rdkit_rdprops_has_prop(const rdkit_RDProps *cthis, const rdkit_string *key);
RDKIT_CFFI_API void rdkit_rdprops_clear_prop(rdkit_RDProps *cthis, const rdkit_string *key);
RDKIT_CFFI_API void rdkit_rdprops_clear_computed_props(rdkit_RDProps *cthis);
RDKIT_CFFI_API void rdkit_rdprops_update_props(rdkit_RDProps *cthis, const rdkit_RDProps *csource);
RDKIT_CFFI_API void rdkit_rdprops_update_props_ex(rdkit_RDProps *cthis, const rdkit_RDProps *csource, rdkit_tribool preserve_existing);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__RDGENERAL__RDPROPS_H */
