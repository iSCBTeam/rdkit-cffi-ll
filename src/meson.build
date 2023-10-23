files_librdkit_cffi_ll = files(
	'GraphMol/ChemReactions/Reaction.cpp',
	'GraphMol/ChemReactions/Reaction.hpp',
	'GraphMol/ChemReactions/ReactionParser.cpp',
	'GraphMol/ChemReactions/ReactionPickler.cpp',
	'GraphMol/FileParsers/MolSupplier.cpp',
	'GraphMol/FileParsers/MolSupplier.hpp',
	'GraphMol/FileParsers/MolWriters.cpp',
	'GraphMol/FileParsers/MolWriters.hpp',
	'GraphMol/FileParsers/MultithreadedMolSupplier.cpp',
	'GraphMol/FileParsers/MultithreadedMolSupplier.hpp',
	'GraphMol/FileParsers/MultithreadedSDMolSupplier.cpp',
	'GraphMol/FileParsers/MultithreadedSDMolSupplier.hpp',
	'GraphMol/FileParsers/MultithreadedSmilesMolSupplier.cpp',
	'GraphMol/FileParsers/MultithreadedSmilesMolSupplier.hpp',
	'GraphMol/SmilesParse/SmilesParse.cpp',
	'GraphMol/SmilesParse/SmilesWrite.cpp',
	'GraphMol/Substruct/SubstructMatch.cpp',
	'GraphMol/Substruct/SubstructMatch.hpp',
	'GraphMol/Atom.cpp',
	'GraphMol/Atom.hpp',
	'GraphMol/MolOps.cpp',
	'GraphMol/MolPickler.cpp',
	'GraphMol/ROMol.cpp',
	'GraphMol/ROMol.hpp',
	'GraphMol/RWMol.cpp',
	'GraphMol/RWMol.hpp',
	'RDGeneral/RDProps.cpp',
	'RDGeneral/RDProps.hpp',
	'stream.cpp',
	'stream.hpp',
	'string.cpp',
	'string.hpp',
)

rdkit_cffi_ll_include_dirs = [inc_rdkit_cffi, inc_rdkit_cffi_priv, inc_rdkit]
rdkit_cffi_ll_deps = [dep_rdkit_static]
rdkit_cffi_ll_libs = []

# Hide all the symbols from embedded static libraries
rdkit_cffi_ll_link_args = ['-Wl,--exclude-libs=ALL']

librdkit_cffi_ll = both_libraries(
	'rdkit-cffi-ll',
	files_librdkit_cffi_ll,
	gnu_symbol_visibility: 'hidden',
	include_directories: rdkit_cffi_ll_include_dirs,
	dependencies: rdkit_cffi_ll_deps,
	link_with: rdkit_cffi_ll_libs,
	link_args : rdkit_cffi_ll_link_args,
	install: true,
)

pkgconfig.generate(librdkit_cffi_ll,
	libraries_private: ['-lstdc++']
)
