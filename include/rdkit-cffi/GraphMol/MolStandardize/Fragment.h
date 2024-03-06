#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__FRAGMENT_H
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__FRAGMENT_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_mol_standardize_LargestFragmentChooser
{
    alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_LARGESTFRAGMENTCHOOSER) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_LARGESTFRAGMENTCHOOSER];
};


RDKIT_CFFI_API rdkit_mol_standardize_LargestFragmentChooser *rdkit_mol_standardize_largest_fragment_chooser_new(void);
RDKIT_CFFI_API void rdkit_mol_standardize_largest_fragment_chooser_del(rdkit_mol_standardize_LargestFragmentChooser *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_largest_fragment_chooser_ctor(rdkit_mol_standardize_LargestFragmentChooser *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_largest_fragment_chooser_ctor_params(rdkit_mol_standardize_LargestFragmentChooser *cthis, const rdkit_mol_standardize_CleanupParameters *cparams);
RDKIT_CFFI_API void rdkit_mol_standardize_largest_fragment_chooser_dtor(rdkit_mol_standardize_LargestFragmentChooser *cthis);
RDKIT_CFFI_API bool rdkit_mol_standardize_largest_fragment_chooser_choose(const rdkit_mol_standardize_LargestFragmentChooser *cthis, const rdkit_ROMol *cmol, rdkit_ROMol *cfrag);
RDKIT_CFFI_API bool rdkit_mol_standardize_largest_fragment_chooser_choose_in_place(const rdkit_mol_standardize_LargestFragmentChooser *cthis, rdkit_ROMol *cmol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__FRAGMENT_H */
