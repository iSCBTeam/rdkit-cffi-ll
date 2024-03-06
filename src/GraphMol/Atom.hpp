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

constexpr const std::vector<std::shared_ptr<Atom>> *c2cpp(const rdkit_Atom_sptr_vec *cthis)
{
	return std::bit_cast<const std::vector<std::shared_ptr<Atom>> *>(cthis);
}

constexpr std::vector<std::shared_ptr<Atom>> *c2cpp(rdkit_Atom_sptr_vec *cthis)
{
	return std::bit_cast<std::vector<std::shared_ptr<Atom>> *>(cthis);
}

constexpr const rdkit_Atom_sptr_vec *cpp2c(const std::vector<std::shared_ptr<Atom>> *this_)
{
	return std::bit_cast<const rdkit_Atom_sptr_vec *>(this_);
}

constexpr rdkit_Atom_sptr_vec *cpp2c(std::vector<std::shared_ptr<Atom>> *this_)
{
	return std::bit_cast<rdkit_Atom_sptr_vec *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__ATOM_HPP */
