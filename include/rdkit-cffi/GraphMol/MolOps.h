#ifndef RDKIT_CFFI__GRAPHMOL__MOLOPS_H
#define RDKIT_CFFI__GRAPHMOL__MOLOPS_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum rdkit_mol_ops_SanitizeFlags {
	RDKIT_SANITIZE_NONE = 0x0,
	RDKIT_SANITIZE_CLEANUP = 0x1,
	RDKIT_SANITIZE_PROPERTIES = 0x2,
	RDKIT_SANITIZE_SYMM_RINGS = 0x4,
	RDKIT_SANITIZE_KEKULIZE = 0x8,
	RDKIT_SANITIZE_FIND_RADICALS = 0x10,
	RDKIT_SANITIZE_SET_AROMATICITY = 0x20,
	RDKIT_SANITIZE_SET_CONJUGATION = 0x40,
	RDKIT_SANITIZE_SET_HYBRIDIZATION = 0x80,
	RDKIT_SANITIZE_CLEANUP_CHIRALITY = 0x100,
	RDKIT_SANITIZE_ADJUSTHS = 0x200,
	RDKIT_SANITIZE_CLEANUP_ORGANO_METALLICS = 0x400,
	RDKIT_SANITIZE_ALL = 0xFFFFFFF,
	RDKIT_SANITIZE_DEFAULT = RDKIT_SANITIZE_ALL,
} rdkit_mol_ops_SanitizeFlags;

typedef struct rdkit_mol_ops_RemoveHsParameters {
	bool remove_degree_zero;
	bool remove_higher_degrees;
	bool remove_only_h_neighbors;
	bool remove_isotopes;
	bool remove_and_track_isotopes;
	bool remove_dummy_neighbors;
	bool remove_defining_bond_stereo;
	bool remove_with_wedged_bond;
	bool remove_with_query;
	bool remove_mapped;
	bool remove_in_s_groups;
	bool show_warnings;
	bool remove_non_implicit;
	bool update_explicit_count;
	bool remove_hydrides;
	bool remove_non_tetrahedral_neighbors;
} rdkit_mol_ops_RemoveHsParameters;

RDKIT_CFFI_API bool rdkit_mol_ops_sanitize_mol(rdkit_RWMol *cthis);
RDKIT_CFFI_API bool rdkit_mol_ops_sanitize_mol_ex(rdkit_RWMol *cthis, rdkit_mol_ops_SanitizeFlags *operation_that_failed, uint32_t sanitize_ops);
RDKIT_CFFI_API bool rdkit_mol_ops_add_hs(rdkit_RWMol *cthis);
RDKIT_CFFI_API bool rdkit_mol_ops_add_hs_ex(rdkit_RWMol *cthis, rdkit_tribool explicit_only, rdkit_tribool add_coords, rdkit_tribool add_residue_info);
RDKIT_CFFI_API void rdkit_mol_ops_remove_hs_parameters_init_defaults(rdkit_mol_ops_RemoveHsParameters *cparams);
RDKIT_CFFI_API bool rdkit_mol_ops_remove_hs(rdkit_RWMol *cthis);
RDKIT_CFFI_API bool rdkit_mol_ops_remove_hs_ex(rdkit_RWMol *cthis, const rdkit_mol_ops_RemoveHsParameters *cparams, rdkit_tribool sanitize);
RDKIT_CFFI_API bool rdkit_mol_ops_assign_stereochemistry(rdkit_ROMol *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLOPS_H */
