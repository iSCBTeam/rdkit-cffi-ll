#ifndef RDKIT_CFFI__GRAPHMOL__CONFORMER_H
#define RDKIT_CFFI__GRAPHMOL__CONFORMER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_Conformer
{
	alignas(RDKIT_ALIGNOF_CONFORMER) char opaque[RDKIT_SIZEOF_CONFORMER];
};

RDKIT_CFFI_API rdkit_RDProps *rdkit_conformer_to_rdprops(rdkit_Conformer *cthis);
RDKIT_CFFI_API rdkit_Conformer *rdkit_conformer_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_Conformer *rdkit_conformer_new(void);
RDKIT_CFFI_API void rdkit_conformer_del(rdkit_Conformer *cthis);
RDKIT_CFFI_API void rdkit_conformer_ctor(rdkit_Conformer *cthis);
RDKIT_CFFI_API void rdkit_conformer_ctor_clone(rdkit_Conformer *cthis, const rdkit_Conformer *cother);
RDKIT_CFFI_API void rdkit_conformer_ctor_move(rdkit_Conformer *cthis, rdkit_Conformer *cother);
RDKIT_CFFI_API void rdkit_conformer_dtor(rdkit_Conformer *cthis);
RDKIT_CFFI_API uint32_t rdkit_conformer_get_num_atoms(const rdkit_Conformer *cthis);
RDKIT_CFFI_API const rdkit_geom_Point3D *rdkit_conformer_get_atom_pos(const rdkit_Conformer *cthis, uint32_t idx);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__CONFORMER_H */
