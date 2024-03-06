#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit-cffi/GraphMol/RWMol.h"
#include "rdkit/GraphMol/RWMol.h"

#include "ROMol.hpp"
#include "RWMol.hpp"

using namespace RDKit;

rdkit_ROMol *rdkit_rwmol_to_romol(rdkit_RWMol *cthis)
{
	ROMol *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_RWMol *rdkit_rwmol_from_romol(rdkit_ROMol *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<RWMol *>(this_);
	return cpp2c(obj);
}

rdkit_RWMol *rdkit_rwmol_new(void)
{
	auto this_ = static_cast<RWMol *>(::operator new(sizeof(RWMol), std::align_val_t(alignof(RWMol))));
	return cpp2c(this_);
}

void rdkit_rwmol_del(rdkit_RWMol *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_rwmol_ctor(rdkit_RWMol *cthis)
{
	new (cthis) RWMol();
}

void rdkit_rwmol_ctor_from_romol(rdkit_RWMol *cthis, const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);

	new (cthis) RWMol(*romol);
}

void rdkit_rwmol_dtor(rdkit_RWMol *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~RWMol();
}
