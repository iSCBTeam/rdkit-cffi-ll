project(
	'rdkit-cffi-ll',
	['c', 'cpp'],
	version: '0.0.1',
	license: 'LGPLv2',
	meson_version: '>= 1.0.0',
	default_options: ['buildtype=debugoptimized', 'c_std=c99', 'cpp_std=c++20', 'b_lto=true'],
)

pkgconfig = import('pkgconfig')

cc = meson.get_compiler('c')
cpp = meson.get_compiler('cpp')

pre_args = []
pre_args += '-DRDKIT_CFFI_BUILD'

add_project_arguments(pre_args, language: ['c', 'cpp'])

has_lto = get_option('b_lto')
if has_lto
	arg_fat_lto = '-ffat-lto-objects'

	if cc.get_id() == 'gcc' # or cc.get_id() == 'clang'
		assert(cc.has_argument(arg_fat_lto), '(C compiler) No support for fat LTO objects, please set b_lto=false.')
	endif

	if cpp.get_id() == 'gcc' # or cpp.get_id() == 'clang'
		assert(cpp.has_argument(arg_fat_lto), '(C++ compiler) No support for fat LTO objects, please set b_lto=false.')
	endif

	add_project_arguments([arg_fat_lto], language: ['c', 'cpp'])
endif

# RDKit dependencies

rdkit_prefix = '../rdkit/rdkit-build-baselibs'

inc_rdkit = include_directories(
	rdkit_prefix / 'include',
	rdkit_prefix / 'include/rdkit',
)

dep_rdkit = dependency('rdkit',
	method: 'cmake',
	modules: [
		'RDKit::Abbreviations',
		'RDKit::Alignment',
		'RDKit::Catalogs',
		'RDKit::ChemicalFeatures',
		'RDKit::ChemReactions',
		'RDKit::ChemTransforms',
		'RDKit::CIPLabeler',
		'RDKit::DataStructs',
		'RDKit::Depictor',
		'RDKit::Deprotect',
		'RDKit::Descriptors',
		'RDKit::DistGeometry',
		'RDKit::DistGeomHelpers',
		'RDKit::EigenSolvers',
		'RDKit::FileParsers',
		'RDKit::FilterCatalog',
		'RDKit::Fingerprints',
		'RDKit::FMCS',
		'RDKit::ForceFieldHelpers',
		'RDKit::ForceField',
		'RDKit::FragCatalog',
		'RDKit::GenericGroups',
		'RDKit::GraphMol',
		'RDKit::InfoTheory',
		'RDKit::MMPA',
		'RDKit::MolAlign',
		'RDKit::MolCatalog',
		'RDKit::MolChemicalFeatures',
		'RDKit::MolDraw2D',
		'RDKit::MolEnumerator',
		'RDKit::MolHash',
		'RDKit::MolInterchange',
		'RDKit::MolStandardize',
		'RDKit::MolTransforms',
		'RDKit::O3AAlign',
		'RDKit::Optimizer',
		'RDKit::PartialCharges',
		'RDKit::RDGeneral',
		'RDKit::RDGeometryLib',
		'RDKit::RDStreams',
		'RDKit::ReducedGraphs',
		'RDKit::RGroupDecomposition',
		'RDKit::RingDecomposerLib',
		'RDKit::ScaffoldNetwork',
		'RDKit::ShapeHelpers',
		'RDKit::SimDivPickers',
		'RDKit::SLNParse',
		'RDKit::SmilesParse',
		'RDKit::Subgraphs',
		'RDKit::SubstructLibrary',
		'RDKit::SubstructMatch',
		'RDKit::TautomerQuery',
		'RDKit::Trajectory',
		'RDKit::ga',
		'RDKit::hc',
		'RDKit::rdkit_base',
	],
	static: false,
	cmake_args: ['-DCMAKE_PREFIX_PATH=' + meson.project_source_root() / rdkit_prefix],
)

dep_rdkit_static = dependency('rdkit',
	method: 'cmake',
	modules: [
		'RDKit::Abbreviations_static',
		'RDKit::Alignment_static',
		'RDKit::Catalogs_static',
		'RDKit::ChemicalFeatures_static',
		'RDKit::ChemReactions_static',
		'RDKit::ChemTransforms_static',
		'RDKit::CIPLabeler_static',
		'RDKit::DataStructs_static',
		'RDKit::Depictor_static',
		'RDKit::Deprotect_static',
		'RDKit::Descriptors_static',
		'RDKit::DistGeometry_static',
		'RDKit::DistGeomHelpers_static',
		'RDKit::EigenSolvers_static',
		'RDKit::FileParsers_static',
		'RDKit::FilterCatalog_static',
		'RDKit::Fingerprints_static',
		'RDKit::FMCS_static',
		'RDKit::ForceFieldHelpers_static',
		'RDKit::ForceField_static',
		'RDKit::FragCatalog_static',
		'RDKit::GenericGroups_static',
		'RDKit::GraphMol_static',
		'RDKit::InfoTheory_static',
		'RDKit::MMPA_static',
		'RDKit::MolAlign_static',
		'RDKit::MolCatalog_static',
		'RDKit::MolChemicalFeatures_static',
		'RDKit::MolDraw2D_static',
		'RDKit::MolEnumerator_static',
		'RDKit::MolHash_static',
		'RDKit::MolInterchange_static',
		'RDKit::MolStandardize_static',
		'RDKit::MolTransforms_static',
		'RDKit::O3AAlign_static',
		'RDKit::Optimizer_static',
		'RDKit::PartialCharges_static',
		'RDKit::RDGeneral_static',
		'RDKit::RDGeometryLib_static',
		'RDKit::RDStreams_static',
		'RDKit::ReducedGraphs_static',
		'RDKit::RGroupDecomposition_static',
		'RDKit::RingDecomposerLib_static',
		'RDKit::ScaffoldNetwork_static',
		'RDKit::ShapeHelpers_static',
		'RDKit::SimDivPickers_static',
		'RDKit::SLNParse_static',
		'RDKit::SmilesParse_static',
		'RDKit::Subgraphs_static',
		'RDKit::SubstructLibrary_static',
		'RDKit::SubstructMatch_static',
		'RDKit::TautomerQuery_static',
		'RDKit::Trajectory_static',
		'RDKit::ga_static',
		'RDKit::hc_static',
		'RDKit::rdkit_base',
	],
	static: true,
	cmake_args: ['-DCMAKE_PREFIX_PATH=' + meson.project_source_root() / rdkit_prefix],
)

# Internal dependencies

inc_rdkit_cffi = include_directories('include')
inc_rdkit_cffi_priv = include_directories('src')

subdir('include')
subdir('src')
