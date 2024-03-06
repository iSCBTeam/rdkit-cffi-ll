#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/Descriptors/Crippen.h"
// `Use MolDescriptors.h in client code.`
#include "rdkit/GraphMol/Descriptors/MolDescriptors.h"

#include "GraphMol/ROMol.hpp"

using namespace RDKit;
using namespace RDKit::Descriptors;

void rdkit_descriptors_calc_crippen_descriptors(const rdkit_ROMol *cromol, double *logp, double *mr)
{
	rdkit_descriptors_calc_crippen_descriptors_ex(cromol, logp, mr, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

void rdkit_descriptors_calc_crippen_descriptors_ex(const rdkit_ROMol *cromol, double *logp, double *mr, rdkit_tribool include_hs, rdkit_tribool force)
{
	auto romol = c2cpp(cromol);

	if (include_hs == RDKIT_DEFAULT_TRIBOOL)
		include_hs = RDKIT_TRUE;

	if (force == RDKIT_DEFAULT_TRIBOOL)
		force = RDKIT_FALSE;

	return calcCrippenDescriptors(*romol, *logp, *mr, include_hs, force);
}

double rdkit_descriptors_calc_clogp(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcClogP(*romol);
}

double rdkit_descriptors_calc_mr(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcMR(*romol);
}
