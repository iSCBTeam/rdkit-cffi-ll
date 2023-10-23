#include "rdkit-cffi/GraphMol/MolOps.h"
#include "rdkit-cffi/GraphMol/RWMol.h"
#include "rdkit/GraphMol/MolOps.h"
#include "rdkit/GraphMol/RWMol.h"

#include "RWMol.hpp"

using namespace RDKit;

bool rdkit_mol_ops_sanitize_mol(rdkit_RWMol *cthis)
{
	return rdkit_mol_ops_sanitize_mol_ex(cthis, nullptr, RDKIT_SANITIZE_DEFAULT);
}

bool rdkit_mol_ops_sanitize_mol_ex(rdkit_RWMol *cthis, rdkit_SanitizeFlags *operation_that_failed, uint32_t sanitize_ops)
{
	auto this_ = c2cpp(cthis);
	unsigned int failed_op = RDKIT_SANITIZE_NONE;
	bool got_ex = false;
	std::string ex_what;

	try
	{
		MolOps::sanitizeMol(*this_, failed_op, sanitize_ops);
	}
	catch (MolSanitizeException &ex)
	{
		got_ex = true;
		ex_what = std::string(ex.what());
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

	if (operation_that_failed)
		*operation_that_failed = static_cast<rdkit_SanitizeFlags>(failed_op);

	return !got_ex;
}
