#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLWRITERS_HPP
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLWRITERS_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/FileParsers/MolWriters.h"
#include "rdkit/GraphMol/FileParsers/MolWriters.h"

namespace RDKit {

constexpr MolWriter *c2cpp(rdkit_MolWriter *cthis)
{
    return std::bit_cast<MolWriter *>(cthis);
}

constexpr rdkit_MolWriter *cpp2c(MolWriter *this_)
{
    return std::bit_cast<rdkit_MolWriter *>(this_);
}

constexpr SmilesWriter *c2cpp(rdkit_SmilesWriter *cthis)
{
    return std::bit_cast<SmilesWriter *>(cthis);
}

constexpr rdkit_SmilesWriter *cpp2c(SmilesWriter *this_)
{
    return std::bit_cast<rdkit_SmilesWriter *>(this_);
}

constexpr SDWriter *c2cpp(rdkit_SDWriter *cthis)
{
    return std::bit_cast<SDWriter *>(cthis);
}

constexpr rdkit_SDWriter *cpp2c(SDWriter *this_)
{
    return std::bit_cast<rdkit_SDWriter *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLWRITERS_HPP */
