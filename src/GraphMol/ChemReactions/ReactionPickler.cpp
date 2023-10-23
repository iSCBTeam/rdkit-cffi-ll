#include "rdkit-cffi/types.h"
#include "rdkit-cffi/GraphMol/ChemReactions/ReactionPickler.h"
#include "rdkit/GraphMol/ChemReactions/ReactionPickler.h"

#include "string.hpp"
#include "Reaction.hpp"

using namespace RDKit;

bool rdkit_reaction_pickler_pickle_reaction(const rdkit_ChemicalReaction *creaction, rdkit_string_owned *cres)
{
	const auto *reaction = c2cpp(creaction);
	const char *ex_reason = "";

	try {
		std::string res;
		ReactionPickler::pickleReaction(*reaction, res);
		rdkit_string_owned_ctor_move(cres, std::move(res));
		return true;
	} catch (const std::exception& e) {
		ex_reason = e.what();
	} catch (...) {
		ex_reason = "Unknown reason";
	}

	rdkit_string_owned_ctor(cres);
	return false;
}

bool rdkit_reaction_pickler_reaction_from_pickle(const rdkit_string *cpickle, rdkit_ChemicalReaction *creaction)
{
	auto *reaction = c2cpp(creaction);
	auto pickle = rdkit_string_to_view(cpickle);
	const char *ex_reason = "";

	try {
		new (reaction) ChemicalReaction();
		ReactionPickler::reactionFromPickle(std::string(pickle), *reaction);
		return true;
	} catch (const std::exception& e) {
		ex_reason = e.what();
	} catch (...) {
		ex_reason = "Unknown reason";
	}

	return false;
}
