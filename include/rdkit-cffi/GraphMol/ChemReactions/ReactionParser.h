#ifndef RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTIONPARSER_H
#define RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTIONPARSER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API bool rdkit_rxn_smarts_to_chemical_reaction(rdkit_ChemicalReaction *cthis, const rdkit_string *text);
RDKIT_CFFI_API bool rdkit_rxn_smarts_to_chemical_reaction_ex(rdkit_ChemicalReaction *cthis, const rdkit_string *text, const void *replacements, rdkit_tribool use_smiles, rdkit_tribool allow_cxsmiles);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTIONPARSER_H */
