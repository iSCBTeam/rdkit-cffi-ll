#ifndef RDKIT_CFFI__VISIBILITY_H
#define RDKIT_CFFI__VISIBILITY_H 1

#if defined(_WIN32)
#  define RDKIT_CFFI_EXPORT_API __declspec(dllexport)
#  define RDKIT_CFFI_IMPORT_API __declspec(dllimport)
#elif __GNUC__ >= 4 || defined(__clang__)
#  define RDKIT_CFFI_EXPORT_API __attribute__((visibility("default")))
#  define RDKIT_CFFI_IMPORT_API __attribute__((visibility("default")))
#endif /* _WIN32 */

#if RDKIT_CFFI_BUILD
#  define RDKIT_CFFI_API RDKIT_CFFI_EXPORT_API
#else
#  define RDKIT_CFFI_API RDKIT_CFFI_IMPORT_API
#endif

#endif /* RDKIT_CFFI__VISIBILITY_H */
