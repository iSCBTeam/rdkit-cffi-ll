#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/MolStandardize/MolStandardize.h"
#include "rdkit/GraphMol/MolStandardize/MolStandardize.h"

#include "GraphMol/RWMol.hpp"
#include "MolStandardize.hpp"

using namespace RDKit;
using namespace RDKit::MolStandardize;

static_assert(alignof(CleanupParameters) == alignof(rdkit_mol_standardize_CleanupParameters));
static_assert(sizeof(CleanupParameters) == sizeof(rdkit_mol_standardize_CleanupParameters));

rdkit_mol_standardize_CleanupParameters *rdkit_mol_standardize_cleanup_parameters_new(void)
{
	auto this_ = static_cast<CleanupParameters *>(::operator new(sizeof(CleanupParameters), std::align_val_t(alignof(CleanupParameters))));
	return cpp2c(this_);
}

void rdkit_mol_standardize_cleanup_parameters_del(rdkit_mol_standardize_CleanupParameters *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_standardize_cleanup_parameters_ctor(rdkit_mol_standardize_CleanupParameters *cthis)
{
	return rdkit_mol_standardize_cleanup_parameters_ctor_params(cthis, nullptr);
}

void rdkit_mol_standardize_cleanup_parameters_ctor_params(rdkit_mol_standardize_CleanupParameters *cthis, const rdkit_mol_standardize_cleanup_parameters *params)
{
	auto this_ = c2cpp(cthis);

	new (this_) CleanupParameters();

	if (!params)
		return;

	if (params->max_restarts != RDKIT_DEFAULT_I32)
		this_->maxRestarts = params->max_restarts;

	if (params->prefer_organic != RDKIT_DEFAULT_TRIBOOL)
		this_->preferOrganic = params->prefer_organic;

	if (params->do_canonical != RDKIT_DEFAULT_TRIBOOL)
		this_->doCanonical = params->do_canonical;

	if (params->max_tautomers != RDKIT_DEFAULT_I32)
		this_->maxTautomers = params->max_tautomers;

	if (params->max_transforms != RDKIT_DEFAULT_I32)
		this_->maxTransforms = params->max_transforms;

	if (params->tautomer_remove_sp3_stereo != RDKIT_DEFAULT_TRIBOOL)
		this_->tautomerRemoveSp3Stereo = params->tautomer_remove_sp3_stereo;

	if (params->tautomer_remove_bond_stereo != RDKIT_DEFAULT_TRIBOOL)
		this_->tautomerRemoveBondStereo = params->tautomer_remove_bond_stereo;

	if (params->tautomer_remove_isotopic_hs != RDKIT_DEFAULT_TRIBOOL)
		this_->tautomerRemoveIsotopicHs = params->tautomer_remove_isotopic_hs;

	if (params->tautomer_reassign_stereo != RDKIT_DEFAULT_TRIBOOL)
		this_->tautomerReassignStereo = params->tautomer_reassign_stereo;

	if (params->largest_fragment_chooser_use_atom_count != RDKIT_DEFAULT_TRIBOOL)
		this_->largestFragmentChooserUseAtomCount = params->largest_fragment_chooser_use_atom_count;

	if (params->largest_fragment_chooser_count_heavy_atoms_only != RDKIT_DEFAULT_TRIBOOL)
		this_->largestFragmentChooserCountHeavyAtomsOnly = params->largest_fragment_chooser_count_heavy_atoms_only;
}

void rdkit_mol_standardize_cleanup_parameters_dtor(rdkit_mol_standardize_CleanupParameters *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~CleanupParameters();
}

const rdkit_mol_standardize_CleanupParameters *rdkit_mol_standardize_cleanup_parameters_defaults(void)
{
	static const CleanupParameters defaults;
	return cpp2c(&defaults);
}

bool rdkit_mol_standardize_cleanup(rdkit_RWMol *cthis)
{
	return rdkit_mol_standardize_cleanup_ex(cthis, nullptr);
}

bool rdkit_mol_standardize_cleanup_ex(rdkit_RWMol *cthis, const rdkit_mol_standardize_CleanupParameters *cparams)
{
	auto this_ = c2cpp(cthis);

	if (!cparams)
		cparams = rdkit_mol_standardize_cleanup_parameters_defaults();

	auto params = c2cpp(cparams);

	bool got_ex = true;
	std::string ex_what;

	try
	{
		cleanupInPlace(*this_, *params);
		got_ex = false;
	}
	catch (std::exception &ex)
	{
		ex_what = std::string(ex.what());
	}
	catch (...)
	{
		ex_what = std::string("Unknown reason");
	}

	return !got_ex;
}
