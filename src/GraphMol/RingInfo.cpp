#include "rdkit-cffi/GraphMol/Atom.h"
#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit-cffi/GraphMol/RingInfo.h"
#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit/GraphMol/RingInfo.h"

#include "RDGeneral/RDProps.hpp"
#include "Atom.hpp"
#include "Bond.hpp"
#include "Conformer.hpp"
#include "ROMol.hpp"
#include "RWMol.hpp"
#include "RingInfo.hpp"

using namespace RDKit;

static_assert(alignof(RingInfo) == alignof(rdkit_RingInfo));
static_assert(sizeof(RingInfo) == sizeof(rdkit_RingInfo));
static_assert(alignof(RingInfo::VECT_INT_VECT) == alignof(rdkit_RingInfo_AtomRingsVec));
static_assert(sizeof(RingInfo::VECT_INT_VECT) == sizeof(rdkit_RingInfo_AtomRingsVec));
