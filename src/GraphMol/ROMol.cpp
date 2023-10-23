#include "rdkit-cffi/GraphMol/Atom.h"
#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit/GraphMol/ROMol.h"

#include "RDGeneral/RDProps.hpp"
#include "Atom.hpp"
#include "ROMol.hpp"
#include "RWMol.hpp"

using namespace RDKit;

static_assert(alignof(ROMol) == alignof(rdkit_ROMol));
static_assert(sizeof(ROMol) == sizeof(rdkit_ROMol));
static_assert(alignof(MOL_SPTR_VECT) == alignof(rdkit_ROMol_sptr_vec));
static_assert(sizeof(MOL_SPTR_VECT) == sizeof(rdkit_ROMol_sptr_vec));
static_assert(alignof(std::vector<MOL_SPTR_VECT>) == alignof(rdkit_ROMol_sptr_vec_vec));
static_assert(sizeof(std::vector<MOL_SPTR_VECT>) == sizeof(rdkit_ROMol_sptr_vec_vec));

rdkit_RDProps *rdkit_romol_to_rdprops(rdkit_ROMol *cthis)
{
	RDProps *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_ROMol *rdkit_romol_from_rdprops(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<ROMol *>(this_);
	return cpp2c(obj);
}

rdkit_ROMol *rdkit_romol_new(void)
{
	auto this_ = static_cast<ROMol *>(::operator new(sizeof(ROMol), std::align_val_t(alignof(ROMol))));
	return cpp2c(this_);
}

void rdkit_romol_del(rdkit_ROMol *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_romol_ctor(rdkit_ROMol *cthis)
{
	new (cthis) ROMol();
}

void rdkit_romol_ctor_from_rwmol_move(rdkit_ROMol *cthis, rdkit_RWMol *crwmol)
{
	auto rwmol = c2cpp(crwmol);
	new (cthis) ROMol(std::move(*rwmol));
}

void rdkit_romol_dtor(rdkit_ROMol *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~ROMol();
}

uint32_t rdkit_romol_get_num_atoms(const rdkit_ROMol *cthis)
{
    auto this_ = c2cpp(cthis);
	return this_->getNumAtoms();
}

uint32_t rdkit_romol_get_num_explicit_atoms(const rdkit_ROMol *cthis)
{
    auto this_ = c2cpp(cthis);
	return this_->getNumAtoms(true);
}

uint32_t rdkit_romol_get_num_heavy_atoms(const rdkit_ROMol *cthis)
{
    auto this_ = c2cpp(cthis);
	return this_->getNumHeavyAtoms();
}

const rdkit_Atom *rdkit_romol_get_atom(const rdkit_ROMol *cthis, uint32_t idx)
{
    auto this_ = c2cpp(cthis);
	try {
		return cpp2c(this_->getAtomWithIdx(idx));
	} catch(...) {
		return nullptr;
	}
}

rdkit_Atom *rdkit_romol_get_atom_mut(rdkit_ROMol *cthis, uint32_t idx)
{
    auto this_ = c2cpp(cthis);
	try {
		return cpp2c(this_->getAtomWithIdx(idx));
	} catch(...) {
		return nullptr;
	}
}

rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_new(void)
{
	auto this_ = static_cast<MOL_SPTR_VECT *>(::operator new(sizeof(MOL_SPTR_VECT), std::align_val_t(alignof(MOL_SPTR_VECT))));
	return cpp2c(this_);
}

void rdkit_romol_sptr_vec_del(rdkit_ROMol_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_romol_sptr_vec_ctor(rdkit_ROMol_sptr_vec *cthis)
{
	new (cthis) MOL_SPTR_VECT();
}

void rdkit_romol_sptr_vec_dtor(rdkit_ROMol_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MOL_SPTR_VECT();
}

size_t rdkit_romol_sptr_vec_size(const rdkit_ROMol_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);

	return this_->size();
}

const rdkit_ROMol *rdkit_romol_sptr_vec_get(const rdkit_ROMol_sptr_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return nullptr;

	auto e = (*this_)[i].get();
	return cpp2c(e);
}

rdkit_ROMol *rdkit_romol_sptr_vec_get_mut(rdkit_ROMol_sptr_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return nullptr;

	auto e = (*this_)[i].get();
	return cpp2c(e);
}

void rdkit_romol_sptr_vec_clear(rdkit_ROMol_sptr_vec *cthis)
{
	auto this_ = c2cpp(cthis);

	this_->clear();
}

void rdkit_romol_sptr_vec_delete(rdkit_ROMol_sptr_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return;

	this_->erase(this_->begin() + i);
}

void rdkit_romol_sptr_vec_append_move(rdkit_ROMol_sptr_vec *cthis, rdkit_ROMol *cromol)
{
	auto this_ = c2cpp(cthis);
	auto romol = c2cpp(cromol);

	auto ptr = boost::make_shared<ROMol>(std::move(*romol));
	this_->push_back(ptr);
}

rdkit_ROMol_sptr_vec_vec *rdkit_romol_sptr_vec_vec_new(void)
{
	auto this_ = static_cast<std::vector<MOL_SPTR_VECT> *>(::operator new(sizeof(std::vector<MOL_SPTR_VECT>), std::align_val_t(alignof(std::vector<MOL_SPTR_VECT>))));
	return cpp2c(this_);
}

void rdkit_romol_sptr_vec_vec_del(rdkit_ROMol_sptr_vec_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_romol_sptr_vec_vec_ctor(rdkit_ROMol_sptr_vec_vec *cthis)
{
	new (cthis) std::vector<MOL_SPTR_VECT>();
}

void rdkit_romol_sptr_vec_vec_dtor(rdkit_ROMol_sptr_vec_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~vector();
}

size_t rdkit_romol_sptr_vec_vec_size(const rdkit_ROMol_sptr_vec_vec *cthis)
{
	auto this_ = c2cpp(cthis);

	return this_->size();
}

const rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_vec_get(const rdkit_ROMol_sptr_vec_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return nullptr;

	auto e = &(*this_)[i];
	return cpp2c(e);
}

rdkit_ROMol_sptr_vec *rdkit_romol_sptr_vec_vec_get_mut(rdkit_ROMol_sptr_vec_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return nullptr;

	auto e = &(*this_)[i];
	return cpp2c(e);
}

void rdkit_romol_sptr_vec_vec_clear(rdkit_ROMol_sptr_vec_vec *cthis)
{
	auto this_ = c2cpp(cthis);

	this_->clear();
}

void rdkit_romol_sptr_vec_vec_delete(rdkit_ROMol_sptr_vec_vec *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);

	if (i >= this_->size())
		return;

	this_->erase(this_->begin() + i);
}

void rdkit_romol_sptr_vec_vec_append_move(rdkit_ROMol_sptr_vec_vec *cthis, rdkit_ROMol_sptr_vec *cromol_sptr_vec)
{
	auto this_ = c2cpp(cthis);
	auto romol_sptr_vec = c2cpp(cromol_sptr_vec);

	this_->push_back(std::move(*romol_sptr_vec));
}
