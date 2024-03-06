#include "rdkit-cffi/GraphMol/MolDraw2D/MolDraw2DSVG.h"
#include "rdkit/GraphMol/MolDraw2D/MolDraw2DSVG.h"

#include "string.hpp"
#include "MolDraw2D.hpp"
#include "MolDraw2DSVG.hpp"

using namespace RDKit;

static_assert(alignof(MolDraw2DSVG) == alignof(rdkit_MolDraw2DSVG));
static_assert(sizeof(MolDraw2DSVG) == sizeof(rdkit_MolDraw2DSVG));

rdkit_MolDraw2D *rdkit_mol_draw_2d_svg_to_mol_draw_2d(rdkit_MolDraw2DSVG *cthis)
{
	MolDraw2D *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_MolDraw2DSVG *rdkit_mol_draw_2d_svg_from_mol_draw_2d(rdkit_MolDraw2D *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<MolDraw2DSVG *>(this_);
	return cpp2c(obj);
}

rdkit_MolDraw2DSVG *rdkit_mol_draw_2d_svg_new(void)
{
	auto this_ = static_cast<MolDraw2DSVG *>(::operator new(sizeof(MolDraw2DSVG), std::align_val_t(alignof(MolDraw2DSVG))));
	return cpp2c(this_);
}

void rdkit_mol_draw_2d_svg_del(rdkit_MolDraw2DSVG *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_draw_2d_svg_ctor(rdkit_MolDraw2DSVG *cthis, int32_t width, int32_t height)
{
	rdkit_mol_draw_2d_svg_ctor_ex(cthis, width, height, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_I32);
}

void rdkit_mol_draw_2d_svg_ctor_ex(rdkit_MolDraw2DSVG *cthis, int32_t width, int32_t height, int32_t panel_width, int32_t panel_height)
{
	if (panel_width == RDKIT_DEFAULT_I32)
		panel_width = -1;

	if (panel_height == RDKIT_DEFAULT_I32)
		panel_height = -1;

	new (cthis) MolDraw2DSVG(width, height, panel_width, panel_height);
}

void rdkit_mol_draw_2d_svg_dtor(rdkit_MolDraw2DSVG *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MolDraw2DSVG();
}

bool rdkit_mol_draw_2d_svg_finish_drawing(rdkit_MolDraw2DSVG *cthis)
{
	auto this_ = c2cpp(cthis);
	try {
		this_->finishDrawing();
	} catch(std::exception& e) {
		return false;
	}
	return true;
}

bool rdkit_mol_draw_2d_svg_get_drawing_text(const rdkit_MolDraw2DSVG *cthis, rdkit_string_owned *text)
{
	auto this_ = c2cpp(cthis);

	try {
		rdkit_string_owned_ctor_move(text, this_->getDrawingText());
	} catch(std::exception& e) {
		rdkit_string_owned_ctor(text);
		return false;
	}
	return true;
}
