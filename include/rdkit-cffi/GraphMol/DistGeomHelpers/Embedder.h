#ifndef RDKIT_CFFI__GRAPHMOL__DISTGEOMHELPERS__EMBEDDER_H
#define RDKIT_CFFI__GRAPHMOL__DISTGEOMHELPERS__EMBEDDER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

RDKIT_CFFI_API int32_t rdkit_dist_geom_helpers_embed_molecule(rdkit_ROMol *cmol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__DISTGEOMHELPERS__EMBEDDER_H */
