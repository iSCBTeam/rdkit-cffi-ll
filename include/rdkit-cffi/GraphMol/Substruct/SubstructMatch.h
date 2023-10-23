#ifndef RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_H
#define RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_vec_MatchVectType;

RDKIT_CFFI_API rdkit_vec_MatchVectType *rdkit_substruct_match(rdkit_ROMol *mol, rdkit_ROMol *query);

RDKIT_CFFI_API void rdkit_vec_match_vect_type_dtor(rdkit_vec_MatchVectType *cthis);
RDKIT_CFFI_API size_t rdkit_vec_match_vect_type_size(rdkit_vec_MatchVectType *cthis);
RDKIT_CFFI_API size_t rdkit_vec_match_vect_type_sub_size(rdkit_vec_MatchVectType *cthis, size_t i);
RDKIT_CFFI_API void rdkit_vec_match_vect_type_sub_get(rdkit_vec_MatchVectType *cthis, size_t i, size_t j, int *query_atom_idx, int *mol_atom_idx);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_H */
