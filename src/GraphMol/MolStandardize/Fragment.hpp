#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__FRAGMENT_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__FRAGMENT_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolStandardize/Fragment.h"
#include "rdkit/GraphMol/MolStandardize/Fragment.h"

namespace RDKit::MolStandardize {

constexpr const LargestFragmentChooser *c2cpp(const rdkit_mol_standardize_LargestFragmentChooser *cthis)
{
	return std::bit_cast<const LargestFragmentChooser *>(cthis);
}

constexpr LargestFragmentChooser *c2cpp(rdkit_mol_standardize_LargestFragmentChooser *cthis)
{
	return std::bit_cast<LargestFragmentChooser *>(cthis);
}

constexpr const rdkit_mol_standardize_LargestFragmentChooser *cpp2c(const LargestFragmentChooser *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_LargestFragmentChooser *>(this_);
}

constexpr rdkit_mol_standardize_LargestFragmentChooser *cpp2c(LargestFragmentChooser *this_)
{
	return std::bit_cast<rdkit_mol_standardize_LargestFragmentChooser *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__FRAGMENT_HPP */
