#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/Substruct/SubstructMatch.h"
#include "rdkit/GraphMol/Substruct/SubstructMatch.h"

#include "GraphMol/ROMol.hpp"
#include "SubstructMatch.hpp"

using namespace RDKit;

bool rdkit_has_substruct_match(const rdkit_ROMol *cmol, const rdkit_ROMol *cquery)
{
	auto mol = c2cpp(cmol);
	auto query = c2cpp(cquery);

	try {
		MatchVectType dummy_match_vect;
		return SubstructMatch(*mol, *query, dummy_match_vect);
	} catch(...) {
		return false;
	}
}

bool rdkit_substruct_match(rdkit_MatchVectType_vec *cmatches, const rdkit_ROMol *cmol, const rdkit_ROMol *cquery)
{
	auto mol = c2cpp(cmol);
	auto query = c2cpp(cquery);

	try {
		new (cmatches) std::vector<MatchVectType>(SubstructMatch(*mol, *query));

		auto match_count = rdkit_match_vect_type_vec_size(cmatches);
		if (match_count > 0)
			return true;

		rdkit_match_vect_type_vec_dtor(cmatches);
		return false;
	} catch (...) {
		return false;
	}
}

void rdkit_match_vect_type_vec_dtor(rdkit_MatchVectType_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~vector();
}

size_t rdkit_match_vect_type_vec_size(const rdkit_MatchVectType_vec *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->size();
}

size_t rdkit_match_vect_type_vec_entry_size(const rdkit_MatchVectType_vec *cthis, size_t idx_entry)
{
	auto this_ = c2cpp(cthis);
	return (*this_)[idx_entry].size();
}

bool rdkit_match_vect_type_vec_get_entry_atom_pair(const rdkit_MatchVectType_vec *cthis, size_t idx_entry, size_t idx_pair, int32_t *idx_query_atom, int32_t *idx_mol_atom)
{
	auto this_ = c2cpp(cthis);

	if (idx_entry >= this_->size())
		return false;

	const auto &entry = (*this_)[idx_entry];
	if (idx_pair >= entry.size())
		return false;

	auto [first, second] = entry[idx_pair];

	if (idx_query_atom)
		*idx_query_atom = first;
	if (idx_mol_atom)
		*idx_mol_atom = second;

	return true;
}
