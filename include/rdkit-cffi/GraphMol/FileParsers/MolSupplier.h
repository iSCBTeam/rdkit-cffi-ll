#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLSUPPLIER_H
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLSUPPLIER_H 1

#include "rdkit-cffi/config.h"
#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MolSupplier
{
    alignas(RDKIT_ALIGNOF_MOLSUPPLIER) char opaque[RDKIT_SIZEOF_MOLSUPPLIER];
};

RDKIT_CFFI_API void rdkit_mol_supplier_dtor(rdkit_MolSupplier *cthis);
RDKIT_CFFI_API void rdkit_mol_supplier_init(rdkit_MolSupplier *cthis);
RDKIT_CFFI_API void rdkit_mol_supplier_reset(rdkit_MolSupplier *cthis);
RDKIT_CFFI_API bool rdkit_mol_supplier_at_end(rdkit_MolSupplier *cthis);
RDKIT_CFFI_API bool rdkit_mol_supplier_next(rdkit_MolSupplier *cthis, rdkit_ROMol *cromol);
RDKIT_CFFI_API void rdkit_mol_supplier_close(rdkit_MolSupplier *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLSUPPLIER_H */
