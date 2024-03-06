#include "rdkit-cffi/GraphMol/PartialCharges/GasteigerCharges.h"
#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit/GraphMol/PartialCharges/GasteigerCharges.h"
#include "rdkit/GraphMol/ROMol.h"

#include "GraphMol/ROMol.hpp"

using namespace RDKit;

bool rdkit_compute_gasteiger_charges(rdkit_ROMol *cthis)
{
	auto this_ = c2cpp(cthis);
	bool got_ex = true;
	std::string ex_what;

	try
	{
		computeGasteigerCharges(*this_);
		got_ex = false;
	}
	catch (std::exception &ex)
	{
		ex_what = std::string(ex.what());
	}
	catch (...)
	{
		ex_what = std::string("Unknown reason");
	}

	return !got_ex;
}