#ifndef RDKIT_CFFI__GRAPHMOL__BOND_H
#define RDKIT_CFFI__GRAPHMOL__BOND_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_Bond
{
	alignas(RDKIT_ALIGNOF_BOND) char opaque[RDKIT_SIZEOF_BOND];
};

typedef enum rdkit_bond_BondType {
	RDKIT_BOND_BOND_TYPE_UNSPECIFIED = 0,
    RDKIT_BOND_BOND_TYPE_SINGLE,
    RDKIT_BOND_BOND_TYPE_DOUBLE,
    RDKIT_BOND_BOND_TYPE_TRIPLE,
    RDKIT_BOND_BOND_TYPE_QUADRUPLE,
    RDKIT_BOND_BOND_TYPE_QUINTUPLE,
    RDKIT_BOND_BOND_TYPE_HEXTUPLE,
    RDKIT_BOND_BOND_TYPE_ONEANDAHALF,
    RDKIT_BOND_BOND_TYPE_TWOANDAHALF,
    RDKIT_BOND_BOND_TYPE_THREEANDAHALF,
    RDKIT_BOND_BOND_TYPE_FOURANDAHALF,
    RDKIT_BOND_BOND_TYPE_FIVEANDAHALF,
    RDKIT_BOND_BOND_TYPE_AROMATIC,
    RDKIT_BOND_BOND_TYPE_IONIC,
    RDKIT_BOND_BOND_TYPE_HYDROGEN,
    RDKIT_BOND_BOND_TYPE_THREECENTER,
    RDKIT_BOND_BOND_TYPE_DATIVEONE,
    RDKIT_BOND_BOND_TYPE_DATIVE,
    RDKIT_BOND_BOND_TYPE_DATIVEL,
    RDKIT_BOND_BOND_TYPE_DATIVER,
    RDKIT_BOND_BOND_TYPE_OTHER,
    RDKIT_BOND_BOND_TYPE_ZERO,
} rdkit_bond_BondType;

RDKIT_CFFI_API rdkit_RDProps *rdkit_bond_to_rdprops(rdkit_Bond *cthis);
RDKIT_CFFI_API rdkit_Bond *rdkit_bond_from_rdprops(rdkit_RDProps *cthis);

RDKIT_CFFI_API rdkit_Bond *rdkit_bond_new(void);
RDKIT_CFFI_API void rdkit_bond_del(rdkit_Bond *cthis);
RDKIT_CFFI_API void rdkit_bond_ctor(rdkit_Bond *cthis);
RDKIT_CFFI_API void rdkit_bond_ctor_clone(rdkit_Bond *cthis, const rdkit_Bond *cother);
RDKIT_CFFI_API void rdkit_bond_ctor_move(rdkit_Bond *cthis, rdkit_Bond *cother);
RDKIT_CFFI_API void rdkit_bond_dtor(rdkit_Bond *cthis);
RDKIT_CFFI_API rdkit_bond_BondType rdkit_bond_get_bond_type(const rdkit_Bond *cthis);
RDKIT_CFFI_API double rdkit_bond_get_bond_type_as_double(const rdkit_Bond *cthis);
RDKIT_CFFI_API uint32_t rdkit_bond_get_begin_atom_idx(const rdkit_Bond *cthis);
RDKIT_CFFI_API uint32_t rdkit_bond_get_end_atom_idx(const rdkit_Bond *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__BOND_H */
