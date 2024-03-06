#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/DistGeomHelpers/Embedder.h"
#include "rdkit/GraphMol/DistGeomHelpers/Embedder.h"

#include "GraphMol/ROMol.hpp"

using namespace RDKit;
using namespace RDKit::DGeomHelpers;


int32_t rdkit_dist_geom_helpers_embed_molecule(rdkit_ROMol *cmol)
{
	auto mol = c2cpp(cmol);

	try {
		return EmbedMolecule(*mol);
	} catch (const std::exception& e) {
		return -1;
	} catch (...) {
		return -1;
    }
}
