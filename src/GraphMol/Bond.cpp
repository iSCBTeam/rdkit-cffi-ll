#include "rdkit-cffi/GraphMol/Bond.h"
#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit/GraphMol/Bond.h"

#include "RDGeneral/RDProps.hpp"
#include "Bond.hpp"

using namespace RDKit;

static_assert(alignof(Bond) == alignof(rdkit_Bond));
static_assert(sizeof(Bond) == sizeof(rdkit_Bond));

rdkit_RDProps *rdkit_bond_to_rdprops(rdkit_Bond *cthis)
{
	RDProps *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_Bond *rdkit_bond_from_rdprops(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<Bond *>(this_);
	return cpp2c(obj);
}

rdkit_Bond *rdkit_bond_new(void)
{
	auto this_ = static_cast<Bond *>(::operator new(sizeof(Bond), std::align_val_t(alignof(Bond))));
	return cpp2c(this_);
}

void rdkit_bond_del(rdkit_Bond *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_bond_ctor(rdkit_Bond *cthis)
{
	new (cthis) Bond();
}

void rdkit_bond_ctor_clone(rdkit_Bond *cthis, const rdkit_Bond *cother)
{
	auto other = c2cpp(cother);
	new (cthis) Bond(*other);
}

void rdkit_bond_ctor_move(rdkit_Bond *cthis, rdkit_Bond *cother)
{
	auto other = c2cpp(cother);
	new (cthis) Bond(std::move(*other));
}

void rdkit_bond_dtor(rdkit_Bond *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Bond();
}

rdkit_bond_BondType rdkit_bond_get_bond_type(const rdkit_Bond *cthis)
{
	auto this_ = c2cpp(cthis);
	return static_cast<rdkit_bond_BondType>(this_->getBondType());
}

double rdkit_bond_get_bond_type_as_double(const rdkit_Bond *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getBondTypeAsDouble();
}

uint32_t rdkit_bond_get_begin_atom_idx(const rdkit_Bond *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getBeginAtomIdx();
}

uint32_t rdkit_bond_get_end_atom_idx(const rdkit_Bond *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getEndAtomIdx();
}
