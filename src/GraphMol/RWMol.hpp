#ifndef RDKIT_CFFI__GRAPHMOL__RWMOL_HPP
#define RDKIT_CFFI__GRAPHMOL__RWMOL_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/RWMol.h"
#include "rdkit/GraphMol/RWMol.h"

namespace RDKit {

constexpr const RWMol *c2cpp(const rdkit_RWMol *cthis)
{
	return std::bit_cast<const RWMol *>(cthis);
}

constexpr RWMol *c2cpp(rdkit_RWMol *cthis)
{
	return std::bit_cast<RWMol *>(cthis);
}

constexpr const rdkit_RWMol *cpp2c(const RWMol *this_)
{
	return std::bit_cast<const rdkit_RWMol *>(this_);
}

constexpr rdkit_RWMol *cpp2c(RWMol *this_)
{
	return std::bit_cast<rdkit_RWMol *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__RWMOL_HPP */
