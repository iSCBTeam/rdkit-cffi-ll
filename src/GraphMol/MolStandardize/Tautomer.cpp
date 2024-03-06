#include "rdkit-cffi/GraphMol/ROMol.h"
#include "rdkit-cffi/GraphMol/MolStandardize/Fragment.h"
#include "rdkit/GraphMol/MolStandardize/Fragment.h"

#include "GraphMol/ROMol.hpp"
#include "MolStandardize.hpp"
#include "Tautomer.hpp"

using namespace RDKit;
using namespace RDKit::MolStandardize;

static_assert(alignof(TautomerEnumerator) == alignof(rdkit_mol_standardize_TautomerEnumerator));
static_assert(sizeof(TautomerEnumerator) == sizeof(rdkit_mol_standardize_TautomerEnumerator));
static_assert(alignof(TautomerEnumeratorResult) == alignof(rdkit_mol_standardize_TautomerEnumeratorResult));
static_assert(sizeof(TautomerEnumeratorResult) == sizeof(rdkit_mol_standardize_TautomerEnumeratorResult));


rdkit_mol_standardize_TautomerEnumerator *rdkit_mol_standardize_tautomer_enumerator_new(void)
{
	auto this_ = static_cast<TautomerEnumerator *>(::operator new(sizeof(TautomerEnumerator), std::align_val_t(alignof(TautomerEnumerator))));
	return cpp2c(this_);
}

void rdkit_mol_standardize_tautomer_enumerator_del(rdkit_mol_standardize_TautomerEnumerator *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_mol_standardize_tautomer_enumerator_ctor(rdkit_mol_standardize_TautomerEnumerator *cthis)
{
	rdkit_mol_standardize_tautomer_enumerator_ctor_params(cthis, nullptr);
}

void rdkit_mol_standardize_tautomer_enumerator_ctor_params(rdkit_mol_standardize_TautomerEnumerator *cthis, const rdkit_mol_standardize_CleanupParameters *cparams)
{
	if (!cparams)
		cparams = rdkit_mol_standardize_cleanup_parameters_defaults();

	auto params = c2cpp(cparams);

	new (cthis) TautomerEnumerator(*params);
}

void rdkit_mol_standardize_tautomer_enumerator_dtor(rdkit_mol_standardize_TautomerEnumerator *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~TautomerEnumerator();
}

bool rdkit_mol_standardize_tautomer_enumerator_enumerate(const rdkit_mol_standardize_TautomerEnumerator *cthis, rdkit_mol_standardize_TautomerEnumeratorResult *cresult, const rdkit_ROMol *cmol)
{
	auto this_ = c2cpp(cthis);
	auto result = c2cpp(cresult);
	auto mol = c2cpp(cmol);

	try {
		*result = this_->enumerate(*mol);
		return true;
	} catch (const std::exception& e) {
		return false;
	}
}
