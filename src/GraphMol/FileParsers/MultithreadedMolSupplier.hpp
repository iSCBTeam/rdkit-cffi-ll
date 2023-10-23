#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDMOLSUPPLIER_HPP
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDMOLSUPPLIER_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/FileParsers/MultithreadedMolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MultithreadedMolSupplier.h"

namespace RDKit {

constexpr MultithreadedMolSupplier *c2cpp(rdkit_MultithreadedMolSupplier *cthis)
{
    return std::bit_cast<MultithreadedMolSupplier *>(cthis);
}

constexpr rdkit_MultithreadedMolSupplier *cpp2c(MultithreadedMolSupplier *this_)
{
    return std::bit_cast<rdkit_MultithreadedMolSupplier *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDMOLSUPPLIER_HPP */
