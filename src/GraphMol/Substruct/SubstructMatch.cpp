#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/Substruct/SubstructMatch.h"
#include "rdkit/GraphMol/Substruct/SubstructMatch.h"

#include "GraphMol/ROMol.hpp"
#include "SubstructMatch.hpp"

using namespace RDKit;

rdkit_vec_MatchVectType *rdkit_substruct_match(rdkit_ROMol *cmol, rdkit_ROMol *cquery)
{
	auto mol = c2cpp(cmol);
	auto query = c2cpp(cquery);

	auto matches = new std::vector<MatchVectType>(SubstructMatch(*mol, *query));
	return cpp2c(matches);
}

void rdkit_vec_match_vect_type_dtor(rdkit_vec_MatchVectType *cthis)
{
	auto this_ = c2cpp(cthis);
	delete this_;
}

size_t rdkit_vec_match_vect_type_size(rdkit_vec_MatchVectType *cthis)
{
	auto this_ = c2cpp(cthis);
	return this_->size();
}

size_t rdkit_vec_match_vect_type_sub_size(rdkit_vec_MatchVectType *cthis, size_t i)
{
	auto this_ = c2cpp(cthis);
	return (*this_)[i].size();
}

void rdkit_vec_match_vect_type_sub_get(rdkit_vec_MatchVectType *cthis, size_t i, size_t j, int *query_atom_idx, int *mol_atom_idx)
{
	auto this_ = c2cpp(cthis);
	auto [first, second] = (*this_)[i][j];

	if (query_atom_idx)
		*query_atom_idx = first;
	if (mol_atom_idx)
		*mol_atom_idx = second;
}
