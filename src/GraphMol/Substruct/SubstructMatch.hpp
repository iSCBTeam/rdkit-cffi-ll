#ifndef RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_HPP
#define RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_HPP 1

#include <bit>
#include <vector>

#include "rdkit-cffi/GraphMol/Substruct/SubstructMatch.h"
#include "rdkit/GraphMol/Substruct/SubstructMatch.h"

namespace RDKit {

constexpr std::vector<MatchVectType> *c2cpp(rdkit_MatchVectType_vec *cthis)
{
	return std::bit_cast<std::vector<MatchVectType> *>(cthis);
}

constexpr const std::vector<MatchVectType> *c2cpp(const rdkit_MatchVectType_vec *cthis)
{
	return std::bit_cast<const std::vector<MatchVectType> *>(cthis);
}

constexpr rdkit_MatchVectType_vec *cpp2c(std::vector<MatchVectType> *this_)
{
	return std::bit_cast<rdkit_MatchVectType_vec *>(this_);
}

constexpr const rdkit_MatchVectType_vec *cpp2c(const std::vector<MatchVectType> *this_)
{
	return std::bit_cast<const rdkit_MatchVectType_vec *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_HPP */
