#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__MOLSTANDARDIZE_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__MOLSTANDARDIZE_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolStandardize/MolStandardize.h"
#include "rdkit/GraphMol/MolStandardize/MolStandardize.h"

namespace RDKit::MolStandardize {

constexpr const CleanupParameters *c2cpp(const rdkit_mol_standardize_CleanupParameters *cthis)
{
	return std::bit_cast<const CleanupParameters *>(cthis);
}

constexpr CleanupParameters *c2cpp(rdkit_mol_standardize_CleanupParameters *cthis)
{
	return std::bit_cast<CleanupParameters *>(cthis);
}

constexpr const rdkit_mol_standardize_CleanupParameters *cpp2c(const CleanupParameters *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_CleanupParameters *>(this_);
}

constexpr rdkit_mol_standardize_CleanupParameters *cpp2c(CleanupParameters *this_)
{
	return std::bit_cast<rdkit_mol_standardize_CleanupParameters *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__MOLSTANDARDIZE_HPP */
