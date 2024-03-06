#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__MOLSTANDARDIZE_H
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__MOLSTANDARDIZE_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_mol_standardize_CleanupParameters
{
	alignas(RDKIT_ALIGNOF_MOLSTANDARDIZE_CLEANUPPARAMETERS) char opaque[RDKIT_SIZEOF_MOLSTANDARDIZE_CLEANUPPARAMETERS];
};

typedef struct rdkit_mol_standardize_cleanup_parameters
{
	int32_t max_restarts;
	rdkit_tribool prefer_organic;
	rdkit_tribool do_canonical;
	int32_t max_tautomers;
	int32_t max_transforms;
	rdkit_tribool tautomer_remove_sp3_stereo;
	rdkit_tribool tautomer_remove_bond_stereo;
	rdkit_tribool tautomer_remove_isotopic_hs;
	rdkit_tribool tautomer_reassign_stereo;
	rdkit_tribool largest_fragment_chooser_use_atom_count;
	rdkit_tribool largest_fragment_chooser_count_heavy_atoms_only;
} rdkit_mol_standardize_cleanup_parameters;

RDKIT_CFFI_API rdkit_mol_standardize_CleanupParameters *rdkit_mol_standardize_cleanup_parameters_new(void);
RDKIT_CFFI_API void rdkit_mol_standardize_cleanup_parameters_del(rdkit_mol_standardize_CleanupParameters *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_cleanup_parameters_ctor(rdkit_mol_standardize_CleanupParameters *cthis);
RDKIT_CFFI_API void rdkit_mol_standardize_cleanup_parameters_ctor_params(rdkit_mol_standardize_CleanupParameters *cthis, const rdkit_mol_standardize_cleanup_parameters *params);
RDKIT_CFFI_API void rdkit_mol_standardize_cleanup_parameters_dtor(rdkit_mol_standardize_CleanupParameters *cthis);
RDKIT_CFFI_API const rdkit_mol_standardize_CleanupParameters *rdkit_mol_standardize_cleanup_parameters_defaults(void);

RDKIT_CFFI_API bool rdkit_mol_standardize_cleanup(rdkit_RWMol *cthis);
RDKIT_CFFI_API bool rdkit_mol_standardize_cleanup_ex(rdkit_RWMol *cthis, const rdkit_mol_standardize_CleanupParameters *cparams);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__MOLSTANDARDIZE_H */
