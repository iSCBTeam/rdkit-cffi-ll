#ifndef RDKIT_CFFI__GRAPHMOL__BOND_HPP
#define RDKIT_CFFI__GRAPHMOL__BOND_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/Bond.h"
#include "rdkit/GraphMol/Bond.h"

namespace RDKit {

constexpr const Bond *c2cpp(const rdkit_Bond *cthis)
{
	return std::bit_cast<const Bond *>(cthis);
}

constexpr Bond *c2cpp(rdkit_Bond *cthis)
{
	return std::bit_cast<Bond *>(cthis);
}

constexpr const rdkit_Bond *cpp2c(const Bond *this_)
{
	return std::bit_cast<const rdkit_Bond *>(this_);
}

constexpr rdkit_Bond *cpp2c(Bond *this_)
{
	return std::bit_cast<rdkit_Bond *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__BOND_HPP */
