#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/ChemReactions/Reaction.h"
#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit/GraphMol/ChemReactions/Reaction.h"

#include "RDGeneral/RDProps.hpp"
#include "GraphMol/ROMol.hpp"
#include "Reaction.hpp"

using namespace RDKit;

static_assert(alignof(ChemicalReaction) == alignof(rdkit_ChemicalReaction));
static_assert(sizeof(ChemicalReaction) == sizeof(rdkit_ChemicalReaction));

rdkit_RDProps *rdkit_chemical_reaction_to_rdprops(rdkit_ChemicalReaction *cthis)
{
	RDProps *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_ChemicalReaction *rdkit_chemical_reaction_from_rdprops(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<ChemicalReaction *>(this_);
	return cpp2c(obj);
}

rdkit_ChemicalReaction *rdkit_chemical_reaction_new(void)
{
	auto this_ = static_cast<ChemicalReaction *>(::operator new(sizeof(ChemicalReaction), std::align_val_t(alignof(ChemicalReaction))));
	return cpp2c(this_);
}

void rdkit_chemical_reaction_del(rdkit_ChemicalReaction *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

bool rdkit_chemical_reaction_ctor(rdkit_ChemicalReaction *cthis)
{
	try {
		new (cthis) ChemicalReaction();
		return true;
	} catch (...) {
		return false;
	}
}

void rdkit_chemical_reaction_dtor(rdkit_ChemicalReaction *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~ChemicalReaction();
}

void rdkit_chemical_reaction_init_reactant_matchers(rdkit_ChemicalReaction *cthis)
{
	rdkit_chemical_reaction_init_reactant_matchers_ex(cthis, RDKIT_DEFAULT_TRIBOOL);
}

void rdkit_chemical_reaction_init_reactant_matchers_ex(rdkit_ChemicalReaction *cthis, rdkit_tribool silent)
{
	auto this_ = c2cpp(cthis);

	if (silent == RDKIT_DEFAULT_TRIBOOL)
		silent = false;

	this_->initReactantMatchers(silent);
}

bool rdkit_chemical_reaction_run_reactants(const rdkit_ChemicalReaction *cthis, const rdkit_ROMol_sptr_vec *creactants, rdkit_ROMol_sptr_vec_vec *cproducts)
{
	return rdkit_chemical_reaction_run_reactants_ex(cthis, creactants, cproducts, RDKIT_DEFAULT_U32);
}

bool rdkit_chemical_reaction_run_reactants_ex(const rdkit_ChemicalReaction *cthis, const rdkit_ROMol_sptr_vec *creactants, rdkit_ROMol_sptr_vec_vec *cproducts, uint32_t max_num_products)
{
	auto this_ = c2cpp(cthis);

	if (max_num_products == RDKIT_DEFAULT_U32)
		max_num_products = 1000;

	auto reactants = c2cpp(creactants);

	try {
		new (cproducts) std::vector<MOL_SPTR_VECT>(this_->runReactants(*reactants, max_num_products));
	} catch(...) {
		return false;
	}

	return true;
}

const rdkit_ROMol_sptr_vec *rdkit_chemical_reaction_get_reactants(const rdkit_ChemicalReaction *cthis)
{
	auto this_ = c2cpp(cthis);

	auto &reactants = this_->getReactants();
	return cpp2c(&reactants);
}
