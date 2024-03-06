#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/ChemReactions/ReactionParser.h"
#include "rdkit/GraphMol/ChemReactions/ReactionParser.h"

#include "string.hpp"
#include "Reaction.hpp"

using namespace RDKit;

bool rdkit_rxn_smarts_to_chemical_reaction(rdkit_ChemicalReaction *cthis, const rdkit_string *text)
{
	return rdkit_rxn_smarts_to_chemical_reaction_ex(cthis, text, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

// TODO: replacements
bool rdkit_rxn_smarts_to_chemical_reaction_ex(rdkit_ChemicalReaction *cthis, const rdkit_string *text, const void *replacements, rdkit_tribool use_smiles, rdkit_tribool allow_cxsmiles)
{
	if (replacements == RDKIT_DEFAULT_PTR)
		replacements = nullptr;

	if (use_smiles == RDKIT_DEFAULT_TRIBOOL)
		use_smiles = false;

	if (allow_cxsmiles == RDKIT_DEFAULT_TRIBOOL)
		allow_cxsmiles = true;

	try {
		auto react = RxnSmartsToChemicalReaction(rdkit_string_to_view(text), /* TODO: */ nullptr, use_smiles, allow_cxsmiles);
		if (!react)
			return false;

		new (cthis) ChemicalReaction(*react); // Cannot move sadly...
		delete react;
		return true;
	} catch (const std::exception& e) {
		return false;
	}
}
