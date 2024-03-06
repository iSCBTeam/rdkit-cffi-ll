#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSDMOLSUPPLIER_HPP
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSDMOLSUPPLIER_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/FileParsers/MultithreadedSDMolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MultithreadedSDMolSupplier.h"

namespace RDKit {

constexpr MultithreadedSDMolSupplier *c2cpp(rdkit_MultithreadedSDMolSupplier *cthis)
{
    return std::bit_cast<MultithreadedSDMolSupplier *>(cthis);
}

constexpr const MultithreadedSDMolSupplier *c2cpp(const rdkit_MultithreadedSDMolSupplier *cthis)
{
    return std::bit_cast<const MultithreadedSDMolSupplier *>(cthis);
}

constexpr rdkit_MultithreadedSDMolSupplier *cpp2c(MultithreadedSDMolSupplier *this_)
{
    return std::bit_cast<rdkit_MultithreadedSDMolSupplier *>(this_);
}

constexpr const rdkit_MultithreadedSDMolSupplier *cpp2c(const MultithreadedSDMolSupplier *this_)
{
    return std::bit_cast<const rdkit_MultithreadedSDMolSupplier *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSDMOLSUPPLIER_HPP */
