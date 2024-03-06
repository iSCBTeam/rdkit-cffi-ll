#ifndef RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__MOLSURF_H
#define RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__MOLSURF_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API double rdkit_descriptors_calc_tpsa(const rdkit_ROMol *cromol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__DESCRIPTORS__MOLSURF_H */
