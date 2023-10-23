#ifndef RDKIT_CFFI__GRAPHMOL__MOLOPS_H
#define RDKIT_CFFI__GRAPHMOL__MOLOPS_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum rdkit_SanitizeFlags {
	RDKIT_SANITIZE_NONE = 0x0,
	RDKIT_SANITIZE_CLEANUP = 0x1,
	RDKIT_SANITIZE_PROPERTIES = 0x2,
	RDKIT_SANITIZE_SYMMRINGS = 0x4,
	RDKIT_SANITIZE_KEKULIZE = 0x8,
	RDKIT_SANITIZE_FINDRADICALS = 0x10,
	RDKIT_SANITIZE_SETAROMATICITY = 0x20,
	RDKIT_SANITIZE_SETCONJUGATION = 0x40,
	RDKIT_SANITIZE_SETHYBRIDIZATION = 0x80,
	RDKIT_SANITIZE_CLEANUPCHIRALITY = 0x100,
	RDKIT_SANITIZE_ADJUSTHS = 0x200,
	RDKIT_SANITIZE_CLEANUP_ORGANOMETALLICS = 0x400,
	RDKIT_SANITIZE_ALL = 0xFFFFFFF,
	RDKIT_SANITIZE_DEFAULT = RDKIT_SANITIZE_ALL,
} rdkit_SanitizeFlags;

RDKIT_CFFI_API bool rdkit_mol_ops_sanitize_mol(rdkit_RWMol *cthis);
RDKIT_CFFI_API bool rdkit_mol_ops_sanitize_mol_ex(rdkit_RWMol *cthis, rdkit_SanitizeFlags *operation_that_failed, uint32_t sanitize_ops);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GRAPHMOL__MOLOPS_H */
