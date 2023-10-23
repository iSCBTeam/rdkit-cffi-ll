#ifndef RDKIT_CFFI__GRAPHMOL__ATOM_HPP
#define RDKIT_CFFI__GRAPHMOL__ATOM_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/Atom.h"
#include "rdkit/GraphMol/Atom.h"

namespace RDKit {

constexpr const Atom *c2cpp(const rdkit_Atom *cthis)
{
	return std::bit_cast<const Atom *>(cthis);
}

constexpr Atom *c2cpp(rdkit_Atom *cthis)
{
	return std::bit_cast<Atom *>(cthis);
}

constexpr const rdkit_Atom *cpp2c(const Atom *this_)
{
	return std::bit_cast<const rdkit_Atom *>(this_);
}

constexpr rdkit_Atom *cpp2c(Atom *this_)
{
	return std::bit_cast<rdkit_Atom *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__ATOM_HPP */
