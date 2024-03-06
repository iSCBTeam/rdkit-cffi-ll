#ifndef RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__TAUTOMER_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__TAUTOMER_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolStandardize/Tautomer.h"
#include "rdkit/GraphMol/MolStandardize/Tautomer.h"

namespace RDKit::MolStandardize {

constexpr const TautomerEnumerator *c2cpp(const rdkit_mol_standardize_TautomerEnumerator *cthis)
{
	return std::bit_cast<const TautomerEnumerator *>(cthis);
}

constexpr TautomerEnumerator *c2cpp(rdkit_mol_standardize_TautomerEnumerator *cthis)
{
	return std::bit_cast<TautomerEnumerator *>(cthis);
}

constexpr const rdkit_mol_standardize_TautomerEnumerator *cpp2c(const TautomerEnumerator *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_TautomerEnumerator *>(this_);
}

constexpr rdkit_mol_standardize_TautomerEnumerator *cpp2c(TautomerEnumerator *this_)
{
	return std::bit_cast<rdkit_mol_standardize_TautomerEnumerator *>(this_);
}

constexpr const TautomerEnumeratorResult *c2cpp(const rdkit_mol_standardize_TautomerEnumeratorResult *cthis)
{
	return std::bit_cast<const TautomerEnumeratorResult *>(cthis);
}

constexpr TautomerEnumeratorResult *c2cpp(rdkit_mol_standardize_TautomerEnumeratorResult *cthis)
{
	return std::bit_cast<TautomerEnumeratorResult *>(cthis);
}

constexpr const rdkit_mol_standardize_TautomerEnumeratorResult *cpp2c(const TautomerEnumeratorResult *this_)
{
	return std::bit_cast<const rdkit_mol_standardize_TautomerEnumeratorResult *>(this_);
}

constexpr rdkit_mol_standardize_TautomerEnumeratorResult *cpp2c(TautomerEnumeratorResult *this_)
{
	return std::bit_cast<rdkit_mol_standardize_TautomerEnumeratorResult *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLSTANDARDIZE__TAUTOMER_HPP */
