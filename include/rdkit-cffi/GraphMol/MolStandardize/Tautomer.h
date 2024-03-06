#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__TAUTOMER_H
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__TAUTOMER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_mol_standardize_TautomerEnumerator
{
    alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_TAUTOMERENUMERATOR) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_TAUTOMERENUMERATOR];
};

struct rdkit_mol_standardize_TautomerEnumeratorResult
{
    alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_TAUTOMERENUMERATORRESULT) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_TAUTOMERENUMERATORRESULT];
};

RDKIT_CFFI_API rdkit_mol_standardize_TautomerEnumerator *rdkit_mol_standardize_tautomer_enumerator_new(void);
RDKIT_CFFI_API void rdkit_mol_standardize_tautomer_enumerator_del(rdkit_mol_standardize_TautomerEnumerator *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_tautomer_enumerator_ctor(rdkit_mol_standardize_TautomerEnumerator *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_tautomer_enumerator_ctor_params(rdkit_mol_standardize_TautomerEnumerator *cthis, const rdkit_mol_standardize_CleanupParameters *cparams);
RDKIT_CFFI_API void rdkit_mol_standardize_tautomer_enumerator_dtor(rdkit_mol_standardize_TautomerEnumerator *cthis);
RDKIT_CFFI_API bool rdkit_mol_standardize_tautomer_enumerator_enumerate(const rdkit_mol_standardize_TautomerEnumerator *cthis, rdkit_mol_standardize_TautomerEnumeratorResult *cresult, const rdkit_ROMol *cmol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__TAUTOMER_H */
