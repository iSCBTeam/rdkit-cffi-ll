#include "rdkit-cffi/GraphMol/Atom.h"
#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit-cffi/GraphMol/MolStandardize/Validate.h"
#include "rdkit/GraphMol/MolStandardize/Validate.h"

#include "GraphMol/Atom.hpp"
#include "GraphMol/ROMol.hpp"
#include "Validate.hpp"

using namespace RDKit;
using namespace RDKit::MolStandardize;

static_assert(alignof(AllowedAtomsValidation) == alignof(rdkit_mol_standardize_AllowedAtomsValidation));
static_assert(sizeof(AllowedAtomsValidation) == sizeof(rdkit_mol_standardize_AllowedAtomsValidation));

rdkit_mol_standardize_AllowedAtomsValidation *rdkit_mol_standardize_allowed_atoms_validation_new(void)
{
	auto this_ = static_cast<AllowedAtomsValidation *>(::operator new(sizeof(AllowedAtomsValidation), std::align_val_t(alignof(AllowedAtomsValidation))));
	return cpp2c(this_);
}

void rdkit_mol_standardize_allowed_atoms_validation_del(rdkit_mol_standardize_AllowedAtomsValidation *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_standardize_allowed_atoms_validation_ctor(rdkit_mol_standardize_AllowedAtomsValidation *cthis, const rdkit_Atom_sptr_vec *catoms)
{
	auto atoms = c2cpp(catoms);
	new (cthis) AllowedAtomsValidation(*atoms);
}

void rdkit_mol_standardize_allowed_atoms_validation_dtor(rdkit_mol_standardize_AllowedAtomsValidation *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~AllowedAtomsValidation();
}

bool rdkit_mol_standardize_allowed_atoms_validation_validate(const rdkit_mol_standardize_AllowedAtomsValidation *cthis, const rdkit_ROMol *cmol)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	try {
		auto errors = this_->validate(*mol, false);
		return errors.empty();
	} catch (const std::exception& e) {
		return false;
	}
}

// bool rdkit_mol_standardize_allowed_atoms_validation_validate_ex(const rdkit_mol_standardize_AllowedAtomsValidation *cthis, const rdkit_ROMol *cmol, rdkit_tribool report_all_failures); // TODO