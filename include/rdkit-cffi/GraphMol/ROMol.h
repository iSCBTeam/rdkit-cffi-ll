#ifndef RDKIT_CFFI__GRAPHMOL__ROMOL_H
#define RDKIT_CFFI__GRAPHMOL__ROMOL_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_ROMol
{
	alignas(RDKIT_ALIGNOF_ROMOL) char opaque[RDKIT_SIZEOF_ROMOL];
};

struct rdkit_ROMol_sptr_vec
{
	alignas(RDKIT_ALIGNOF_ROMOL_SPTR_VEC) char opaque[RDKIT_SIZEOF_ROMOL_SPTR_VEC];
};

struct rdkit_ROMol_sptr_vec_vec
{
	alignas(RDKIT_ALIGNOF_ROMOL_SPTR_VEC_VEC) char opaque[RDKIT_SIZEOF_ROMOL_SPTR_VEC_VEC];
};

RDKIT_CFFI_API rdkit_RDProps *rdkit_romol_to_rdprops(rdkit_ROMol *cthis);
RDKIT_CFFI_API rdkit_ROMol *rdkit_romol_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_ROMol *rdkit_romol_new(void);
RDKIT_CFFI_API void rdkit_romol_del(rdkit_ROMol *cthis);
RDKIT_CFFI_API void rdkit_romol_ctor(rdkit_ROMol *cthis);
RDKIT_CFFI_API void rdkit_romol_ctor_from_rwmol_move(rdkit_ROMol *cthis, rdkit_RWMol *crwmol);
RDKIT_CFFI_API void rdkit_romol_dtor(rdkit_ROMol *cthis);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_atoms(const rdkit_ROMol *cthis);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_explicit_atoms(const rdkit_ROMol *cthis);
RDKIT_CFFI_API uint32_t rdkit_romol_get_num_heavy_atoms(const rdkit_ROMol *cthis);
RDKIT_CFFI_API const rdkit_Atom *rdkit_romol_get_atom(const rdkit_ROMol *cthis, uint32_t idx);
RDKIT_CFFI_API rdkit_Atom *rdkit_romol_get_atom_mut(rdkit_ROMol *cthis, uint32_t idx);

RDKIT_CFFI_API rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_new(void);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_del(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_ctor(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_dtor(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API size_t rdkit_romol_sptr_vec_size(const rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API const rdkit_ROMol *rdkit_romol_sptr_vec_get(const rdkit_ROMol_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API rdkit_ROMol *rdkit_romol_sptr_vec_get_mut(rdkit_ROMol_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_clear(rdkit_ROMol_sptr_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_delete(rdkit_ROMol_sptr_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_append_move(rdkit_ROMol_sptr_vec *cthis, rdkit_ROMol *cromol);

RDKIT_CFFI_API rdkit_ROMol_sptr_vec_vec *rdkit_romol_sptr_vec_vec_new(void);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_del(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_ctor(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_dtor(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API size_t rdkit_romol_sptr_vec_vec_size(const rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API const rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_vec_get(const rdkit_ROMol_sptr_vec_vec *cthis, size_t i);
RDKIT_CFFI_API rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_vec_get_mut(rdkit_ROMol_sptr_vec_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_clear(rdkit_ROMol_sptr_vec_vec *cthis);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_delete(rdkit_ROMol_sptr_vec_vec *cthis, size_t i);
RDKIT_CFFI_API void rdkit_romol_sptr_vec_vec_append_move(rdkit_ROMol_sptr_vec_vec *cthis, rdkit_ROMol_sptr_vec *cromol_sptr_vec);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__ROMOL_H */
