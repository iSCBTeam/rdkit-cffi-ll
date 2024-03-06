#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__CHARGE_H
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__CHARGE_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_mol_standardize_Reionizer
{
    alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_REIONIZER) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_REIONIZER];
};

struct rdkit_mol_standardize_Uncharger
{
    alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_UNCHARGER) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_UNCHARGER];
};

RDKIT_CFFI_API rdkit_mol_standardize_Reionizer *rdkit_mol_standardize_reionizer_new(void);
RDKIT_CFFI_API void rdkit_mol_standardize_reionizer_del(rdkit_mol_standardize_Reionizer *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_reionizer_ctor(rdkit_mol_standardize_Reionizer *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_reionizer_dtor(rdkit_mol_standardize_Reionizer *cthis);
RDKIT_CFFI_API bool rdkit_mol_standardize_reionizer_reionize(const rdkit_mol_standardize_Reionizer *cthis, rdkit_RWMol *cmol);

RDKIT_CFFI_API rdkit_mol_standardize_Uncharger *rdkit_mol_standardize_uncharger_new(void);
RDKIT_CFFI_API void rdkit_mol_standardize_uncharger_del(rdkit_mol_standardize_Uncharger *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_uncharger_ctor(rdkit_mol_standardize_Uncharger *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_uncharger_ctor_params(rdkit_mol_standardize_Uncharger *cthis, const rdkit_mol_standardize_CleanupParameters *cparams);
RDKIT_CFFI_API void rdkit_mol_standardize_uncharger_dtor(rdkit_mol_standardize_Uncharger *cthis);
RDKIT_CFFI_API bool rdkit_mol_standardize_uncharger_uncharge(const rdkit_mol_standardize_Uncharger *cthis, rdkit_RWMol *cmol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__CHARGE_H */
