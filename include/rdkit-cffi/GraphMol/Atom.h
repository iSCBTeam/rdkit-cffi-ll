#ifndef RDKIT_CFFI__GRAPHMOL__ATOM_H
#define RDKIT_CFFI__GRAPHMOL__ATOM_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_Atom
{
    alignas(RDKIT_ALIGNOF_ATOM) char opaque[RDKIT_SIZEOF_ATOM];
};

struct rdkit_Atom_sptr_vec
{
	alignas(RDKIT_ALIGNOF_ATOM_SPTR_VEC) char opaque[RDKIT_SIZEOF_ATOM_SPTR_VEC];
};

RDKIT_CFFI_API rdkit_RDProps *rdkit_atom_to_rdprops(rdkit_Atom *cthis);
RDKIT_CFFI_API rdkit_Atom *rdkit_atom_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_Atom *rdkit_atom_new(void);
RDKIT_CFFI_API void rdkit_atom_del(rdkit_Atom *cthis);
RDKIT_CFFI_API void rdkit_atom_ctor(rdkit_Atom *cthis);
RDKIT_CFFI_API void rdkit_atom_ctor_atomic_num(rdkit_Atom *cthis, uint32_t atomic_num);
RDKIT_CFFI_API void rdkit_atom_ctor_symbol(rdkit_Atom *cthis, const rdkit_string *symbol);
RDKIT_CFFI_API void rdkit_atom_dtor(rdkit_Atom *cthis);
RDKIT_CFFI_API bool rdkit_atom_match(const rdkit_Atom *cthis, const rdkit_Atom *cother);
RDKIT_CFFI_API int32_t rdkit_atom_get_atomic_num(const rdkit_Atom *cthis);
RDKIT_CFFI_API void rdkit_atom_set_atomic_num(rdkit_Atom *cthis, int32_t atomic_num);
RDKIT_CFFI_API uint32_t rdkit_atom_get_isotope(const rdkit_Atom *cthis);
RDKIT_CFFI_API void rdkit_atom_set_isotope(rdkit_Atom *cthis, uint32_t mass_number);
RDKIT_CFFI_API bool rdkit_atom_get_symbol(const rdkit_Atom *cthis, rdkit_string_owned *symbol);

RDKIT_CFFI_API rdkit_Atom_sptr_vec *rdkit_atom_sptr_vec_new(void);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_del(rdkit_Atom_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_ctor(rdkit_Atom_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_dtor(rdkit_Atom_sptr_vec *cthis);
RDKIT_CFFI_API size_t rdkit_atom_sptr_vec_size(const rdkit_Atom_sptr_vec *cthis);
RDKIT_CFFI_API const rdkit_Atom *rdkit_atom_sptr_vec_get(const rdkit_Atom_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API rdkit_Atom *rdkit_atom_sptr_vec_get_mut(rdkit_Atom_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_clear(rdkit_Atom_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_delete(rdkit_Atom_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_append(rdkit_Atom_sptr_vec *cthis, rdkit_Atom *catom);
RDKIT_CFFI_API void rdkit_atom_sptr_vec_append_move(rdkit_Atom_sptr_vec *cthis, rdkit_Atom *catom);
RDKIT_CFFI_API bool rdkit_atom_sptr_vec_set(rdkit_Atom_sptr_vec *cthis, size_t i, rdkit_Atom *catom);
RDKIT_CFFI_API bool rdkit_atom_sptr_vec_set_move(rdkit_Atom_sptr_vec *cthis, size_t i, rdkit_Atom *catom);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__ATOM_H */
