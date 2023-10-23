#ifndef RDKIT_CFFI__GRAPHMOL__SMILESPARSE__SMILESWRITE_H
#define RDKIT_CFFI__GRAPHMOL__SMILESPARSE__SMILESWRITE_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API bool rdkit_mol_to_smiles(rdkit_string_owned *smi, const rdkit_ROMol *cromol);
RDKIT_CFFI_API bool rdkit_mol_to_smiles_ex(rdkit_string_owned *smi, const rdkit_ROMol *cromol, rdkit_tribool do_isomeric_smiles, rdkit_tribool do_kekule, int32_t rooted_at_atom, rdkit_tribool canonical, rdkit_tribool all_bonds_explicit, rdkit_tribool all_hs_explicit, rdkit_tribool do_random);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__SMILESPARSE__SMILESWRITE_H */
