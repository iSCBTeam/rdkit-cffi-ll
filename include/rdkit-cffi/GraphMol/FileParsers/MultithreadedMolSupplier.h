#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDMOLSUPPLIER_H
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDMOLSUPPLIER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MultithreadedMolSupplier
{
	alignas(RDKIT_ALIGNOF_MULTITHREADEDMOLSUPPLIER) char opaque[RDKIT_SIZEOF_MULTITHREADEDMOLSUPPLIER];
};

RDKIT_CFFI_API rdkit_MolSupplier *rdkit_multithreaded_mol_supplier_to_mol_supplier(rdkit_MultithreadedMolSupplier *cthis);
RDKIT_CFFI_API rdkit_MultithreadedMolSupplier *rdkit_multithreaded_mol_supplier_from_mol_supplier(rdkit_MolSupplier *cthis);

RDKIT_CFFI_API void rdkit_multithreaded_mol_supplier_dtor(rdkit_MultithreadedMolSupplier *cthis);
RDKIT_CFFI_API bool rdkit_multithreaded_mol_supplier_get_eof_hit_on_read(rdkit_MultithreadedMolSupplier *cthis);
RDKIT_CFFI_API uint32_t rdkit_multithreaded_mol_supplier_get_last_record_id(rdkit_MultithreadedMolSupplier *cthis);
RDKIT_CFFI_API void rdkit_multithreaded_mol_supplier_get_last_item_text(rdkit_string_owned *cstr, rdkit_MultithreadedMolSupplier *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDMOLSUPPLIER_H */
