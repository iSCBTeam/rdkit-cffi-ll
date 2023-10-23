#ifndef RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLWRITERS_H
#define RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLWRITERS_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_MolWriter
{
	alignas(RDKIT_ALIGNOF_MOLWRITER) char opaque[RDKIT_SIZEOF_MOLWRITER];
};

struct rdkit_SmilesWriter
{
	alignas(RDKIT_ALIGNOF_SMILESWRITER) char opaque[RDKIT_SIZEOF_SMILESWRITER];
};

struct rdkit_SDWriter
{
	alignas(RDKIT_ALIGNOF_SDWRITER) char opaque[RDKIT_SIZEOF_SDWRITER];
};

RDKIT_CFFI_API void rdkit_mol_writer_dtor(rdkit_MolWriter *cthis);
RDKIT_CFFI_API void rdkit_mol_writer_write(rdkit_MolWriter *cthis, const rdkit_ROMol *cmol);
RDKIT_CFFI_API void rdkit_mol_writer_write_ex(rdkit_MolWriter *cthis, const rdkit_ROMol *cmol, int32_t conf_id);
RDKIT_CFFI_API void rdkit_mol_writer_flush(rdkit_MolWriter *cthis);
RDKIT_CFFI_API void rdkit_mol_writer_close(rdkit_MolWriter *cthis);
RDKIT_CFFI_API void rdkit_mol_writer_set_props(rdkit_MolWriter *cthis, size_t num_cprop_names, const char *cprop_names[]);
RDKIT_CFFI_API uint32_t rdkit_mol_writer_num_mols(rdkit_MolWriter *cthis);

RDKIT_CFFI_API rdkit_MolWriter *rdkit_smiles_writer_to_mol_writer(rdkit_SmilesWriter *cthis);
RDKIT_CFFI_API rdkit_SmilesWriter *rdkit_smiles_writer_from_mol_writer(rdkit_MolWriter *cthis);

RDKIT_CFFI_API rdkit_SmilesWriter *rdkit_smiles_writer_new(void);
RDKIT_CFFI_API void rdkit_smiles_writer_del(rdkit_SmilesWriter *cthis);
RDKIT_CFFI_API void rdkit_smiles_writer_ctor_filename(rdkit_SmilesWriter *cthis, const char *filename);
RDKIT_CFFI_API void rdkit_smiles_writer_ctor_filename_ex(rdkit_SmilesWriter *cthis, const char *filename, const rdkit_string *delimiter, const rdkit_string *name_header, rdkit_tribool include_header, rdkit_tribool isomeric_smiles, rdkit_tribool kekule_smiles);
RDKIT_CFFI_API void rdkit_smiles_writer_ctor_ostream(rdkit_SmilesWriter *cthis, rdkit_ostream *cstream);
RDKIT_CFFI_API void rdkit_smiles_writer_ctor_ostream_ex(rdkit_SmilesWriter *cthis, rdkit_ostream *cstream, const rdkit_string *delimiter, const rdkit_string *name_header, rdkit_tribool include_header, rdkit_tribool isomeric_smiles, rdkit_tribool kekule_smiles);
RDKIT_CFFI_API void rdkit_smiles_writer_dtor(rdkit_SmilesWriter *cthis);

RDKIT_CFFI_API rdkit_MolWriter *rdkit_sd_writer_to_mol_writer(rdkit_SDWriter *cthis);
RDKIT_CFFI_API rdkit_SDWriter *rdkit_sd_writer_from_mol_writer(rdkit_MolWriter *cthis);

RDKIT_CFFI_API rdkit_SDWriter *rdkit_sd_writer_new(void);
RDKIT_CFFI_API void rdkit_sd_writer_del(rdkit_SDWriter *cthis);
RDKIT_CFFI_API void rdkit_sd_writer_ctor_filename(rdkit_SDWriter *cthis, const char *filename);
RDKIT_CFFI_API void rdkit_sd_writer_ctor_ostream(rdkit_SDWriter *cthis, rdkit_ostream *cstream);
RDKIT_CFFI_API void rdkit_sd_writer_dtor(rdkit_SDWriter *cthis);
RDKIT_CFFI_API bool rdkit_sd_writer_get_text(rdkit_string_owned *ctext, const rdkit_ROMol *cmol);
RDKIT_CFFI_API bool rdkit_sd_writer_get_text_ex(rdkit_string_owned *ctext, const rdkit_ROMol *cmol, int32_t conf_id, rdkit_tribool kekulize, rdkit_tribool force_v3000, int32_t molid, size_t num_cprop_names, const char *cprop_names[]);
RDKIT_CFFI_API void rdkit_sd_writer_set_force_v3000(rdkit_SDWriter *cthis, bool val);
RDKIT_CFFI_API bool rdkit_sd_writer_get_force_v3000(rdkit_SDWriter *cthis);
RDKIT_CFFI_API void rdkit_sd_writer_set_kekulize(rdkit_SDWriter *cthis, bool val);
RDKIT_CFFI_API bool rdkit_sd_writer_get_kekulize(rdkit_SDWriter *cthis);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__FILEPARSERS__MOLWRITERS_H */
