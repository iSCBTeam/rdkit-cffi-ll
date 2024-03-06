#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/FileParsers/FileParsers.h"
#include "rdkit/GraphMol/FileParsers/FileParsers.h"

#include "string.hpp"
#include "GraphMol/RWMol.hpp"

using namespace RDKit;


bool rdkit_mol_block_to_mol(rdkit_RWMol *cthis, const rdkit_string *mol_block)
{
	return rdkit_mol_block_to_mol_ex(cthis, mol_block, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

bool rdkit_mol_block_to_mol_ex(rdkit_RWMol *cthis, const rdkit_string *mol_block, rdkit_tribool sanitize, rdkit_tribool remove_hs, rdkit_tribool strict_parsing)
{
	if (sanitize == RDKIT_DEFAULT_TRIBOOL)
		sanitize = RDKIT_TRUE;

	if (remove_hs == RDKIT_DEFAULT_TRIBOOL)
		remove_hs = RDKIT_TRUE;

	if (strict_parsing == RDKIT_DEFAULT_TRIBOOL)
		strict_parsing = RDKIT_TRUE;

	try {
		auto mol = MolBlockToMol(std::string(rdkit_string_to_view(mol_block)), sanitize, remove_hs, strict_parsing);
		if (!mol)
			return false;

		new (cthis) RWMol(std::move(*mol));
		delete mol;

		return true;
	} catch (const std::exception& e) {
		return false;
	}
}
