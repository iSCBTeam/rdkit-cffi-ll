#ifndef RDKIT_CFFI__GRAPHMOL__ROMOL_HPP
#define RDKIT_CFFI__GRAPHMOL__ROMOL_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit/GraphMol/ROMol.h"

namespace RDKit {

constexpr const ROMol *c2cpp(const rdkit_ROMol *cthis)
{
	return std::bit_cast<const ROMol *>(cthis);
}

constexpr ROMol *c2cpp(rdkit_ROMol *cthis)
{
	return std::bit_cast<ROMol *>(cthis);
}

constexpr const rdkit_ROMol *cpp2c(const ROMol *this_)
{
	return std::bit_cast<const rdkit_ROMol *>(this_);
}

constexpr rdkit_ROMol *cpp2c(ROMol *this_)
{
	return std::bit_cast<rdkit_ROMol *>(this_);
}

constexpr const MOL_SPTR_VECT *c2cpp(const rdkit_ROMol_sptr_vec *cthis)
{
	return std::bit_cast<const MOL_SPTR_VECT *>(cthis);
}

constexpr MOL_SPTR_VECT *c2cpp(rdkit_ROMol_sptr_vec *cthis)
{
	return std::bit_cast<MOL_SPTR_VECT *>(cthis);
}

constexpr const rdkit_ROMol_sptr_vec *cpp2c(const MOL_SPTR_VECT *this_)
{
	return std::bit_cast<const rdkit_ROMol_sptr_vec *>(this_);
}

constexpr rdkit_ROMol_sptr_vec *cpp2c(MOL_SPTR_VECT *this_)
{
	return std::bit_cast<rdkit_ROMol_sptr_vec *>(this_);
}

constexpr const std::vector<MOL_SPTR_VECT> *c2cpp(const rdkit_ROMol_sptr_vec_vec *cthis)
{
	return std::bit_cast<const std::vector<MOL_SPTR_VECT> *>(cthis);
}

constexpr std::vector<MOL_SPTR_VECT> *c2cpp(rdkit_ROMol_sptr_vec_vec *cthis)
{
	return std::bit_cast<std::vector<MOL_SPTR_VECT> *>(cthis);
}

constexpr const rdkit_ROMol_sptr_vec_vec *cpp2c(const std::vector<MOL_SPTR_VECT> *this_)
{
	return std::bit_cast<const rdkit_ROMol_sptr_vec_vec *>(this_);
}

constexpr rdkit_ROMol_sptr_vec_vec *cpp2c(std::vector<MOL_SPTR_VECT> *this_)
{
	return std::bit_cast<rdkit_ROMol_sptr_vec_vec *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__ROMOL_HPP */
