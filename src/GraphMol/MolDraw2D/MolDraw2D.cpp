#include "rdkit-cffi/GraphMol/MolDraw2D/MolDraw2D.h"
#include "rdkit/GraphMol/MolDraw2D/MolDraw2D.h"

#include "string.hpp"
#include "GraphMol/ROMol.hpp"
#include "MolDraw2D.hpp"

using namespace RDKit;

static_assert(alignof(MolDraw2D) == alignof(rdkit_MolDraw2D));
static_assert(sizeof(MolDraw2D) == sizeof(rdkit_MolDraw2D));


void rdkit_mol_draw_2d_dtor(rdkit_MolDraw2D *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MolDraw2D();
}

bool rdkit_mol_draw_2d_clear_drawing(rdkit_MolDraw2D *cthis)
{
	auto this_ = c2cpp(cthis);

	try {
		this_->clearDrawing();
	} catch(std::exception& e) {
		return false;
	}
	return true;
}

bool rdkit_mol_draw_2d_draw_molecule(rdkit_MolDraw2D *cthis, const rdkit_ROMol *cmol)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	try {
		this_->drawMolecule(*mol);
	} catch(std::exception& e) {
		return false;
	}
	return true;
}

bool rdkit_mol_draw_2d_draw_molecule_ex(rdkit_MolDraw2D *cthis, const rdkit_ROMol *cmol, const rdkit_string *clegend)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	try {
		this_->drawMolecule(*mol, std::string(clegend->s, clegend->len));
	} catch(std::exception& e) {
		return false;
	}
	return true;
}

bool rdkit_mol_draw_2d_draw_molecules_ex(rdkit_MolDraw2D *cthis, size_t cnt, const rdkit_ROMol *const *cmols, const rdkit_string *const *clegends)
{
	auto this_ = c2cpp(cthis);

	try {
		std::vector<const ROMol *> mols;
		std::vector<std::string> legends;

		mols.reserve(cnt);
		legends.reserve(cnt);

		for (size_t i = 0; i < cnt; i++) {
			auto mol = c2cpp(cmols[i]);
			auto clegend = clegends[i];
			auto legend = std::string(clegend->s, clegend->len);

			mols.push_back(mol);
			legends.push_back(legend);
		}

		this_->drawMolecules(mols, &legends);
	} catch(std::exception& e) {
		return false;
	}
	return true;
}
