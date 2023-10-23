#ifndef RDKIT_CFFI__GRAPHMOL__RWMOL_H
#define RDKIT_CFFI__GRAPHMOL__RWMOL_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_RWMol
{
    alignas(RDKIT_ALIGNOF_RWMOL) char opaque[RDKIT_SIZEOF_RWMOL];
};

RDKIT_CFFI_API rdkit_ROMol *rdkit_rwmol_to_romol(rdkit_RWMol *cthis);
RDKIT_CFFI_API rdkit_RWMol *rdkit_rwmol_from_romol(rdkit_ROMol *cthis);

RDKIT_CFFI_API rdkit_RWMol *rdkit_rwmol_new(void);
RDKIT_CFFI_API void rdkit_rwmol_del(rdkit_RWMol *cthis);
RDKIT_CFFI_API void rdkit_rwmol_ctor(rdkit_RWMol *cthis);
RDKIT_CFFI_API void rdkit_rwmol_dtor(rdkit_RWMol *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__RWMOL_H */
