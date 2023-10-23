#ifndef RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTION_H
#define RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTION_H 1

#include "rdkit-cffi/config.h"
#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_ChemicalReaction
{
    alignas(RDKIT_ALIGNOF_CHEMICALREACTION) char opaque[RDKIT_SIZEOF_CHEMICALREACTION];
};

RDKIT_CFFI_API rdkit_RDProps *rdkit_chemical_reaction_to_rdprops(rdkit_ChemicalReaction *cthis);
RDKIT_CFFI_API rdkit_ChemicalReaction *rdkit_chemical_reaction_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_ChemicalReaction *rdkit_chemical_reaction_new(void);
RDKIT_CFFI_API void rdkit_chemical_reaction_del(rdkit_ChemicalReaction *cthis);
RDKIT_CFFI_API void rdkit_chemical_reaction_ctor(rdkit_ChemicalReaction *cthis);
RDKIT_CFFI_API void rdkit_chemical_reaction_dtor(rdkit_ChemicalReaction *cthis);
RDKIT_CFFI_API void rdkit_chemical_reaction_init_reactant_matchers(rdkit_ChemicalReaction *cthis);
RDKIT_CFFI_API void rdkit_chemical_reaction_init_reactant_matchers_ex(rdkit_ChemicalReaction *cthis, rdkit_tribool silent);
RDKIT_CFFI_API rdkit_ROMol_sptr_vec_vec *rdkit_chemical_reaction_run_reactants(rdkit_ChemicalReaction *cthis, rdkit_ROMol_sptr_vec *creactants);
RDKIT_CFFI_API rdkit_ROMol_sptr_vec_vec *rdkit_chemical_reaction_run_reactants_ex(rdkit_ChemicalReaction *cthis, rdkit_ROMol_sptr_vec *creactants, uint32_t max_num_products);
RDKIT_CFFI_API rdkit_ROMol_sptr_vec *rdkit_chemical_reaction_get_reactants(const rdkit_ChemicalReaction *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTION_H */
