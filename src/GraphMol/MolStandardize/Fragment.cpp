#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit-cffi/GraphMol/MolStandardize/Fragment.h"
#include "rdkit/GraphMol/MolStandardize/Fragment.h"

#include "GraphMol/ROMol.hpp"
#include "Fragment.hpp"
#include "MolStandardize.hpp"

using namespace RDKit;
using namespace RDKit::MolStandardize;

static_assert(alignof(LargestFragmentChooser) == alignof(rdkit_mol_standardize_LargestFragmentChooser));
static_assert(sizeof(LargestFragmentChooser) == sizeof(rdkit_mol_standardize_LargestFragmentChooser));

rdkit_mol_standardize_LargestFragmentChooser *rdkit_mol_standardize_largest_fragment_chooser_new(void)
{
	auto this_ = static_cast<LargestFragmentChooser *>(::operator new(sizeof(LargestFragmentChooser), std::align_val_t(alignof(LargestFragmentChooser))));
	return cpp2c(this_);
}

void rdkit_mol_standardize_largest_fragment_chooser_del(rdkit_mol_standardize_LargestFragmentChooser *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_standardize_largest_fragment_chooser_ctor(rdkit_mol_standardize_LargestFragmentChooser *cthis)
{
	rdkit_mol_standardize_largest_fragment_chooser_ctor_params(cthis, nullptr);
}

void rdkit_mol_standardize_largest_fragment_chooser_ctor_params(rdkit_mol_standardize_LargestFragmentChooser *cthis, const rdkit_mol_standardize_CleanupParameters *cparams)
{
	if (!cparams)
		cparams = rdkit_mol_standardize_cleanup_parameters_defaults();

	auto params = c2cpp(cparams);

	new (cthis) LargestFragmentChooser(*params);
}

void rdkit_mol_standardize_largest_fragment_chooser_dtor(rdkit_mol_standardize_LargestFragmentChooser *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~LargestFragmentChooser();
}

bool rdkit_mol_standardize_largest_fragment_chooser_choose(const rdkit_mol_standardize_LargestFragmentChooser *cthis, const rdkit_ROMol *cmol, rdkit_ROMol *cfrag)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	try {
		auto frag = this_->choose(*mol);
		if (!frag)
			return false;

		/* Replace the starting molecule */
		if (cmol == cfrag)
		{
			auto old_frag = c2cpp(cfrag);
			old_frag->~ROMol();
		}

		new (cfrag) ROMol(std::move(*frag));
		delete frag;
		return true;
	} catch (const std::exception& e) {
		return false;
	}
}

bool rdkit_mol_standardize_largest_fragment_chooser_choose_in_place(const rdkit_mol_standardize_LargestFragmentChooser *cthis, rdkit_ROMol *cmol)
{
	return rdkit_mol_standardize_largest_fragment_chooser_choose(cthis, cmol, cmol);
}