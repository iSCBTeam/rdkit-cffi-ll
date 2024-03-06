#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__CHARGE_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__CHARGE_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolStandardize/Charge.h"
#include "rdkit/GraphMol/MolStandardize/Charge.h"

namespace RDKit::MolStandardize {

constexpr const Reionizer *c2cpp(const rdkit_mol_standardize_Reionizer *cthis)
{
	return std::bit_cast<const Reionizer *>(cthis);
}

constexpr Reionizer *c2cpp(rdkit_mol_standardize_Reionizer *cthis)
{
	return std::bit_cast<Reionizer *>(cthis);
}

constexpr const rdkit_mol_standardize_Reionizer *cpp2c(const Reionizer *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_Reionizer *>(this_);
}

constexpr rdkit_mol_standardize_Reionizer *cpp2c(Reionizer *this_)
{
	return std::bit_cast<rdkit_mol_standardize_Reionizer *>(this_);
}

constexpr const Uncharger *c2cpp(const rdkit_mol_standardize_Uncharger *cthis)
{
	return std::bit_cast<const Uncharger *>(cthis);
}

constexpr Uncharger *c2cpp(rdkit_mol_standardize_Uncharger *cthis)
{
	return std::bit_cast<Uncharger *>(cthis);
}

constexpr const rdkit_mol_standardize_Uncharger *cpp2c(const Uncharger *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_Uncharger *>(this_);
}

constexpr rdkit_mol_standardize_Uncharger *cpp2c(Uncharger *this_)
{
	return std::bit_cast<rdkit_mol_standardize_Uncharger *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__CHARGE_HPP */
