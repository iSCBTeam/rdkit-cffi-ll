#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__VALIDATE_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__VALIDATE_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolStandardize/Validate.h"
#include "rdkit/GraphMol/MolStandardize/Validate.h"

namespace RDKit::MolStandardize {

constexpr const AllowedAtomsValidation *c2cpp(const rdkit_mol_standardize_AllowedAtomsValidation *cthis)
{
	return std::bit_cast<const AllowedAtomsValidation *>(cthis);
}

constexpr AllowedAtomsValidation *c2cpp(rdkit_mol_standardize_AllowedAtomsValidation *cthis)
{
	return std::bit_cast<AllowedAtomsValidation *>(cthis);
}

constexpr const rdkit_mol_standardize_AllowedAtomsValidation *cpp2c(const AllowedAtomsValidation *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_AllowedAtomsValidation *>(this_);
}

constexpr rdkit_mol_standardize_AllowedAtomsValidation *cpp2c(AllowedAtomsValidation *this_)
{
	return std::bit_cast<rdkit_mol_standardize_AllowedAtomsValidation *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__VALIDATE_HPP */
