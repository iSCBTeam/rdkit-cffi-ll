#include "rdkit-cffi/stream.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/FileParsers/MultithreadedSDMolSupplier.h"
#include "rdkit/GraphMol/FileParsers/MultithreadedSDMolSupplier.h"
#include "rdkit/RDGeneral/zstring_view.h"

#include "stream.hpp"
#include "GraphMol/ROMol.hpp"
#include "MultithreadedMolSupplier.hpp"

#include "MultithreadedSDMolSupplier.hpp"

using namespace RDKit;

rdkit_MultithreadedMolSupplier *rdkit_multithreaded_sd_mol_supplier_to_multithreaded_mol_supplier(rdkit_MultithreadedSDMolSupplier *cthis)
{
	MultithreadedMolSupplier *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_MultithreadedSDMolSupplier *rdkit_multithreaded_sd_mol_supplier_from_multithreaded_mol_supplier(rdkit_MultithreadedMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<MultithreadedSDMolSupplier *>(this_);
	return cpp2c(obj);
}

rdkit_MultithreadedSDMolSupplier *rdkit_multithreaded_sd_mol_supplier_new(void)
{
	auto this_ = static_cast<MultithreadedSDMolSupplier *>(::operator new(sizeof(MultithreadedSDMolSupplier), std::align_val_t(alignof(MultithreadedSDMolSupplier))));
	return cpp2c(this_);
}

void rdkit_multithreaded_sd_mol_supplier_del(rdkit_MultithreadedSDMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

static inline void ctor_ex_defaults(
	rdkit_tribool &sanitize,
	rdkit_tribool &remove_hs,
	rdkit_tribool &strict_parsing,
	size_t &num_writer_threads,
	size_t &size_input_queue,
    size_t &size_output_queue)
{
	if (sanitize == RDKIT_DEFAULT_TRIBOOL)
		sanitize = RDKIT_TRUE;

	if (remove_hs == RDKIT_DEFAULT_TRIBOOL)
		remove_hs = RDKIT_TRUE;

	if (strict_parsing == RDKIT_DEFAULT_TRIBOOL)
		strict_parsing = RDKIT_TRUE;

	if (num_writer_threads == RDKIT_DEFAULT_SIZE)
		num_writer_threads = 1;

	if (size_input_queue == RDKIT_DEFAULT_SIZE)
		size_input_queue = 5;

	if (size_output_queue == RDKIT_DEFAULT_SIZE)
		size_output_queue = 5;
}

void rdkit_multithreaded_sd_mol_supplier_ctor(rdkit_MultithreadedSDMolSupplier *cthis)
{
	new (cthis) MultithreadedSDMolSupplier();
}

void rdkit_multithreaded_sd_mol_supplier_ctor_filename(rdkit_MultithreadedSDMolSupplier *cthis, const char *filename)
{
	rdkit_multithreaded_sd_mol_supplier_ctor_filename_ex(cthis, filename, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE);
}

void rdkit_multithreaded_sd_mol_supplier_ctor_filename_ex(
	rdkit_MultithreadedSDMolSupplier *cthis,
	const char *filename,
	rdkit_tribool sanitize,
	rdkit_tribool remove_hs,
	rdkit_tribool strict_parsing,
	size_t num_writer_threads,
	size_t size_input_queue,
    size_t size_output_queue)
{
	ctor_ex_defaults(sanitize, remove_hs, strict_parsing, num_writer_threads, size_input_queue, size_output_queue);

	try {
		new (cthis) MultithreadedSDMolSupplier(zstring_view(filename), sanitize, remove_hs, strict_parsing, num_writer_threads, size_input_queue, size_output_queue);
	} catch (const std::exception& e) {
		// TODO
	}
}

void rdkit_multithreaded_sd_mol_supplier_ctor_istream(rdkit_MultithreadedSDMolSupplier *cthis, rdkit_istream *cstream)
{
	return rdkit_multithreaded_sd_mol_supplier_ctor_istream_ex(cthis, cstream, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_SIZE);
}

void rdkit_multithreaded_sd_mol_supplier_ctor_istream_ex(
	rdkit_MultithreadedSDMolSupplier *cthis,
	rdkit_istream *cstream,
	rdkit_tribool sanitize,
	rdkit_tribool remove_hs,
	rdkit_tribool strict_parsing,
	size_t num_writer_threads,
	size_t size_input_queue,
    size_t size_output_queue)
{
	ctor_ex_defaults(sanitize, remove_hs, strict_parsing, num_writer_threads, size_input_queue, size_output_queue);

	auto stream = c2cpp(cstream);

	try {
		new (cthis) MultithreadedSDMolSupplier(stream, false, sanitize, remove_hs, strict_parsing, num_writer_threads, size_input_queue, size_output_queue);
	} catch (const std::exception& e) {
		// TODO
	}
}

void rdkit_multithreaded_sd_mol_supplier_dtor(rdkit_MultithreadedSDMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MultithreadedSDMolSupplier();
}

void rdkit_multithreaded_sd_mol_supplier_set_process_property_lists(rdkit_MultithreadedSDMolSupplier *cthis, bool val)
{
	auto this_ = c2cpp(cthis);
	this_->setProcessPropertyLists(val);
}

bool rdkit_multithreaded_sd_mol_supplier_get_process_property_lists(rdkit_MultithreadedSDMolSupplier *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getProcessPropertyLists();
}
