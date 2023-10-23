#ifndef RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTION_HPP
#define RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTION_HPP 1

#include <bit>

#include "rdkit-cffi/GraphMol/ChemReactions/Reaction.h"
#include "rdkit/GraphMol/ChemReactions/Reaction.h"

namespace RDKit {

constexpr ChemicalReaction *c2cpp(rdkit_ChemicalReaction *cthis)
{
    return std::bit_cast<ChemicalReaction *>(cthis);
}

constexpr const ChemicalReaction *c2cpp(const rdkit_ChemicalReaction *cthis)
{
    return std::bit_cast<const ChemicalReaction *>(cthis);
}

constexpr rdkit_ChemicalReaction *cpp2c(ChemicalReaction *this_)
{
    return std::bit_cast<rdkit_ChemicalReaction *>(this_);
}

constexpr const rdkit_ChemicalReaction *cpp2c(const ChemicalReaction *this_)
{
    return std::bit_cast<const rdkit_ChemicalReaction *>(this_);
}

}

#endif /* RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTION_HPP */
