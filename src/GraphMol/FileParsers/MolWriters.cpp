#include "rdkit-cffi/string.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/FileParsers/MolWriters.h"
#include "rdkit/GraphMol/FileParsers/MolWriters.h"
#include "rdkit/RDGeneral/zstring_view.h"

#include "string.hpp"
#include "stream.hpp"
#include "GraphMol/ROMol.hpp"
#include "MolWriters.hpp"

using namespace RDKit;

static_assert(alignof(MolWriter) == alignof(rdkit_MolWriter));
static_assert(alignof(SmilesWriter) == alignof(rdkit_SmilesWriter));
static_assert(alignof(SDWriter) == alignof(rdkit_SDWriter));
static_assert(sizeof(MolWriter) == sizeof(rdkit_MolWriter));
static_assert(sizeof(SmilesWriter) == sizeof(rdkit_SmilesWriter));
static_assert(sizeof(SDWriter) == sizeof(rdkit_SDWriter));

void rdkit_mol_writer_dtor(rdkit_MolWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~MolWriter();
}

void rdkit_mol_writer_write(rdkit_MolWriter *cthis, const rdkit_ROMol *cmol)
{
	return rdkit_mol_writer_write_ex(cthis, cmol, RDKIT_DEFAULT_I32);
}

void rdkit_mol_writer_write_ex(rdkit_MolWriter *cthis, const rdkit_ROMol *cmol, int32_t conf_id)
{
	auto this_ = c2cpp(cthis);
	auto mol = c2cpp(cmol);

	if (conf_id == RDKIT_DEFAULT_I32)
		conf_id = defaultConfId;

	this_->write(*mol, conf_id);
}

void rdkit_mol_writer_flush(rdkit_MolWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->flush();
}

void rdkit_mol_writer_close(rdkit_MolWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->close();
}

void rdkit_mol_writer_set_props(rdkit_MolWriter *cthis, size_t num_cprop_names, const char *cprop_names[])
{
	auto this_ = c2cpp(cthis);
	auto props = std::vector<std::string>(cprop_names, cprop_names + num_cprop_names);
	this_->setProps(props);
}

uint32_t rdkit_mol_writer_num_mols(rdkit_MolWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->numMols();
}

