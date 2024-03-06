#ifndef RDKIT_CFFI__GRAPHMOL__MOLDRAW2D__MOLDRAW2DSVG_HPP
#define RDKIT_CFFI__GRAPHMOL__MOLDRAW2D__MOLDRAW2DSVG_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/MolDraw2D/MolDraw2DSVG.h"
#include "rdkit/GraphMol/MolDraw2D/MolDraw2DSVG.h"

namespace RDKit {

constexpr const MolDraw2DSVG *c2cpp(const rdkit_MolDraw2DSVG *cthis)
{
	return std::bit_cast<const MolDraw2DSVG *>(cthis);
}

constexpr MolDraw2DSVG *c2cpp(rdkit_MolDraw2DSVG *cthis)
{
	return std::bit_cast<MolDraw2DSVG *>(cthis);
}

constexpr const rdkit_MolDraw2DSVG *cpp2c(const MolDraw2DSVG *this_)
{
	return std::bit_cast<const rdkit_MolDraw2DSVG *>(this_);
}

constexpr rdkit_MolDraw2DSVG *cpp2c(MolDraw2DSVG *this_)
{
	return std::bit_cast<rdkit_MolDraw2DSVG *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__MOLDRAW2D__MOLDRAW2DSVG_HPP */
