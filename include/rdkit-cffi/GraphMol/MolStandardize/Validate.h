#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__VALIDATE_H
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__VALIDATE_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_mol_standardize_AllowedAtomsValidation
{
    alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_ALLOWEDATOMSVALIDATION) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_ALLOWEDATOMSVALIDATION];
};

RDKIT_CFFI_API rdkit_mol_standardize_AllowedAtomsValidation *rdkit_mol_standardize_allowed_atoms_validation_new(void);
RDKIT_CFFI_API void rdkit_mol_standardize_allowed_atoms_validation_del(rdkit_mol_standardize_AllowedAtomsValidation *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_allowed_atoms_validation_ctor(rdkit_mol_standardize_AllowedAtomsValidation *cthis, const rdkit_Atom_sptr_vec *catoms);
RDKIT_CFFI_API void rdkit_mol_standardize_allowed_atoms_validation_dtor(rdkit_mol_standardize_AllowedAtomsValidation *cthis);
RDKIT_CFFI_API bool rdkit_mol_standardize_allowed_atoms_validation_validate(const rdkit_mol_standardize_AllowedAtomsValidation *cthis, const rdkit_ROMol *cmol);
// RDKIT_CFFI_API bool rdkit_mol_standardize_allowed_atoms_validation_validate_ex(const rdkit_mol_standardize_AllowedAtomsValidation *cthis, const rdkit_ROMol *cmol, rdkit_tribool report_all_failures); // TODO

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__VALIDATE_H */
