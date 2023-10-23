#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLSUPPLIER_HPP
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLSUPPLIER_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/FileParsers/MolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MolSupplier.h"

namespace RDKit {

constexpr MolSupplier *c2cpp(rdkit_MolSupplier *cthis)
{
    return std::bit_cast<MolSupplier *>(cthis);
}

constexpr const MolSupplier *c2cpp(const rdkit_MolSupplier *cthis)
{
    return std::bit_cast<const MolSupplier *>(cthis);
}

constexpr rdkit_MolSupplier *cpp2c(MolSupplier *this_)
{
    return std::bit_cast<rdkit_MolSupplier *>(this_);
}

constexpr const rdkit_MolSupplier *cpp2c(const MolSupplier *this_)
{
    return std::bit_cast<const rdkit_MolSupplier *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLSUPPLIER_HPP */
