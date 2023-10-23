#include "rdkit-cffi/string.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/FileParsers/MultithreadedMolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MultithreadedMolSupplier.h"

#include "MolSupplier.hpp"
#include "MultithreadedMolSupplier.hpp"
#include "string.hpp"

using namespace RDKit;

rdkit_MolSupplier *rdkit_multithreaded_mol_supplier_to_mol_supplier(rdkit_MultithreadedMolSupplier *cthis)
{
    MolSupplier *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_MultithreadedMolSupplier *rdkit_multithreaded_mol_supplier_from_mol_supplier(rdkit_MolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<MultithreadedMolSupplier *>(this_);
	return cpp2c(obj);
}

void rdkit_multithreaded_mol_supplier_dtor(rdkit_MultithreadedMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MultithreadedMolSupplier();
}

bool rdkit_multithreaded_mol_supplier_get_eof_hit_on_read(rdkit_MultithreadedMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getEOFHitOnRead();
}

uint32_t rdkit_multithreaded_mol_supplier_get_last_record_id(rdkit_MultithreadedMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getLastRecordId();
}

void rdkit_multithreaded_mol_supplier_get_last_item_text(rdkit_string_owned *cstr, rdkit_MultithreadedMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	rdkit_string_owned_ctor_move(cstr, this_->getLastItemText());
}
