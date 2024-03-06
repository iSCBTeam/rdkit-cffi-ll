#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSDMOLSUPPLIER_H
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSDMOLSUPPLIER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MultithreadedSDMolSupplier
{
    alignas(RDKIT_ALIGNOF_MULTITHREADEDSDMOLSUPPLIER) char opaque[RDKIT_SIZEOF_MULTITHREADEDSDMOLSUPPLIER];
};

RDKIT_CFFI_API rdkit_MultithreadedMolSupplier *rdkit_multithreaded_sd_mol_supplier_to_multithreaded_mol_supplier(rdkit_MultithreadedSDMolSupplier *cthis);
RDKIT_CFFI_API rdkit_MultithreadedSDMolSupplier *rdkit_multithreaded_sd_mol_supplier_from_multithreaded_mol_supplier(rdkit_MultithreadedMolSupplier *cthis);

RDKIT_CFFI_API rdkit_MultithreadedSDMolSupplier *rdkit_multithreaded_sd_mol_supplier_new(void);
RDKIT_CFFI_API void rdkit_multithreaded_sd_mol_supplier_del(rdkit_MultithreadedSDMolSupplier *cthis);
RDKIT_CFFI_API bool rdkit_multithreaded_sd_mol_supplier_ctor(rdkit_MultithreadedSDMolSupplier *cthis);
RDKIT_CFFI_API bool rdkit_multithreaded_sd_mol_supplier_ctor_filename(rdkit_MultithreadedSDMolSupplier *cthis, const char *filename);
RDKIT_CFFI_API bool rdkit_multithreaded_sd_mol_supplier_ctor_filename_ex(rdkit_MultithreadedSDMolSupplier *cthis, const char *filename, rdkit_tribool sanitize, rdkit_tribool remove_hs, rdkit_tribool strict_parsing, size_t num_writer_threads, size_t size_input_queue, size_t size_output_queue);
RDKIT_CFFI_API bool rdkit_multithreaded_sd_mol_supplier_ctor_istream(rdkit_MultithreadedSDMolSupplier *cthis, rdkit_istream *cstream);
RDKIT_CFFI_API bool rdkit_multithreaded_sd_mol_supplier_ctor_istream_ex(rdkit_MultithreadedSDMolSupplier *cthis, rdkit_istream *cstream, rdkit_tribool sanitize, rdkit_tribool remove_hs, rdkit_tribool strict_parsing, size_t num_writer_threads, size_t size_input_queue, size_t size_output_queue);
RDKIT_CFFI_API void rdkit_multithreaded_sd_mol_supplier_dtor(rdkit_MultithreadedSDMolSupplier *cthis);
RDKIT_CFFI_API void rdkit_multithreaded_sd_mol_supplier_set_process_property_lists(rdkit_MultithreadedSDMolSupplier *cthis, bool val);
RDKIT_CFFI_API bool rdkit_multithreaded_sd_mol_supplier_get_process_property_lists(rdkit_MultithreadedSDMolSupplier *cthis);

/*
 * Implementing the following functions is pointless:
 *   rdkit_multithreaded_sd_mol_supplier_check_for_end()
 *   rdkit_multithreaded_sd_mol_supplier_extract_next_record()
 *   rdkit_multithreaded_sd_mol_supplier_process_molecule_record()
 *   rdkit_multithreaded_sd_mol_supplier_read_mol_props()
 */

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MULTITHREADEDSDMOLSUPPLIER_H */
