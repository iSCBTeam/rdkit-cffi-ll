#ifndef RDKIT_CFFI__TYPES_H
#define RDKIT_CFFI__TYPES_H 1

#include <stdalign.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// TODO: Remove this once rust-bindgen adds support for complex macros
#include "rdkit-cffi/config.h"

#ifdef __cplusplus
extern "C" {
#endif

// TODO: Change to defines once rust-bindgen adds support for complex macros

typedef int8_t rdkit_tribool;

static const rdkit_tribool RDKIT_FALSE = 0;
static const rdkit_tribool RDKIT_TRUE = 1;

static const int32_t RDKIT_I32_MIN = -2147483648;
static const uint32_t RDKIT_U32_MAX = 4294967295;
// TODO: Uncomment this once rust-bindgen adds support for complex macros
//static const size_t RDKIT_SIZE_MAX = SIZE_MAX;

static const rdkit_tribool RDKIT_DEFAULT_TRIBOOL = -1;
static const int32_t RDKIT_DEFAULT_I32 = RDKIT_I32_MIN;
static const uint32_t RDKIT_DEFAULT_U32 = RDKIT_U32_MAX;
// TODO: Uncomment this once rust-bindgen adds support for complex macros
//static const size_t RDKIT_DEFAULT_SIZE = RDKIT_SIZE_MAX;

#define RDKIT_DEFAULT_PTR NULL

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__TYPES_H */
