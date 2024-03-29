align_low = 1
align_high = 1024
size_low = 0
size_high = 1024

conf_inc = [inc_rdkit_cffi, inc_rdkit_cffi_priv, inc_rdkit]

conf_types = [
	['rdkit/Geometry/point.h', 'RDGeom::Point'],
	['rdkit/Geometry/point.h', 'RDGeom::Point3D'],
	['rdkit/GraphMol/ChemReactions/Reaction.h', 'RDKit::ChemicalReaction'],
	['rdkit/GraphMol/FileParsers/MolSupplier.h', 'RDKit::MolSupplier'],
	['rdkit/GraphMol/FileParsers/MolWriters.h', 'RDKit::MolWriter'],
	['rdkit/GraphMol/FileParsers/MolWriters.h', 'RDKit::SmilesWriter'],
	['rdkit/GraphMol/FileParsers/MolWriters.h', 'RDKit::SDWriter'],
	['rdkit/GraphMol/MolDraw2D/MolDraw2D.h', 'RDKit::MolDraw2D'],
	['rdkit/GraphMol/MolDraw2D/MolDraw2DSVG.h', 'RDKit::MolDraw2DSVG'],
	['rdkit/GraphMol/MolStandardize/Charge.h', 'RDKit::MolStandardize::Reionizer'],
	['rdkit/GraphMol/MolStandardize/Charge.h', 'RDKit::MolStandardize::Uncharger'],
	['rdkit/GraphMol/MolStandardize/Fragment.h', 'RDKit::MolStandardize::LargestFragmentChooser'],
	['rdkit/GraphMol/MolStandardize/MolStandardize.h', 'RDKit::MolStandardize::CleanupParameters'],
	['rdkit/GraphMol/MolStandardize/Tautomer.h', 'RDKit::MolStandardize::TautomerEnumerator'],
	['rdkit/GraphMol/MolStandardize/Tautomer.h', 'RDKit::MolStandardize::TautomerEnumeratorResult'],
	['rdkit/GraphMol/MolStandardize/Validate.h', 'RDKit::MolStandardize::AllowedAtomsValidation'],
	['rdkit/GraphMol/FileParsers/MultithreadedMolSupplier.h', 'RDKit::MultithreadedMolSupplier'],
	['rdkit/GraphMol/FileParsers/MultithreadedSDMolSupplier.h', 'RDKit::MultithreadedSDMolSupplier'],
	['rdkit/GraphMol/FileParsers/MultithreadedSmilesMolSupplier.h', 'RDKit::MultithreadedSmilesMolSupplier'],
	['rdkit/GraphMol/Substruct/SubstructMatch.h', 'std::vector<RDKit::MatchVectType>'],
	['rdkit/GraphMol/Atom.h', 'RDKit::Atom'],
	['rdkit/GraphMol/Atom.h', 'std::vector<std::shared_ptr<RDKit::Atom>>'],
	['rdkit/GraphMol/Bond.h', 'RDKit::Bond'],
	['rdkit/GraphMol/Conformer.h', 'RDKit::Conformer'],
	['rdkit/GraphMol/ROMol.h', 'RDKit::ROMol'],
	['rdkit/GraphMol/ROMol.h', 'RDKit::MOL_SPTR_VECT'],
	['rdkit/GraphMol/ROMol.h', 'std::vector<RDKit::MOL_SPTR_VECT>'],
	['rdkit/GraphMol/RWMol.h', 'RDKit::RWMol'],
	['rdkit/GraphMol/RingInfo.h', 'RDKit::RingInfo'],
	['rdkit/GraphMol/RingInfo.h', 'RDKit::RingInfo::VECT_INT_VECT'],
	['rdkit/RDGeneral/RDProps.h', 'RDKit::RDProps'],
#	['stream.hpp', 'rdkit_istream'],
#	['stream.hpp', 'rdkit_ostream'],
]

conf_data = configuration_data()

# TODO: Remove this once rust-bindgen adds support for complex macros
conf_data.set('SIZE_MAX', cpp.get_define('SIZE_MAX', prefix: '#include <stdint.h>').strip('()'))

foreach entry: conf_types
	f = entry[0]
	t = entry[1]
	name = t.to_upper().replace('::', '_').replace('<', '_').replace('>', '_')

	align_val = cpp.compute_int('alignof(' + t + ')',
		prefix: '#include "' + f + '"',
		include_directories: conf_inc,
		dependencies: dep_rdkit.partial_dependency(compile_args: true, includes: true),
		low: align_low,
		high: align_high)
	if align_val < 0
		error('Failed to get alignment of type \'' + t + '\'.')
	endif

	size_val = cpp.compute_int('sizeof(' + t + ')',
		prefix: '#include "' + f + '"',
		include_directories: conf_inc,
		dependencies: dep_rdkit.partial_dependency(compile_args: true, includes: true),
		low: size_low,
		high: size_high)
	if size_val < 0
		error('Failed to get size of type \'' + t + '\'.')
	endif

	conf_data.set('ALIGNOF_' + name, align_val)
	conf_data.set('SIZEOF_' + name, size_val)
endforeach

configure_file(
	input: 'config.h.in',
	output: 'config.h',
	configuration: conf_data,
	install_dir: get_option('prefix') / get_option('includedir') / 'rdkit-cffi',
)
