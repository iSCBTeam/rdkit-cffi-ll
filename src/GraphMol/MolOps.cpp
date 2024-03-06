#include "rdkit-cffi/GraphMol/MolOps.h"
#include "rdkit-cffi/GraphMol/RWMol.h"
#include "rdkit/GraphMol/MolOps.h"
#include "rdkit/GraphMol/RWMol.h"

#include "RWMol.hpp"

using namespace RDKit;
using namespace RDKit::MolOps;

bool rdkit_mol_ops_sanitize_mol(rdkit_RWMol *cthis)
{
	return rdkit_mol_ops_sanitize_mol_ex(cthis, nullptr, RDKIT_SANITIZE_DEFAULT);
}

bool rdkit_mol_ops_sanitize_mol_ex(rdkit_RWMol *cthis, rdkit_mol_ops_SanitizeFlags *operation_that_failed, uint32_t sanitize_ops)
{
	auto this_ = c2cpp(cthis);
	unsigned int failed_op = RDKIT_SANITIZE_NONE;
	bool got_ex = false;
	std::string ex_what;

	try
	{
		sanitizeMol(*this_, failed_op, sanitize_ops);
	}
	catch (MolSanitizeException &ex)
	{
		got_ex = true;
		ex_what = std::string(ex.what());
	}
	catch (std::exception &ex)
	{
		got_ex = true;
		ex_what = std::string(ex.what());
	}
	catch (...)
	{
		got_ex = true;
		ex_what = std::string("Unknown reason");
	}

	if (operation_that_failed)
		*operation_that_failed = static_cast<rdkit_mol_ops_SanitizeFlags>(failed_op);

	return !got_ex;
}

bool rdkit_mol_ops_add_hs(rdkit_RWMol *cthis)
{
	return rdkit_mol_ops_add_hs_ex(cthis, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

bool rdkit_mol_ops_add_hs_ex(rdkit_RWMol *cthis, rdkit_tribool explicit_only, rdkit_tribool add_coords, rdkit_tribool add_residue_info)
{
	auto this_ = c2cpp(cthis);

	if (explicit_only == RDKIT_DEFAULT_TRIBOOL)
		explicit_only = RDKIT_FALSE;
	if (add_coords == RDKIT_DEFAULT_TRIBOOL)
		add_coords = RDKIT_FALSE;
	if (add_residue_info == RDKIT_DEFAULT_TRIBOOL)
		add_residue_info = RDKIT_FALSE;

	bool got_ex = true;
	std::string ex_what;

	try
	{
		addHs(*this_, !!explicit_only, !!add_coords, nullptr, !!add_residue_info);
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

constexpr rdkit_mol_ops_RemoveHsParameters rdkit_mol_ops_RemoveHsParameters_defaults = {
	.remove_degree_zero = false,
	.remove_higher_degrees = false,
	.remove_only_h_neighbors = false,
	.remove_isotopes = false,
	.remove_and_track_isotopes = false,
	.remove_dummy_neighbors = false,
	.remove_defining_bond_stereo = false,
	.remove_with_wedged_bond = true,
	.remove_with_query = false,
	.remove_mapped = true,
	.remove_in_s_groups = true,
	.show_warnings = true,
	.remove_non_implicit = true,
	.update_explicit_count = false,
	.remove_hydrides = true,
	.remove_non_tetrahedral_neighbors = false,
};

void rdkit_mol_ops_remove_hs_parameters_init_defaults(rdkit_mol_ops_RemoveHsParameters *cparams)
{
	*cparams = rdkit_mol_ops_RemoveHsParameters_defaults;
}

bool rdkit_mol_ops_remove_hs(rdkit_RWMol *cthis)
{
	return rdkit_mol_ops_remove_hs_ex(cthis, nullptr, RDKIT_DEFAULT_TRIBOOL);
}

bool rdkit_mol_ops_remove_hs_ex(rdkit_RWMol *cthis, const rdkit_mol_ops_RemoveHsParameters *cparams, rdkit_tribool sanitize)
{
	auto this_ = c2cpp(cthis);
	RemoveHsParameters params;

	if (!cparams)
		cparams = &rdkit_mol_ops_RemoveHsParameters_defaults;

	params.removeDegreeZero = cparams->remove_degree_zero;
	params.removeHigherDegrees = cparams->remove_higher_degrees;
	params.removeOnlyHNeighbors = cparams->remove_only_h_neighbors;
	params.removeIsotopes = cparams->remove_isotopes;
	params.removeAndTrackIsotopes = cparams->remove_and_track_isotopes;
	params.removeDummyNeighbors = cparams->remove_dummy_neighbors;
	params.removeDefiningBondStereo = cparams->remove_defining_bond_stereo;
	params.removeWithWedgedBond = cparams->remove_with_wedged_bond;
	params.removeWithQuery = cparams->remove_with_query;
	params.removeMapped = cparams->remove_mapped;
	params.removeInSGroups = cparams->remove_in_s_groups;
	params.showWarnings = cparams->show_warnings;
	params.removeNonimplicit = cparams->remove_non_implicit;
	params.updateExplicitCount = cparams->update_explicit_count;
	params.removeHydrides = cparams->remove_hydrides;
	params.removeNontetrahedralNeighbors = cparams->remove_non_tetrahedral_neighbors;

	if (sanitize == RDKIT_DEFAULT_TRIBOOL)
		sanitize = RDKIT_TRUE;

	bool got_ex = true;
	std::string ex_what;

	try
	{
		removeHs(*this_, params, sanitize);
		got_ex = false;
	}
	catch (MolSanitizeException &ex)
	{
		ex_what = std::string(ex.what());
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
