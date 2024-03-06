#include "rdkit-cffi/GraphMol/MolOps.h"
#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit/GraphMol/MolOps.h"
#include "rdkit/GraphMol/ROMol.h"

#include "ROMol.hpp"

using namespace RDKit;
using namespace RDKit::MolOps;

bool rdkit_mol_ops_assign_stereochemistry(rdkit_ROMol *cthis)
{
	auto this_ = c2cpp(cthis);
	bool got_ex = false;
	std::string ex_what;

	try
	{
		assignStereochemistry(*this_);
	}
	catch (std::exception &ex)
	{
		got_ex = true;
		ex_what = std::string(ex.what());
	}
	catch (...)
	{
		got_ex = true;
		ex_what = std::string("Unknown reason");
	}

	return !got_ex;
}