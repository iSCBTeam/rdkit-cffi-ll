#ifndef RDKIT_CFFI__GRAPHMOL__MOLPICKLER_H
#define RDKIT_CFFI__GRAPHMOL__MOLPICKLER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum rdkit_mol_pickler_OptionFlags {
	RDKIT_MOL_PICKLER_OPTION_NO_PROPS = 0x0,
	RDKIT_MOL_PICKLER_OPTION_MOL_PROPS = 0x1,
	RDKIT_MOL_PICKLER_OPTION_ATOM_PROPS = 0x2,
	RDKIT_MOL_PICKLER_OPTION_BOND_PROPS = 0x4,
	RDKIT_MOL_PICKLER_OPTION_PRIVATE_PROPS = 0x10,
	RDKIT_MOL_PICKLER_OPTION_COMPUTED_PROPS = 0x20,
	RDKIT_MOL_PICKLER_OPTION_ALL_PROPS = 0x0000FFFF,
	RDKIT_MOL_PICKLER_OPTION_COORDS_AS_DOUBLE = 0x00010000,
	RDKIT_MOL_PICKLER_OPTION_NO_CONFORMERS = 0x00020000,
	RDKIT_MOL_PICKLER_OPTION_DEFAULT = RDKIT_MOL_PICKLER_OPTION_NO_PROPS,
} rdkit_mol_pickler_OptionFlags;

//RDKIT_CFFI_API void rdkit_mol_pickler_pickle_mol_stream(const rdkit_ROMol *cromol, rdkit_ostream *cstream);
//RDKIT_CFFI_API void rdkit_mol_pickler_pickle_mol_stream_prop(const rdkit_ROMol *cromol, rdkit_ostream *cstream, TODO);
RDKIT_CFFI_API bool rdkit_mol_pickler_pickle_mol(const rdkit_ROMol *cromol, rdkit_string_owned *cres);
RDKIT_CFFI_API bool rdkit_mol_pickler_pickle_mol_ex(const rdkit_ROMol *cromol, rdkit_string_owned *cres, uint32_t flags);
//RDKIT_CFFI_API void rdkit_mol_pickler_pickle_mol_prop(const rdkit_ROMol *cromol, rdkit_string_owned *cres, TODO);
RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle(const rdkit_string *cpickle, rdkit_ROMol *cromol);
//RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle_prop(const rdkit_string *cpickle, rdkit_ROMol *cromol, TODO);
//RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle_stream_prop(rdkit_istream *cstream, rdkit_ROMol *cromol, TODO);
//RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle_stream(rdkit_istream *cstream, rdkit_ROMol *cromol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLPICKLER_H */
