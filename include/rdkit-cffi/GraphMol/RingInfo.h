#ifndef RDKIT_CFFI__GRAPHMOL__RINGINFO_H
#define RDKIT_CFFI__GRAPHMOL__RINGINFO_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_RingInfo
{
	alignas(RDKIT_ALIGNOF_RINGINFO) char opaque[RDKIT_SIZEOF_RINGINFO];
};

struct rdkit_RingInfo_AtomRingsVec
{
	alignas(RDKIT_ALIGNOF_RINGINFO_INT_VEC_VEC) char opaque[RDKIT_SIZEOF_RINGINFO_INT_VEC_VEC];
};

/*
RDKIT_CFFI_API rdkit_RDProps *rdkit_romol_to_rdprops(rdkit_ROMol *cthis);
RDKIT_CFFI_API rdkit_ROMol *rdkit_romol_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_ROMol *rdkit_romol_new(void);
RDKIT_CFFI_API void rdkit_romol_del(rdkit_ROMol *cthis);
RDKIT_CFFI_API void rdkit_romol_ctor(rdkit_ROMol *cthis);
RDKIT_CFFI_API void rdkit_romol_ctor_clone(rdkit_ROMol *cthis, const rdkit_ROMol *cother);
RDKIT_CFFI_API void rdkit_romol_ctor_clone_ex(rdkit_ROMol *cthis, const rdkit_ROMol *cother, rdkit_tribool quick_copy, int32_t conf_id);
RDKIT_CFFI_API void rdkit_romol_ctor_from_rwmol_move(rdkit_ROMol *cthis, rdkit_RWMol *crwmol);
RDKIT_CFFI_API void rdkit_romol_dtor(rdkit_ROMol *cthis);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_atoms(const rdkit_ROMol *cthis);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_explicit_atoms(const rdkit_ROMol *cthis);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_heavy_atoms(const rdkit_ROMol *cthis);
RDKIT_CFFI_API const rdkit_Atom *rdkit_romol_get_atom(const rdkit_ROMol *cthis, uint32_t idx);
RDKIT_CFFI_API rdkit_Atom *rdkit_romol_get_atom_mut(rdkit_ROMol *cthis, uint32_t idx);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_bonds(const rdkit_ROMol *cthis);
RDKIT_CFFI_API const rdkit_Bond *rdkit_romol_get_bond_with_idx(const rdkit_ROMol *cthis, uint32_t idx);
RDKIT_CFFI_API rdkit_Bond *rdkit_romol_get_bond_with_idx_mut(const rdkit_ROMol *cthis, uint32_t idx);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_conformers(const rdkit_ROMol *cthis);
RDKIT_CFFI_API const rdkit_Conformer *rdkit_romol_get_conformer(const rdkit_ROMol *cthis, int32_t idx);
RDKIT_CFFI_API rdkit_Conformer *rdkit_romol_get_conformer_mut(rdkit_ROMol *cthis, int32_t idx);

RDKIT_CFFI_API rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_new(void);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_del(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_ctor(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_dtor(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API size_t rdkit_romol_sptr_vec_size(const rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API const rdkit_ROMol *rdkit_romol_sptr_vec_get(const rdkit_ROMol_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API rdkit_ROMol *rdkit_romol_sptr_vec_get_mut(rdkit_ROMol_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_clear(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_delete(rdkit_ROMol_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_append(rdkit_ROMol_sptr_vec *cthis, rdkit_ROMol *cromol);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_append_move(rdkit_ROMol_sptr_vec *cthis, rdkit_ROMol *cromol);
RDKIT_CFFI_API bool rdkit_romol_sptr_vec_set(rdkit_ROMol_sptr_vec *cthis, size_t i, rdkit_ROMol *cromol);
RDKIT_CFFI_API bool rdkit_romol_sptr_vec_set_move(rdkit_ROMol_sptr_vec *cthis, size_t i, rdkit_ROMol *cromol);

RDKIT_CFFI_API rdkit_ROMol_sptr_vec_vec *rdkit_romol_sptr_vec_vec_new(void);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_del(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_ctor(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_dtor(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API size_t rdkit_romol_sptr_vec_vec_size(const rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API const rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_vec_get(const rdkit_ROMol_sptr_vec_vec *cthis, size_t i);
RDKIT_CFFI_API rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_vec_get_mut(rdkit_ROMol_sptr_vec_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_clear(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_delete(rdkit_ROMol_sptr_vec_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_append(rdkit_ROMol_sptr_vec_vec *cthis, rdkit_ROMol_sptr_vec *cromol_sptr_vec);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_append_move(rdkit_ROMol_sptr_vec_vec *cthis, rdkit_ROMol_sptr_vec *cromol_sptr_vec);
RDKIT_CFFI_API bool rdkit_romol_sptr_vec_vec_set(rdkit_ROMol_sptr_vec_vec *cthis, size_t i, rdkit_ROMol_sptr_vec *cromol_sptr_vec);
RDKIT_CFFI_API bool rdkit_romol_sptr_vec_vec_set_move(rdkit_ROMol_sptr_vec_vec *cthis, size_t i, rdkit_ROMol_sptr_vec *cromol_sptr_vec);
*/
#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__RINGINFO_H */