rdkit_MolWriter *rdkit_smiles_writer_to_mol_writer(rdkit_SmilesWriter *cthis)
{
    MolWriter *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_SmilesWriter *rdkit_smiles_writer_from_mol_writer(rdkit_MolWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<SmilesWriter *>(this_);
	return cpp2c(obj);
}

rdkit_SmilesWriter *rdkit_smiles_writer_new(void)
{
	auto this_ = static_cast<SmilesWriter *>(::operator new(sizeof(SmilesWriter), std::align_val_t(alignof(SmilesWriter))));
	return cpp2c(this_);
}

void rdkit_smiles_writer_del(rdkit_SmilesWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

static inline void ctor_ex_defaults(
	const rdkit_string *&delimiter,
	const rdkit_string *&name_header,
	rdkit_tribool &include_header,
	rdkit_tribool &isomeric_smiles,
	rdkit_tribool &kekule_smiles)
{
	static constexpr rdkit_string delimiter_default = rdkit_string_ctor(" ");
	static constexpr rdkit_string name_header_default = rdkit_string_ctor("Name");

	if (delimiter == RDKIT_DEFAULT_PTR)
		delimiter = &delimiter_default;

	if (name_header == RDKIT_DEFAULT_PTR)
		name_header = &name_header_default;

	if (include_header == RDKIT_DEFAULT_TRIBOOL)
		include_header = RDKIT_TRUE;

	if (isomeric_smiles == RDKIT_DEFAULT_TRIBOOL)
		isomeric_smiles = RDKIT_TRUE;

	if (kekule_smiles == RDKIT_DEFAULT_TRIBOOL)
		kekule_smiles = RDKIT_FALSE;
}

void rdkit_smiles_writer_ctor_filename(rdkit_SmilesWriter *cthis, const char *filename)
{
	rdkit_smiles_writer_ctor_filename_ex(cthis, filename, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

void rdkit_smiles_writer_ctor_filename_ex(
	rdkit_SmilesWriter *cthis,
	const char *filename,
	const rdkit_string *delimiter,
	const rdkit_string *name_header,
	rdkit_tribool include_header,
	rdkit_tribool isomeric_smiles,
	rdkit_tribool kekule_smiles)
{

	ctor_ex_defaults(delimiter, name_header, include_header, isomeric_smiles, kekule_smiles);

	new (cthis) SmilesWriter(zstring_view(filename), rdkit_string_to_view(delimiter), rdkit_string_to_view(name_header), include_header, isomeric_smiles, kekule_smiles);
}

void rdkit_smiles_writer_ctor_ostream(rdkit_SmilesWriter *cthis, rdkit_ostream *cstream)
{
	rdkit_smiles_writer_ctor_ostream_ex(cthis, cstream, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_PTR, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL);
}

void rdkit_smiles_writer_ctor_ostream_ex(
	rdkit_SmilesWriter *cthis,
	rdkit_ostream *cstream,
	const rdkit_string *delimiter,
	const rdkit_string *name_header,
	rdkit_tribool include_header,
	rdkit_tribool isomeric_smiles,
	rdkit_tribool kekule_smiles)
{
	ctor_ex_defaults(delimiter, name_header, include_header, isomeric_smiles, kekule_smiles);

	auto stream = c2cpp(cstream);
	new (cthis) SmilesWriter(stream, rdkit_string_to_view(delimiter), rdkit_string_to_view(name_header), include_header, isomeric_smiles, kekule_smiles);
}

void rdkit_smiles_writer_dtor(rdkit_SmilesWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~SmilesWriter();
}

rdkit_MolWriter *rdkit_sd_writer_to_mol_writer(rdkit_SDWriter *cthis)
{
    MolWriter *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_SDWriter *rdkit_sd_writer_from_mol_writer(rdkit_MolWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<SDWriter *>(this_);
	return cpp2c(obj);
}

rdkit_SDWriter *rdkit_sd_writer_new(void)
{
	auto this_ = static_cast<SDWriter *>(::operator new(sizeof(SDWriter), std::align_val_t(alignof(SDWriter))));
	return cpp2c(this_);
}

void rdkit_sd_writer_del(rdkit_SDWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_sd_writer_ctor_filename(rdkit_SDWriter *cthis, const char *filename)
{
	new (cthis) SDWriter(zstring_view(filename));
}

void rdkit_sd_writer_ctor_ostream(rdkit_SDWriter *cthis, rdkit_ostream *cstream)
{
	auto stream = c2cpp(cstream);
	new (cthis) SDWriter(stream);
}

void rdkit_sd_writer_dtor(rdkit_SDWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~SDWriter();
}

bool rdkit_sd_writer_get_text(rdkit_string_owned *text, const rdkit_ROMol *cmol)
{
	return rdkit_sd_writer_get_text_ex(text, cmol, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_TRIBOOL, RDKIT_DEFAULT_I32, RDKIT_DEFAULT_SIZE, RDKIT_DEFAULT_PTR);
}

bool rdkit_sd_writer_get_text_ex(rdkit_string_owned *text, const rdkit_ROMol *cmol, int32_t conf_id, rdkit_tribool kekulize, rdkit_tribool force_v3000, int32_t mol_id, size_t num_cprop_names, const char *cprop_names[])
{
	auto mol = c2cpp(cmol);

	if (conf_id == RDKIT_DEFAULT_I32)
		conf_id = defaultConfId;

	if (kekulize == RDKIT_DEFAULT_TRIBOOL)
		kekulize = true;

	if (force_v3000 == RDKIT_DEFAULT_TRIBOOL)
		force_v3000 = false;

	if (mol_id == RDKIT_DEFAULT_I32)
		mol_id = -1;

	STR_VECT prop_names_vect;
	STR_VECT *prop_names;

	if (cprop_names == RDKIT_DEFAULT_PTR)
		prop_names = nullptr;
	else
	{
		if (num_cprop_names == RDKIT_DEFAULT_SIZE)
		{
			size_t sz = 0;

			while (cprop_names[sz])
				sz++;

			num_cprop_names = sz;
		}

		prop_names_vect = STR_VECT(cprop_names, cprop_names + num_cprop_names);
		prop_names = &prop_names_vect;
	}

	try {
		rdkit_string_owned_ctor_move(text, SDWriter::getText(*mol, conf_id, kekulize, force_v3000, mol_id, prop_names));
		return true;
	} catch (const std::exception& e) {
		rdkit_string_owned_ctor(text);
		return false;
	}
}

void rdkit_sd_writer_set_force_v3000(rdkit_SDWriter *cthis, bool val)
{
	auto this_ = c2cpp(cthis);
	this_->setForceV3000(val);
}

bool rdkit_sd_writer_get_force_v3000(rdkit_SDWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getForceV3000();
}

void rdkit_sd_writer_set_kekulize(rdkit_SDWriter *cthis, bool val)
{
	auto this_ = c2cpp(cthis);
	this_->setKekulize(val);
}

bool rdkit_sd_writer_get_kekulize(rdkit_SDWriter *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->getKekulize();
}
