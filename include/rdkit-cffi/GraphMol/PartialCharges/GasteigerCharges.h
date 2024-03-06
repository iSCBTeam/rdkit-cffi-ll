#ifndef RDKIT_CFFI__GRAPHMOL__PARTIALCHARGES__GASTEIGERCHARGES_H
#define RDKIT_CFFI__GRAPHMOL__PARTIALCHARGES__GASTEIGERCHARGES_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API bool rdkit_compute_gasteiger_charges(rdkit_ROMol *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__PARTIALCHARGES__GASTEIGERCHARGES_H */
