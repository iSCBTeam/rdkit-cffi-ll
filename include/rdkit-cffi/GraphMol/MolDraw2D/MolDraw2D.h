#ifndef RDKIT_CFFI__GRAPHMOL__MOLDRAW2D_MOLDRAW2D_H
#define RDKIT_CFFI__GRAPHMOL__MOLDRAW2D_MOLDRAW2D_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MolDraw2D
{
    alignas(RDKIT_ALIGNOF_MOLDRAW2D) char opaque[RDKIT_SIZEOF_MOLDRAW2D];
};

RDKIT_CFFI_API void rdkit_mol_draw_2d_dtor(rdkit_MolDraw2D *cthis);
RDKIT_CFFI_API bool rdkit_mol_draw_2d_clear_drawing(rdkit_MolDraw2D *cthis);
RDKIT_CFFI_API bool rdkit_mol_draw_2d_draw_molecule(rdkit_MolDraw2D *cthis, const rdkit_ROMol *cmol);
RDKIT_CFFI_API bool rdkit_mol_draw_2d_draw_molecule_ex(rdkit_MolDraw2D *cthis, const rdkit_ROMol *cmol, const rdkit_string *clegend);
RDKIT_CFFI_API bool rdkit_mol_draw_2d_draw_molecules_ex(rdkit_MolDraw2D *cthis, size_t cnt, const rdkit_ROMol *const *cmols, const rdkit_string *const *clegends);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLDRAW2D_MOLDRAW2D_H */
