#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit-cffi/GraphMol/Atom.h"
#include "rdkit/GraphMol/Atom.h"

#include "RDGeneral/RDProps.hpp"
#include "Atom.hpp"

using namespace RDKit;

rdkit_RDProps *rdkit_atom_to_rdprops(rdkit_Atom *cthis)
{
	RDProps *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_Atom *rdkit_atom_from_rdprops(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<Atom *>(this_);
	return cpp2c(obj);
}

rdkit_Atom *rdkit_atom_new(void)
{
	auto this_ = static_cast<Atom *>(::operator new(sizeof(Atom), std::align_val_t(alignof(Atom))));
	return cpp2c(this_);
}

void rdkit_atom_del(rdkit_Atom *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_atom_ctor(rdkit_Atom *cthis)
{
	new (cthis) Atom();
}

void rdkit_atom_dtor(rdkit_Atom *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Atom();
}
