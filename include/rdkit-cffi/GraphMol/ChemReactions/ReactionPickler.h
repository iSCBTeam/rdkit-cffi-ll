#ifndef RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTIONPICKLER_H
#define RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTIONPICKLER_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

//RDKIT_CFFI_API void rdkit_reaction_pickler_pickle_reaction_stream(const rdkit_ChemicalReaction *creaction, rdkit_ostream *cstream);
//RDKIT_CFFI_API void rdkit_reaction_pickler_pickle_reaction_stream_prop(const rdkit_ChemicalReaction *creaction, rdkit_ostream *cstream, TODO);
RDKIT_CFFI_API bool rdkit_reaction_pickler_pickle_reaction(const rdkit_ChemicalReaction *creaction, rdkit_string_owned *cres);
//RDKIT_CFFI_API void rdkit_reaction_pickler_pickle_reaction_prop(const rdkit_ChemicalReaction *creaction, rdkit_string_owned *cres, TODO);
RDKIT_CFFI_API bool rdkit_reaction_pickler_reaction_from_pickle(const rdkit_string *cpickle, rdkit_ChemicalReaction *creaction);
//RDKIT_CFFI_API bool rdkit_reaction_pickler_reaction_from_pickle_prop(const rdkit_string *cpickle, rdkit_ChemicalReaction *creaction, TODO);
//RDKIT_CFFI_API bool rdkit_reaction_pickler_reaction_from_pickle_stream_prop(rdkit_istream *cstream, rdkit_ChemicalReaction *creaction, TODO);
//RDKIT_CFFI_API bool rdkit_reaction_pickler_reaction_from_pickle_stream(rdkit_istream *cstream, rdkit_ChemicalReaction *creaction);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__CHEMREACTIONS__REACTIONPICKLER_H */
