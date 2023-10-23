#ifndef RDKIT_CFFI__GRAPHMOL__SMILESPARSE__SMILESPARSE_H
#define RDKIT_CFFI__GRAPHMOL__SMILESPARSE__SMILESPARSE_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API bool rdkit_smiles_to_mol(rdkit_RWMol *cthis, const rdkit_string *smi);
RDKIT_CFFI_API bool rdkit_smiles_to_mol_ex(rdkit_RWMol *cthis, const rdkit_string *smi, int32_t debug_parse, rdkit_tribool sanitize, const void *replacements);
RDKIT_CFFI_API bool rdkit_smarts_to_mol(rdkit_RWMol *cthis, const rdkit_string *sma);
RDKIT_CFFI_API bool rdkit_smarts_to_mol_ex(rdkit_RWMol *cthis, const rdkit_string *sma, int32_t debug_parse, rdkit_tribool merge_hs, const void *replacements);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__SMILESPARSE__SMILESPARSE_H */
