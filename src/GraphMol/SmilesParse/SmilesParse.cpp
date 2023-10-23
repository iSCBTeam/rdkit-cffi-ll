#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/SmilesParse/SmilesParse.h"
#include "rdkit/GraphMol/SmilesParse/SmilesParse.h"

#include "string.hpp"
#include "GraphMol/RWMol.hpp"

using namespace RDKit;

bool rdkit_smiles_to_mol(rdkit_RWMol *cthis, const rdkit_string *smi)
{
	return rdkit_smiles_to_mol_ex(cthis, smi, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_PTR);
}

// TODO: replacements
bool rdkit_smiles_to_mol_ex(rdkit_RWMol *cthis, const rdkit_string *smi, int32_t debug_parse, rdkit_tribool sanitize, const void *replacements)
{
	if (debug_parse == RDKIT_DEFAULT_I32)
		debug_parse = 0;

	if (sanitize == RDKIT_DEFAULT_TRIBOOL)
		sanitize = RDKIT_TRUE;

	if (replacements == RDKIT_DEFAULT_PTR)
		replacements = nullptr;

	try {
		auto mol = SmilesToMol(rdkit_string_to_view(smi), debug_parse, sanitize, /* TODO: */ nullptr);
		if (!mol)
			return false;

		new (cthis) RWMol(std::move(*mol));
		delete mol;

		return true;
	} catch (const std::exception& e) {
		return false;
	}
}

bool rdkit_smarts_to_mol(rdkit_RWMol *cthis, const rdkit_string *sma)
{
	return rdkit_smarts_to_mol_ex(cthis, sma, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_PTR);
}

// TODO: replacements
bool rdkit_smarts_to_mol_ex(rdkit_RWMol *cthis, const rdkit_string *sma, int32_t debug_parse, rdkit_tribool merge_hs, const void *replacements)
{
	if (debug_parse == RDKIT_DEFAULT_I32)
		debug_parse = 0;

	if (merge_hs == RDKIT_DEFAULT_TRIBOOL)
		merge_hs = RDKIT_FALSE;

	if (replacements == RDKIT_DEFAULT_PTR)
		replacements = nullptr;

	try {
		auto mol = SmartsToMol(rdkit_string_to_view(sma), debug_parse, merge_hs, /* TODO: */ nullptr);
		if (!mol)
			return false;

		new (cthis) RWMol(std::move(*mol));
		delete mol;

		return true;
	} catch (const std::exception& e) {
		return false;
	}
}
