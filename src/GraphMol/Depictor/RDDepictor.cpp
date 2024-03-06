#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/Depictor/RDDepictor.h"
#include "rdkit/GraphMol/Depictor/RDDepictor.h"

#include "GraphMol/ROMol.hpp"

using namespace RDKit;
using namespace RDDepict;

uint32_t rdkit_depictor_compute_2d_coords(rdkit_ROMol *cromol)
{
	auto romol = c2cpp(cromol);
	return compute2DCoords(*romol);
}
