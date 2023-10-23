#ifndef RDKIT_CFFI__DECLS_H
#define RDKIT_CFFI__DECLS_H 1

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rdkit_istream rdkit_istream;
typedef struct rdkit_ostream rdkit_ostream;
typedef struct rdkit_string rdkit_string;
typedef struct rdkit_string_owned rdkit_string_owned;

typedef struct rdkit_ChemicalReaction rdkit_ChemicalReaction;
typedef struct rdkit_MolSupplier rdkit_MolSupplier;
typedef struct rdkit_MolWriter rdkit_MolWriter;
typedef struct rdkit_SmilesWriter rdkit_SmilesWriter;
typedef struct rdkit_SDWriter rdkit_SDWriter;
typedef struct rdkit_MultithreadedMolSupplier rdkit_MultithreadedMolSupplier;
typedef struct rdkit_MultithreadedSDMolSupplier rdkit_MultithreadedSDMolSupplier;
typedef struct rdkit_MultithreadedSmilesMolSupplier rdkit_MultithreadedSmilesMolSupplier;
typedef struct rdkit_vec_MatchVectType rdkit_vec_MatchVectType;typedef struct rdkit_Atom rdkit_Atom;
typedef struct rdkit_ROMol rdkit_ROMol;
typedef struct rdkit_ROMol_sptr_vec rdkit_ROMol_sptr_vec;
typedef struct rdkit_ROMol_sptr_vec_vec rdkit_ROMol_sptr_vec_vec;typedef struct rdkit_RWMol rdkit_RWMol;
typedef struct rdkit_RDProps rdkit_RDProps;

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__DECLS_H */
