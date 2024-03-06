#ifndef RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__LIPINSKI_H
#define RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__LIPINSKI_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum rdkit_descriptors_NumRotatableBondsOptions {
	RDKIT_DESCRIPTORS_NUM_ROTATABLE_BONDS_OPTION_DEFAULT = -1,
	RDKIT_DESCRIPTORS_NUM_ROTATABLE_BONDS_OPTION_NON_STRICT = 0,
	RDKIT_DESCRIPTORS_NUM_ROTATABLE_BONDS_OPTION_STRICT = 1,
	RDKIT_DESCRIPTORS_NUM_ROTATABLE_BONDS_OPTION_STRICT_LINKAGES = 2,
} rdkit_descriptors_NumRotatableBondsOptions;

RDKIT_CFFI_API double rdkit_descriptors_calc_fraction_csp3(const rdkit_ROMol *cromol);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_hba(const rdkit_ROMol *cromol);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_hbd(const rdkit_ROMol *cromol);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_rings(const rdkit_ROMol *cromol);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_rotatable_bonds(const rdkit_ROMol *cromol);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_rotatable_bonds_ex(const rdkit_ROMol *cromol, rdkit_descriptors_NumRotatableBondsOptions opt);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_atom_stereo_centers(const rdkit_ROMol *cromol);
RDKIT_CFFI_API uint32_t rdkit_descriptors_calc_num_unspecified_atom_stereo_centers(const rdkit_ROMol *cromol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__LIPINSKI_H */
