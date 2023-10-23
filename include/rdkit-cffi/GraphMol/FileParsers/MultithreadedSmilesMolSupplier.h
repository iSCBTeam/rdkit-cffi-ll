#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSMILESMOLSUPPLIER_H
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSMILESMOLSUPPLIER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MultithreadedSmilesMolSupplier
{
    alignas(RDKIT_ALIGNOF_MULTITHREADEDSMILESMOLSUPPLIER) char opaque[RDKIT_SIZEOF_MULTITHREADEDSMILESMOLSUPPLIER];
};

RDKIT_CFFI_API rdkit_MultithreadedMolSupplier *rdkit_multithreaded_smiles_mol_supplier_to_multithreaded_mol_supplier(rdkit_MultithreadedSmilesMolSupplier *cthis);
RDKIT_CFFI_API rdkit_MultithreadedSmilesMolSupplier *rdkit_multithreaded_smiles_mol_supplier_from_multithreaded_mol_supplier(rdkit_MultithreadedMolSupplier *cthis);


RDKIT_CFFI_API rdkit_MultithreadedSmilesMolSupplier *rdkit_multithreaded_smiles_mol_supplier_new(void);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_del(rdkit_MultithreadedSmilesMolSupplier *cthis);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_ctor(rdkit_MultithreadedSmilesMolSupplier *cthis);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_ctor_filename(rdkit_MultithreadedSmilesMolSupplier *cthis, const char *filename);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_ctor_filename_ex(rdkit_MultithreadedSmilesMolSupplier *cthis, const char *filename, const rdkit_string *delimiter, int32_t smiles_column, int32_t name_column, rdkit_tribool title_line, rdkit_tribool sanitize, size_t num_writer_threads, size_t size_input_queue, size_t size_output_queue);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_ctor_istream(rdkit_MultithreadedSmilesMolSupplier *cthis, rdkit_istream *cstream);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_ctor_istream_ex(rdkit_MultithreadedSmilesMolSupplier *cthis, rdkit_istream *cstream, const rdkit_string *delimiter, int32_t smiles_column, int32_t name_column, rdkit_tribool title_line, rdkit_tribool sanitize, size_t num_writer_threads, size_t size_input_queue, size_t size_output_queue);
RDKIT_CFFI_API void rdkit_multithreaded_smiles_mol_supplier_dtor(rdkit_MultithreadedSmilesMolSupplier *cthis);

/*
 * Implementing the following functions is pointless:
 *   rdkit_multithreaded_smiles_mol_supplier_process_title_line()
 *   rdkit_multithreaded_smiles_mol_supplier_extract_next_record()
 *   rdkit_multithreaded_smiles_mol_supplier_process_molecule_record()
 */

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSMILESMOLSUPPLIER_H */
