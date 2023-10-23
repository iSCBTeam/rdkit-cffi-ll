#include "rdkit-cffi/string.h"
#include "rdkit-cffi/GraphMol/MolPickler.h"
#include "rdkit/GraphMol/MolPickler.h"

#include "GraphMol/ROMol.hpp"
#include "string.hpp"

using namespace RDKit;

bool rdkit_mol_pickler_pickle_mol(const rdkit_ROMol *cromol, rdkit_string_owned *cres)
{
	const auto *romol = c2cpp(cromol);
	const char *ex_reason = "";

	try {
		std::string res;
		MolPickler::pickleMol(*romol, res);
		rdkit_string_owned_ctor_move(cres, std::move(res));
		return true;
	} catch (const std::exception& e) {
		ex_reason = e.what();
	} catch (...) {
		ex_reason = "Unknown reason";
	}

	rdkit_string_owned_ctor(cres);
	return false;
}

bool rdkit_mol_pickler_mol_from_pickle(const rdkit_string *cpickle, rdkit_ROMol *cromol)
{
	auto *romol = c2cpp(cromol);
	auto pickle = rdkit_string_to_view(cpickle);
	const char *ex_reason = "";

	try {
		new (romol) ROMol();
		MolPickler::molFromPickle(std::string(pickle), *romol);
		return true;
	} catch (const std::exception& e) {
		ex_reason = e.what();
	} catch (...) {
		ex_reason = "Unknown reason";
	}

	return false;
}
