#ifndef RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_HPP
#define RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_HPP 1

#include <bit>
#include <vector>

#include "rdkit-cffi/GraphMol/Substruct/SubstructMatch.h"
#include "rdkit/GraphMol/Substruct/SubstructMatch.h"

namespace RDKit {

constexpr std::vector<MatchVectType> *c2cpp(rdkit_vec_MatchVectType *cthis)
{
	return std::bit_cast<std::vector<MatchVectType> *>(cthis);
}

constexpr rdkit_vec_MatchVectType *cpp2c(std::vector<MatchVectType> *this_)
{
	return std::bit_cast<rdkit_vec_MatchVectType *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__SUBSTRUCT__SUBSTRUCTMATCH_HPP */
