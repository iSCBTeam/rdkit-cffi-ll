#include "rdkit-cffi/GraphMol/RWMol.h"
#include "rdkit-cffi/GraphMol/MolStandardize/Charge.h"
#include "rdkit/GraphMol/MolStandardize/Charge.h"

#include "GraphMol/RWMol.hpp"
#include "Charge.hpp"
#include "MolStandardize.hpp"

using namespace RDKit;
using namespace RDKit::MolStandardize;

static_assert(alignof(Reionizer) == alignof(rdkit_mol_standardize_Reionizer));
static_assert(sizeof(Reionizer) == sizeof(rdkit_mol_standardize_Reionizer));
static_assert(alignof(Uncharger) == alignof(rdkit_mol_standardize_Uncharger));
static_assert(sizeof(Uncharger) == sizeof(rdkit_mol_standardize_Uncharger));

rdkit_mol_standardize_Reionizer *rdkit_mol_standardize_reionizer_new(void)
{
	auto this_ = static_cast<Reionizer *>(::operator new(sizeof(Reionizer), std::align_val_t(alignof(Reionizer))));
	return cpp2c(this_);
}

void rdkit_mol_standardize_reionizer_del(rdkit_mol_standardize_Reionizer *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_standardize_reionizer_ctor(rdkit_mol_standardize_Reionizer *cthis)
{
	new (cthis) Reionizer();
}

void rdkit_mol_standardize_reionizer_dtor(rdkit_mol_standardize_Reionizer *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Reionizer();
}

bool rdkit_mol_standardize_reionizer_reionize(const rdkit_mol_standardize_Reionizer *cthis, rdkit_RWMol *cmol)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	try {
		this_->reionizeInPlace(*mol);
		return true;
	} catch (const std::exception& e) {
		return false;
	}
}

rdkit_mol_standardize_Uncharger *rdkit_mol_standardize_uncharger_new(void)
{
	auto this_ = static_cast<Uncharger *>(::operator new(sizeof(Uncharger), std::align_val_t(alignof(Uncharger))));
	return cpp2c(this_);
}

void rdkit_mol_standardize_uncharger_del(rdkit_mol_standardize_Uncharger *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_standardize_uncharger_ctor(rdkit_mol_standardize_Uncharger *cthis)
{
	rdkit_mol_standardize_uncharger_ctor_params(cthis, nullptr);
}

void rdkit_mol_standardize_uncharger_ctor_params(rdkit_mol_standardize_Uncharger *cthis, const rdkit_mol_standardize_CleanupParameters *cparams)
{
	if (!cparams)
		cparams = rdkit_mol_standardize_cleanup_parameters_defaults();

	auto params = c2cpp(cparams);

	new (cthis) Uncharger(params->doCanonical);
}

void rdkit_mol_standardize_uncharger_dtor(rdkit_mol_standardize_Uncharger *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Uncharger();
}

bool rdkit_mol_standardize_uncharger_uncharge(const rdkit_mol_standardize_Uncharger *cthis, rdkit_RWMol *cmol)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	try {
		this_->unchargeInPlace(*mol);
		return true;
	} catch (const std::exception& e) {
		return false;
	}
}
