#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/FileParsers/MolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MolSupplier.h"

#include "GraphMol/ROMol.hpp"
#include "MolSupplier.hpp"

using namespace RDKit;

static_assert(alignof(MolSupplier) == alignof(rdkit_MolSupplier));
static_assert(sizeof(MolSupplier) == sizeof(rdkit_MolSupplier));

void rdkit_mol_supplier_dtor(rdkit_MolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MolSupplier();
}

void rdkit_mol_supplier_init(rdkit_MolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->init();
}

void rdkit_mol_supplier_reset(rdkit_MolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->reset();
}

bool rdkit_mol_supplier_at_end(rdkit_MolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->atEnd();
}

bool rdkit_mol_supplier_next(rdkit_MolSupplier *cthis, rdkit_ROMol *cromol)
{
	auto this_ = c2cpp(cthis);
	auto romol = this_->next();
	if (!romol)
		return false;

	new (cromol) ROMol(std::move(*romol));
	delete romol;
	return true;
}

void rdkit_mol_supplier_close(rdkit_MolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->close();
}
