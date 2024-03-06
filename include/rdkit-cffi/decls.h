#ifndef RDKIT_CFFI__DECLS_H
#define RDKIT_CFFI__DECLS_H 1

#ifdef __cplusplus
extern "C" {
#endif

/* Geometry/Point.h */

typedef struct rdkit_geom_Point rdkit_geom_Point;
typedef struct rdkit_geom_Point3D rdkit_geom_Point3D;

/* GraphMol/ChemReactions/Reaction.h */

typedef struct rdkit_ChemicalReaction rdkit_ChemicalReaction;

/* GraphMol/FileParsers/MolSupplier.h */

typedef struct rdkit_MolSupplier rdkit_MolSupplier;

/* GraphMol/FileParsers/MolWriters.h */

typedef struct rdkit_MolWriter rdkit_MolWriter;
typedef struct rdkit_SmilesWriter rdkit_SmilesWriter;
typedef struct rdkit_SDWriter rdkit_SDWriter;

/* GraphMol/FileParsers/MultithreadedMolSupplier.h */

typedef struct rdkit_MultithreadedMolSupplier rdkit_MultithreadedMolSupplier;

/* GraphMol/FileParsers/MultithreadedSDMolSupplier.h */

typedef struct rdkit_MultithreadedSDMolSupplier rdkit_MultithreadedSDMolSupplier;

/* GraphMol/FileParsers/MultithreadedSmilesMolSupplier.h */

typedef struct rdkit_MultithreadedSmilesMolSupplier rdkit_MultithreadedSmilesMolSupplier;

/* GraphMol/MolDraw2D/MolDraw2D.h */

typedef struct rdkit_MolDraw2D rdkit_MolDraw2D;

/* GraphMol/MolDraw2D/MolDraw2DSVG.h */

typedef struct rdkit_MolDraw2DSVG rdkit_MolDraw2DSVG;

/* GraphMol/MolStandardize/Charge.h */

typedef struct rdkit_mol_standardize_Reionizer rdkit_mol_standardize_Reionizer;
typedef struct rdkit_mol_standardize_Uncharger rdkit_mol_standardize_Uncharger;

/* GraphMol/MolStandardize/Fragment.h */

typedef struct rdkit_mol_standardize_LargestFragmentChooser rdkit_mol_standardize_LargestFragmentChooser;

/* GraphMol/MolStandardize/MolStandardize.h */

typedef struct rdkit_mol_standardize_CleanupParameters rdkit_mol_standardize_CleanupParameters;

/* GraphMol/MolStandardize/Tautomer.h */

typedef struct rdkit_mol_standardize_TautomerEnumerator rdkit_mol_standardize_TautomerEnumerator;
typedef struct rdkit_mol_standardize_TautomerEnumeratorResult rdkit_mol_standardize_TautomerEnumeratorResult;

/* GraphMol/MolStandardize/Validation.h */

typedef struct rdkit_mol_standardize_AllowedAtomsValidation rdkit_mol_standardize_AllowedAtomsValidation;

/* GraphMol/Substruct/SubstructMatch.h */

typedef struct rdkit_MatchVectType_vec rdkit_MatchVectType_vec;

/* GraphMol/Atom.h */

typedef struct rdkit_Atom rdkit_Atom;
typedef struct rdkit_Atom_sptr_vec rdkit_Atom_sptr_vec;

/* GraphMol/Bond.h */

typedef struct rdkit_Bond rdkit_Bond;

/* GraphMol/Conformer.h */

typedef struct rdkit_Conformer rdkit_Conformer;

/* GraphMol/ROMol.h */

typedef struct rdkit_ROMol rdkit_ROMol;
typedef struct rdkit_ROMol_sptr_vec rdkit_ROMol_sptr_vec;
typedef struct rdkit_ROMol_sptr_vec_vec rdkit_ROMol_sptr_vec_vec;

/* GraphMol/RWMol.h */

typedef struct rdkit_RWMol rdkit_RWMol;

/* GraphMol/RingInfo.h */

typedef struct rdkit_RingInfo rdkit_RingInfo;
typedef struct rdkit_RingInfo_int_vec_vec rdkit_RingInfo_int_vec_vec;

/* RDGeneral/RDProps.h */

typedef struct rdkit_RDProps rdkit_RDProps;

/* stream.hpp */

typedef struct rdkit_istream rdkit_istream;
typedef struct rdkit_ostream rdkit_ostream;

/* string.hpp */

typedef struct rdkit_string rdkit_string;
typedef struct rdkit_string_owned rdkit_string_owned;

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__DECLS_H */
