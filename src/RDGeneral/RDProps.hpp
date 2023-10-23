#ifndef RDKIT_CFFI__RDGENERAL__RDPROPS_HPP
#define RDKIT_CFFI__RDGENERAL__RDPROPS_HPP 1

#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit/RDGeneral/RDProps.h"

namespace RDKit {

constexpr const RDProps *c2cpp(const rdkit_RDProps *cthis)
{
    return std::bit_cast<const RDProps *>(cthis);
}

constexpr RDProps *c2cpp(rdkit_RDProps *cthis)
{
    return std::bit_cast<RDProps *>(cthis);
}

constexpr const rdkit_RDProps *cpp2c(const RDProps *this_)
{
    return std::bit_cast<const rdkit_RDProps *>(this_);
}

constexpr rdkit_RDProps *cpp2c(RDProps *this_)
{
    return std::bit_cast<rdkit_RDProps *>(this_);
}

}

#endif /* RDKIT_CFFI__RDGENERAL__RDPROPS_HPP */
