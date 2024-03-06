#ifndef RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_H
#define RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MatchVectType_vec
{
	alignas(RDKIT_ALIGNOF_MATCHVECTTYPE_VEC) char opaque[RDKIT_SIZEOF_MATCHVECTTYPE_VEC];
};

RDKIT_CFFI_API bool rdkit_substruct_match(rdkit_MatchVectType_vec *cmatches, const rdkit_ROMol *cmol, const rdkit_ROMol *cquery);
RDKIT_CFFI_API bool rdkit_has_substruct_match(const rdkit_ROMol *cmol, const rdkit_ROMol *cquery);

RDKIT_CFFI_API void rdkit_match_vect_type_vec_dtor(rdkit_MatchVectType_vec *cthis);
RDKIT_CFFI_API size_t rdkit_match_vect_type_vec_size(const rdkit_MatchVectType_vec *cthis);
RDKIT_CFFI_API size_t rdkit_match_vect_type_vec_entry_size(const rdkit_MatchVectType_vec *cthis, size_t idx_entry);
RDKIT_CFFI_API bool rdkit_match_vect_type_vec_get_entry_atom_pair(const rdkit_MatchVectType_vec *cthis, size_t idx_entry, size_t idx_pair, int32_t *idx_query_atom, int32_t *idx_mol_atom);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_H */
