#ifndef RDKIT_CFFI__GRAPHMOL__DEPICTOR__RDDEPICTOR_H
#define RDKIT_CFFI__GRAPHMOL__DEPICTOR__RDDEPICTOR_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API uint32_t rdkit_depictor_compute_2d_coords(rdkit_ROMol *cromol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__DEPICTOR__RDDEPICTOR_H */
