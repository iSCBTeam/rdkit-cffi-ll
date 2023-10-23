#ifndef RDKIT_CFFI__STRING_HPP
#define RDKIT_CFFI__STRING_HPP 1

#include <string>
#include <string_view>

#include "rdkit-cffi/string.h"

namespace RDKit {

constexpr rdkit_string rdkit_string_ctor(const std::string_view &s)
{
    rdkit_string cthis;
	cthis.s = s.data();
	cthis.len = s.length();
    return cthis;
}

rdkit_string *rdkit_string_ctor(rdkit_string *cthis, const std::string_view &s);
rdkit_string_owned *rdkit_string_owned_ctor_move(rdkit_string_owned *cthis, std::string &&s);
std::string_view rdkit_string_to_view(const rdkit_string *cthis);

}

#endif /* RDKIT_CFFI__STRING_HPP */
