#ifndef RDKIT_CFFI__GRAPHMOL__RINGINFO_HPP
#define RDKIT_CFFI__GRAPHMOL__RINGINFO_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/RingInfo.h"
#include "rdkit/GraphMol/RingInfo.h"

namespace RDKit {

constexpr const RingInfo *c2cpp(const rdkit_RingInfo *cthis)
{
	return std::bit_cast<const RingInfo *>(cthis);
}

constexpr RingInfo *c2cpp(rdkit_RingInfo *cthis)
{
	return std::bit_cast<RingInfo *>(cthis);
}

constexpr const rdkit_RingInfo *cpp2c(const RingInfo *this_)
{
	return std::bit_cast<const rdkit_RingInfo *>(this_);
}

constexpr rdkit_RingInfo *cpp2c(RingInfo *this_)
{
	return std::bit_cast<rdkit_RingInfo *>(this_);
}

constexpr const RingInfo::VECT_INT_VECT *c2cpp(const rdkit_RingInfo_AtomRingsVec *cthis)
{
	return std::bit_cast<const RingInfo::VECT_INT_VECT *>(cthis);
}

constexpr RingInfo::VECT_INT_VECT *c2cpp(rdkit_RingInfo_AtomRingsVec *cthis)
{
	return std::bit_cast<RingInfo::VECT_INT_VECT *>(cthis);
}

constexpr const rdkit_RingInfo_AtomRingsVec *cpp2c(const RingInfo::VECT_INT_VECT *this_)
{
	return std::bit_cast<const rdkit_RingInfo_AtomRingsVec *>(this_);
}

constexpr rdkit_RingInfo_AtomRingsVec *cpp2c(RingInfo::VECT_INT_VECT *this_)
{
	return std::bit_cast<rdkit_RingInfo_AtomRingsVec *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__RINGINFO_HPP */
