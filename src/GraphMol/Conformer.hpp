#ifndef RDKIT_CFFI__GRAPHMOL__CONFORMER_HPP
#define RDKIT_CFFI__GRAPHMOL__CONFORMER_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/Conformer.h"
#include "rdkit/GraphMol/Conformer.h"

namespace RDKit {

constexpr const Conformer *c2cpp(const rdkit_Conformer *cthis)
{
	return std::bit_cast<const Conformer *>(cthis);
}

constexpr Conformer *c2cpp(rdkit_Conformer *cthis)
{
	return std::bit_cast<Conformer *>(cthis);
}

constexpr const rdkit_Conformer *cpp2c(const Conformer *this_)
{
	return std::bit_cast<const rdkit_Conformer *>(this_);
}

constexpr rdkit_Conformer *cpp2c(Conformer *this_)
{
	return std::bit_cast<rdkit_Conformer *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__CONFORMER_HPP */
