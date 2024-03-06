#include "rdkit-cffi/GraphMol/Conformer.h"
#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit/GraphMol/Conformer.h"

#include "Geometry/Point.hpp"
#include "RDGeneral/RDProps.hpp"
#include "ROMol.hpp"
#include "Conformer.hpp"

using namespace RDKit;
using namespace RDGeom;

static_assert(alignof(Conformer) == alignof(rdkit_Conformer));
static_assert(sizeof(Conformer) == sizeof(rdkit_Conformer));

rdkit_RDProps *rdkit_conformer_to_rdprops(rdkit_Conformer *cthis)
{
	RDProps *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_Conformer *rdkit_conformer_from_rdprops(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<Conformer *>(this_);
	return cpp2c(obj);
}

rdkit_Conformer *rdkit_conformer_new(void)
{
	auto this_ = static_cast<Conformer *>(::operator new(sizeof(Conformer), std::align_val_t(alignof(Conformer))));
	return cpp2c(this_);
}

void rdkit_conformer_del(rdkit_Conformer *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_conformer_ctor(rdkit_Conformer *cthis)
{
	new (cthis) Conformer();
}

void rdkit_conformer_ctor_clone(rdkit_Conformer *cthis, const rdkit_Conformer *cother)
{
	auto other = c2cpp(cother);
	new (cthis) Conformer(*other);
}

void rdkit_conformer_ctor_move(rdkit_Conformer *cthis, rdkit_Conformer *cother)
{
	auto other = c2cpp(cother);
	new (cthis) Conformer(std::move(*other));
}

void rdkit_conformer_dtor(rdkit_Conformer *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Conformer();
}

uint32_t rdkit_conformer_get_num_atoms(const rdkit_Conformer *cthis)
{
    auto this_ = c2cpp(cthis);
	return this_->getNumAtoms();
}

const rdkit_geom_Point3D *rdkit_conformer_get_atom_pos(const rdkit_Conformer *cthis, uint32_t idx)
{
    auto this_ = c2cpp(cthis);

	try {
		auto &pos = this_->getAtomPos(idx);
		return cpp2c(&pos);
	} catch(...) {
		return nullptr;
	}
}
