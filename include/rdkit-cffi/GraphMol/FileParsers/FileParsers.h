#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__FILEPARSERS_H
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__FILEPARSERS_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API bool rdkit_mol_block_to_mol(rdkit_RWMol *cthis, const rdkit_string *mol_block);
RDKIT_CFFI_API bool rdkit_mol_block_to_mol_ex(rdkit_RWMol *cthis, const rdkit_string *mol_block, rdkit_tribool sanitize, rdkit_tribool remove_hs, rdkit_tribool strict_parsing);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__FILEPARSERS_H */
