#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/Descriptors/MolDescriptors.h"
#include "rdkit/GraphMol/Descriptors/MolDescriptors.h"

#include "GraphMol/ROMol.hpp"

using namespace RDKit;
using namespace RDKit::Descriptors;

double rdkit_descriptors_calc_exact_mw(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcExactMW(*romol);
}

float rdkit_descriptors_calc_tpsa(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcTPSA(*romol);
}