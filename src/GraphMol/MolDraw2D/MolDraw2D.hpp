#ifndef RDKIT_CFFI__GRAPHMOL__MOLDRAW2D__MOLDRAW2D_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLDRAW2D__MOLDRAW2D_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolDraw2D/MolDraw2D.h"
#include "rdkit/GraphMol/MolDraw2D/MolDraw2D.h"

namespace RDKit {

constexpr const MolDraw2D *c2cpp(const rdkit_MolDraw2D *cthis)
{
	return std::bit_cast<const MolDraw2D *>(cthis);
}

constexpr MolDraw2D *c2cpp(rdkit_MolDraw2D *cthis)
{
	return std::bit_cast<MolDraw2D *>(cthis);
}

constexpr const rdkit_MolDraw2D *cpp2c(const MolDraw2D *this_)
{
	return std::bit_cast<const rdkit_MolDraw2D *>(this_);
}

constexpr rdkit_MolDraw2D *cpp2c(MolDraw2D *this_)
{
	return std::bit_cast<rdkit_MolDraw2D *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLDRAW2D__MOLDRAW2D_HPP */
