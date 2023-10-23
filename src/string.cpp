#include <string>
#include <string_view>
#include <cstring>

#include "rdkit-cffi/string.h"
#include "rdkit-cffi/types.h"

#include "string.hpp"

// internal

rdkit_string *RDKit::rdkit_string_ctor(rdkit_string *cthis, const std::string_view &s)
{
	return rdkit_string_ctor_str(cthis, s.length(), s.data());
}

rdkit_string_owned *RDKit::rdkit_string_owned_ctor_move(rdkit_string_owned *cthis, std::string &&s)
{
	auto *ns = new std::string(std::move(s));
	rdkit_string_ctor_str(&cthis->base, ns->length(), ns->data());
	cthis->ctx = static_cast<void *>(ns);
	return cthis;
}

std::string_view RDKit::rdkit_string_to_view(const rdkit_string *cthis)
{
	return std::string_view(cthis->s, cthis->len);
}

// C ffi

rdkit_string *rdkit_string_ctor(rdkit_string *cthis)
{
	return rdkit_string_ctor_str(cthis, 0, nullptr);
}

rdkit_string *rdkit_string_ctor_str(rdkit_string *cthis, size_t len, const char *str)
{
	cthis->s = str;
	cthis->len = len;
	return cthis;
}

rdkit_string *rdkit_string_ctor_cstr(rdkit_string *cthis, const char *cstr)
{
	size_t len = cstr ? strlen(cstr) : 0;
	return rdkit_string_ctor_str(cthis, len, cstr);
}

rdkit_string_owned *rdkit_string_owned_ctor(rdkit_string_owned *cthis)
{
	rdkit_string_ctor(&cthis->base);
	cthis->ctx = nullptr;
	return cthis;
}

void rdkit_string_owned_dtor(rdkit_string_owned *cthis)
{
	delete static_cast<std::string *>(cthis->ctx);
	cthis->ctx = nullptr;
}

rdkit_string_owned *rdkit_string_to_owned(const rdkit_string *cthis, rdkit_string_owned *cowned)
{
	if (!cthis->s)
		return rdkit_string_owned_ctor(cowned);

	auto *ns = new std::string(cthis->s, cthis->len);
	rdkit_string_ctor_str(&cowned->base, ns->length(), ns->data());
	cowned->ctx = static_cast<void *>(ns);
	return cowned;
}

rdkit_string *rdkit_string_owned_borrow(const rdkit_string_owned *cthis, rdkit_string *cborrowed)
{
	if (!cthis->ctx)
		return rdkit_string_ctor(cborrowed);

	rdkit_string_ctor_str(cborrowed, cthis->base.len, cthis->base.s);
	return cborrowed;
}
