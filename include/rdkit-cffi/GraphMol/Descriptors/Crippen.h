#ifndef RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__CRIPPEN_H
#define RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__CRIPPEN_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API void rdkit_descriptors_calc_crippen_descriptors(const rdkit_ROMol *cromol, double *logp, double *mr);
RDKIT_CFFI_API void rdkit_descriptors_calc_crippen_descriptors_ex(const rdkit_ROMol *cromol, double *logp, double *mr, rdkit_tribool include_hs, rdkit_tribool force);
RDKIT_CFFI_API double rdkit_descriptors_calc_clogp(const rdkit_ROMol *cromol);
RDKIT_CFFI_API double rdkit_descriptors_calc_mr(const rdkit_ROMol *cromol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__CRIPPEN_H */
