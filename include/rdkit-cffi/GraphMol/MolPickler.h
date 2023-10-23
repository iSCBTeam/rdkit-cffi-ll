#ifndef RDKIT_CFFI__GRAPHMOL__MOLPICKLER_H
#define RDKIT_CFFI__GRAPHMOL__MOLPICKLER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
  static unsigned int getDefaultPickleProperties();
  static void setDefaultPickleProperties(unsigned int);

  static const CustomPropHandlerVec &getCustomPropHandlers();
  static void addCustomPropHandler(const CustomPropHandler &handler);
*/

//RDKIT_CFFI_API void rdkit_mol_pickler_pickle_mol_stream(const rdkit_ROMol *cromol, rdkit_ostream *cstream);
//RDKIT_CFFI_API void rdkit_mol_pickler_pickle_mol_stream_prop(const rdkit_ROMol *cromol, rdkit_ostream *cstream, TODO);
RDKIT_CFFI_API bool rdkit_mol_pickler_pickle_mol(const rdkit_ROMol *cromol, rdkit_string_owned *cres);
//RDKIT_CFFI_API void rdkit_mol_pickler_pickle_mol_prop(const rdkit_ROMol *cromol, rdkit_string_owned *cres, TODO);
RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle(const rdkit_string *cpickle, rdkit_ROMol *cromol);
//RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle_prop(const rdkit_string *cpickle, rdkit_ROMol *cromol, TODO);
//RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle_stream_prop(rdkit_istream *cstream, rdkit_ROMol *cromol, TODO);
//RDKIT_CFFI_API bool rdkit_mol_pickler_mol_from_pickle_stream(rdkit_istream *cstream, rdkit_ROMol *cromol);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLPICKLER_H */
