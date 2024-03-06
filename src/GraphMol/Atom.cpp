#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit-cffi/GraphMol/Atom.h"
#include "rdkit/GraphMol/Atom.h"

#include "string.hpp"
#include "RDGeneral/RDProps.hpp"
#include "Atom.hpp"

using namespace RDKit;

static_assert(alignof(Atom) == alignof(rdkit_Atom));
static_assert(sizeof(Atom) == sizeof(rdkit_Atom));
static_assert(alignof(std::vector<std::shared_ptr<Atom>>) == alignof(rdkit_Atom_sptr_vec));
static_assert(sizeof(std::vector<std::shared_ptr<Atom>>) == sizeof(rdkit_Atom_sptr_vec));

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

void rdkit_atom_ctor_atomic_num(rdkit_Atom *cthis, uint32_t atomic_num)
{
	new (cthis) Atom(static_cast<unsigned int>(atomic_num));
}

void rdkit_atom_ctor_symbol(rdkit_Atom *cthis, const rdkit_string *symbol)
{
	new (cthis) Atom(std::string(rdkit_string_to_view(symbol)));
}

void rdkit_atom_dtor(rdkit_Atom *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Atom();
}

bool rdkit_atom_match(const rdkit_Atom *cthis, const rdkit_Atom *cother)
{
	auto this_ = c2cpp(cthis);
	auto other = c2cpp(cother);

	return this_->Match(other);
}

int32_t rdkit_atom_get_atomic_num(const rdkit_Atom *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getAtomicNum();
}

void rdkit_atom_set_atomic_num(rdkit_Atom *cthis, int32_t atomic_num)
{
	auto this_ = c2cpp(cthis);
	this_->setAtomicNum(atomic_num);
}


uint32_t rdkit_atom_get_isotope(const rdkit_Atom *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getIsotope();
}

void rdkit_atom_set_isotope(rdkit_Atom *cthis, uint32_t mass_number)
{
	auto this_ = c2cpp(cthis);
	this_->setIsotope(mass_number);
}

bool rdkit_atom_get_symbol(const rdkit_Atom *cthis, rdkit_string_owned *symbol)
{
	auto this_ = c2cpp(cthis);

	try {
		rdkit_string_owned_ctor_move(symbol, this_->getSymbol());
	} catch(std::exception& e) {
		rdkit_string_owned_ctor(symbol);
		return false;
	}
	return true;
}

rdkit_Atom_sptr_vec *rdkit_atom_sptr_vec_new(void)
{
	auto this_ = static_cast<std::vector<std::shared_ptr<Atom>> *>(::operator new(sizeof(std::vector<std::shared_ptr<Atom>>), std::align_val_t(alignof(std::vector<std::shared_ptr<Atom>>))));
	return cpp2c(this_);
}

void rdkit_atom_sptr_vec_del(rdkit_Atom_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_atom_sptr_vec_ctor(rdkit_Atom_sptr_vec *cthis)
{
	new (cthis) std::vector<std::shared_ptr<Atom>>();
}

void rdkit_atom_sptr_vec_dtor(rdkit_Atom_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~vector<std::shared_ptr<Atom>>();
}

size_t rdkit_atom_sptr_vec_size(const rdkit_Atom_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);

	return this_->size();
}

const rdkit_Atom *rdkit_atom_sptr_vec_get(const rdkit_Atom_sptr_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return nullptr;

	auto e = (*this_)[i].get();
	return cpp2c(e);
}

rdkit_Atom *rdkit_atom_sptr_vec_get_mut(rdkit_Atom_sptr_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return nullptr;

	auto e = (*this_)[i].get();
	return cpp2c(e);
}

void rdkit_atom_sptr_vec_clear(rdkit_Atom_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);

	this_->clear();
}

void rdkit_atom_sptr_vec_delete(rdkit_Atom_sptr_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return;

	this_->erase(this_->begin() + i);
}

void rdkit_atom_sptr_vec_append(rdkit_Atom_sptr_vec *cthis, rdkit_Atom *catom)
{
	auto this_ = c2cpp(cthis);
	auto atom = c2cpp(catom);

	auto ptr = std::make_shared<Atom>(*atom);
	this_->push_back(ptr);
}

void rdkit_atom_sptr_vec_append_move(rdkit_Atom_sptr_vec *cthis, rdkit_Atom *catom)
{
	auto this_ = c2cpp(cthis);
	auto atom = c2cpp(catom);

	auto ptr = std::make_shared<Atom>(std::move(*atom));
	this_->push_back(ptr);
}

bool rdkit_atom_sptr_vec_set(rdkit_Atom_sptr_vec *cthis, size_t i, rdkit_Atom *catom)
{
	auto this_ = c2cpp(cthis);
	auto atom = c2cpp(catom);

	if (i >= this_->size())
		this_->resize(i + 1);

	(*this_)[i] = std::make_shared<Atom>(*atom);
	return true;
}

bool rdkit_atom_sptr_vec_set_move(rdkit_Atom_sptr_vec *cthis, size_t i, rdkit_Atom *catom)
{
	auto this_ = c2cpp(cthis);
	auto atom = c2cpp(catom);

	if (i >= this_->size())
		this_->resize(i + 1);

	(*this_)[i] = std::make_shared<Atom>(std::move(*atom));
	return true;
}
