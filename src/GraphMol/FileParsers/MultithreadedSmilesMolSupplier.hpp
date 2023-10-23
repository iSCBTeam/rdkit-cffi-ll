#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSMILESMOLSUPPLIER_HPP
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSMILESMOLSUPPLIER_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/FileParsers/MultithreadedSmilesMolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MultithreadedSmilesMolSupplier.h"

namespace RDKit {

constexpr MultithreadedSmilesMolSupplier *c2cpp(rdkit_MultithreadedSmilesMolSupplier *cthis)
{
    return std::bit_cast<MultithreadedSmilesMolSupplier *>(cthis);
}

constexpr rdkit_MultithreadedSmilesMolSupplier *cpp2c(MultithreadedSmilesMolSupplier *this_)
{
    return std::bit_cast<rdkit_MultithreadedSmilesMolSupplier *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSMILESMOLSUPPLIER_HPP */
