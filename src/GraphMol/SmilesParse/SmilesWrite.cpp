#include "rdkit-cffi/string.h"
#include "rdkit-cffi/GraphMol/SmilesParse/SmilesWrite.h"
#include "rdkit/GraphMol/SmilesParse/SmilesWrite.h"

#include "GraphMol/ROMol.hpp"
#include "string.hpp"

using namespace RDKit;

bool rdkit_mol_to_smiles(rdkit_string_owned *smi, const rdkit_ROMol *cromol)
{
	return rdkit_mol_to_smiles_ex(smi, cromol, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

bool rdkit_mol_to_smiles_ex(
	rdkit_string_owned *smi,
	const rdkit_ROMol *cromol,
	rdkit_tribool do_isomeric_smiles,
	rdkit_tribool do_kekule,
	int32_t rooted_at_atom,
	rdkit_tribool canonical,
	rdkit_tribool all_bonds_explicit,
	rdkit_tribool all_hs_explicit,
	rdkit_tribool do_random)
{
	const auto *romol = c2cpp(cromol);

	if (do_isomeric_smiles == RDKIT_DEFAULT_TRIBOOL)
		do_isomeric_smiles = RDKIT_TRUE;

	if (do_kekule == RDKIT_DEFAULT_TRIBOOL)
		do_kekule = RDKIT_FALSE;

	if (rooted_at_atom == RDKIT_DEFAULT_I32)
		rooted_at_atom = -1;

	if (canonical == RDKIT_DEFAULT_TRIBOOL)
		canonical = RDKIT_TRUE;

	if (all_bonds_explicit == RDKIT_DEFAULT_TRIBOOL)
		all_bonds_explicit = RDKIT_FALSE;

	if (all_hs_explicit == RDKIT_DEFAULT_TRIBOOL)
		all_hs_explicit = RDKIT_FALSE;

	if (do_random == RDKIT_DEFAULT_TRIBOOL)
		do_random = RDKIT_FALSE;

	try {
		rdkit_string_owned_ctor_move(smi, MolToSmiles(*romol, do_isomeric_smiles, do_kekule, rooted_at_atom, canonical, all_bonds_explicit, all_hs_explicit, do_random));
		return true;
	} catch (const std::exception& e) {
		rdkit_string_owned_ctor(smi);
		return false;
	}
}