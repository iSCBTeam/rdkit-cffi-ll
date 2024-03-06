#ifndef RDKIT_CFFI__GRAPHMOL__MOLDRAW2D_MOLDRAW2DSVG_H
#define RDKIT_CFFI__GRAPHMOL__MOLDRAW2D_MOLDRAW2DSVG_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MolDraw2DSVG
{
    alignas(RDKIT_ALIGNOF_MOLDRAW2DSVG) char opaque[RDKIT_SIZEOF_MOLDRAW2DSVG];
};


RDKIT_CFFI_API rdkit_MolDraw2D *rdkit_mol_draw_2d_svg_to_mol_draw_2d(rdkit_MolDraw2DSVG *cthis);
RDKIT_CFFI_API rdkit_MolDraw2DSVG *rdkit_mol_draw_2d_svg_from_mol_draw_2d(rdkit_MolDraw2D *cthis);

RDKIT_CFFI_API rdkit_MolDraw2DSVG *rdkit_mol_draw_2d_svg_new(void);
RDKIT_CFFI_API void rdkit_mol_draw_2d_svg_del(rdkit_MolDraw2DSVG *cthis);
RDKIT_CFFI_API void rdkit_mol_draw_2d_svg_ctor(rdkit_MolDraw2DSVG *cthis, int32_t width, int32_t height);
RDKIT_CFFI_API void rdkit_mol_draw_2d_svg_ctor_ex(rdkit_MolDraw2DSVG *cthis, int32_t width, int32_t height, int32_t panel_width, int32_t panel_height);
RDKIT_CFFI_API void rdkit_mol_draw_2d_svg_dtor(rdkit_MolDraw2DSVG *cthis);
RDKIT_CFFI_API bool rdkit_mol_draw_2d_svg_finish_drawing(rdkit_MolDraw2DSVG *cthis);
RDKIT_CFFI_API bool rdkit_mol_draw_2d_svg_get_drawing_text(const rdkit_MolDraw2DSVG *cthis, rdkit_string_owned *text);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLDRAW2D_MOLDRAW2DSVG_H */
