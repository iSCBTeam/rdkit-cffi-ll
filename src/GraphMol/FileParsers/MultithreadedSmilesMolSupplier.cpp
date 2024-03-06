#include "rdkit-cffi/stream.h"
#include "rdkit-cffi/string.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/FileParsers/MultithreadedSmilesMolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MultithreadedSmilesMolSupplier.h"

#include "stream.hpp"
#include "string.hpp"
#include "GraphMol/ROMol.hpp"
#include "MultithreadedMolSupplier.hpp"

#include "MultithreadedSmilesMolSupplier.hpp"

using namespace RDKit;

rdkit_MultithreadedMolSupplier *rdkit_multithreaded_smiles_mol_supplier_to_multithreaded_mol_supplier(rdkit_MultithreadedSmilesMolSupplier *cthis)
{
	MultithreadedMolSupplier *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_MultithreadedSmilesMolSupplier *rdkit_multithreaded_smiles_mol_supplier_from_multithreaded_mol_supplier(rdkit_MultithreadedMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<MultithreadedSmilesMolSupplier *>(this_);
	return cpp2c(obj);
}

rdkit_MultithreadedSmilesMolSupplier *rdkit_multithreaded_smiles_mol_supplier_new(void)
{
	auto this_ = static_cast<MultithreadedSmilesMolSupplier *>(::operator new(sizeof(MultithreadedSmilesMolSupplier), std::align_val_t(alignof(MultithreadedSmilesMolSupplier))));
	return cpp2c(this_);
}

void rdkit_multithreaded_smiles_mol_supplier_del(rdkit_MultithreadedSmilesMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

static inline void ctor_ex_defaults(
	const rdkit_string *&delimiter,
	int32_t &smiles_column,
	int32_t &name_column,
	rdkit_tribool &title_line,
	rdkit_tribool &sanitize,
	size_t &num_writer_threads,
	size_t &size_input_queue,
    size_t &size_output_queue)
{
	static constexpr rdkit_string delimiter_default = rdkit_string_ctor(" \t");

	if (delimiter == RDKIT_DEFAULT_PTR)
		delimiter = &delimiter_default;

	if (smiles_column == RDKIT_DEFAULT_I32)
		smiles_column = 0;

	if (name_column == RDKIT_DEFAULT_I32)
		name_column = 1;

	if (title_line == RDKIT_DEFAULT_TRIBOOL)
		title_line = RDKIT_TRUE;

	if (sanitize == RDKIT_DEFAULT_TRIBOOL)
		sanitize = RDKIT_TRUE;

	if (num_writer_threads == RDKIT_DEFAULT_SIZE)
		num_writer_threads = 1;

	if (size_input_queue == RDKIT_DEFAULT_SIZE)
		size_input_queue = 5;

	if (size_output_queue == RDKIT_DEFAULT_SIZE)
		size_output_queue = 5;
}

bool rdkit_multithreaded_smiles_mol_supplier_ctor(rdkit_MultithreadedSmilesMolSupplier *cthis)
{
	try {
		new (cthis) MultithreadedSmilesMolSupplier();
		return true;
	} catch (...) {
		return false;
	}
}

bool rdkit_multithreaded_smiles_mol_supplier_ctor_filename(rdkit_MultithreadedSmilesMolSupplier *cthis, const char *filename)
{
	return rdkit_multithreaded_smiles_mol_supplier_ctor_filename_ex(cthis, filename, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE);
}

bool rdkit_multithreaded_smiles_mol_supplier_ctor_filename_ex(
	rdkit_MultithreadedSmilesMolSupplier *cthis,
	const char *filename,
	const rdkit_string *delimiter,
	int32_t smiles_column,
	int32_t name_column,
	rdkit_tribool title_line,
	rdkit_tribool sanitize,
	size_t num_writer_threads,
	size_t size_input_queue,
    size_t size_output_queue)
{
	ctor_ex_defaults(delimiter, smiles_column, name_column, title_line, sanitize, num_writer_threads, size_input_queue, size_output_queue);

	try {
		new (cthis) MultithreadedSmilesMolSupplier(zstring_view(filename), rdkit_string_to_view(delimiter), smiles_column, name_column, !!title_line, !!sanitize, num_writer_threads, size_input_queue, size_output_queue);
		return true;
	} catch (const std::exception& e) {
		// TODO
		return false;
	}
}

bool rdkit_multithreaded_smiles_mol_supplier_ctor_istream(rdkit_MultithreadedSmilesMolSupplier *cthis, rdkit_istream *cstream)
{
	return rdkit_multithreaded_smiles_mol_supplier_ctor_istream_ex(cthis, cstream, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE);
}

bool rdkit_multithreaded_smiles_mol_supplier_ctor_istream_ex(
	rdkit_MultithreadedSmilesMolSupplier *cthis,
	rdkit_istream *cstream,
	const rdkit_string *delimiter,
	int32_t smiles_column,
	int32_t name_column,
	rdkit_tribool title_line,
	rdkit_tribool sanitize,
	size_t num_writer_threads,
	size_t size_input_queue,
    size_t size_output_queue)
{
	ctor_ex_defaults(delimiter, smiles_column, name_column, title_line, sanitize, num_writer_threads, size_input_queue, size_output_queue);

	auto stream = c2cpp(cstream);

	try {
		new (cthis) MultithreadedSmilesMolSupplier(stream, false, rdkit_string_to_view(delimiter), smiles_column, name_column, !!title_line, !!sanitize, num_writer_threads, size_input_queue, size_output_queue);
		return true;
	} catch (const std::exception& e) {
		// TODO
		return false;
	}
}

void rdkit_multithreaded_smiles_mol_supplier_dtor(rdkit_MultithreadedSmilesMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MultithreadedSmilesMolSupplier();
}
