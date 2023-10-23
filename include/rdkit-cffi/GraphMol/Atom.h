#ifndef RDKIT_CFFI__GRAPHMOL__ATOM_H
#define RDKIT_CFFI__GRAPHMOL__ATOM_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_Atom
{
    alignas(RDKIT_ALIGNOF_ATOM) char opaque[RDKIT_SIZEOF_ATOM];
};

RDKIT_CFFI_API rdkit_RDProps *rdkit_atom_to_rdprops(rdkit_Atom *cthis);
RDKIT_CFFI_API rdkit_Atom *rdkit_atom_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_Atom *rdkit_atom_new(void);
RDKIT_CFFI_API void rdkit_atom_del(rdkit_Atom *cthis);
RDKIT_CFFI_API void rdkit_atom_ctor(rdkit_Atom *cthis);
RDKIT_CFFI_API void rdkit_atom_dtor(rdkit_Atom *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__ATOM_H */
