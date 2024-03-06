#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/Descriptors/Lipinski.h"
// `Use MolDescriptors.h in client code.`
#include "rdkit/GraphMol/Descriptors/MolDescriptors.h"

#include "GraphMol/ROMol.hpp"

using namespace RDKit;
using namespace RDKit::Descriptors;

double rdkit_descriptors_calc_fraction_csp3(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcFractionCSP3(*romol);
}

uint32_t rdkit_descriptors_calc_num_hba(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcNumHBA(*romol);
}

uint32_t rdkit_descriptors_calc_num_hbd(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcNumHBD(*romol);
}

uint32_t rdkit_descriptors_calc_num_rings(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return calcNumRings(*romol);
}

uint32_t rdkit_descriptors_calc_num_rotatable_bonds(const rdkit_ROMol *cromol)
{
	return rdkit_descriptors_calc_num_rotatable_bonds_ex(cromol, RDKIT_DESCRIPTORS_NUM_ROTATABLE_BONDS_OPTION_DEFAULT);
}

uint32_t rdkit_descriptors_calc_num_rotatable_bonds_ex(const rdkit_ROMol *cromol, rdkit_descriptors_NumRotatableBondsOptions opt)
{
	auto romol = c2cpp(cromol);
	return calcNumRotatableBonds(*romol, static_cast<NumRotatableBondsOptions>(opt));
}

uint32_t rdkit_descriptors_calc_num_atom_stereo_centers(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	try {
		return numAtomStereoCenters(*romol);
	} catch (...) {
		return 0;
	}
}

uint32_t rdkit_descriptors_calc_num_unspecified_atom_stereo_centers(const rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	try {
		return numUnspecifiedAtomStereoCenters(*romol);
	} catch (...) {
		return 0;
	}
}
