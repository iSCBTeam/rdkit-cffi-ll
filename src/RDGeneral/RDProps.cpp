#include "rdkit-cffi/RDGeneral/RDProps.h"
#include "rdkit/RDGeneral/RDProps.h"

#include "string.hpp"
#include "RDProps.hpp"

using namespace RDKit;

static_assert(alignof(RDProps) == alignof(rdkit_RDProps));
static_assert(sizeof(RDProps) == sizeof(rdkit_RDProps));

rdkit_RDProps *rdkit_rdprops_new(void)
{
	auto this_ = static_cast<RDProps *>(::operator new(sizeof(RDProps), std::align_val_t(alignof(RDProps))));
	return cpp2c(this_);
}

void rdkit_rdprops_del(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_rdprops_ctor(rdkit_RDProps *cthis)
{
	new (cthis) RDProps();
}

void rdkit_rdprops_dtor(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~RDProps();
}

void rdkit_rdprops_clear(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->clear();
}

// FIXME: Replace std::string by std::string_view

void rdkit_rdprops_set_prop_str(rdkit_RDProps *cthis, const rdkit_string *key, const rdkit_string *val)
{
	auto this_ = c2cpp(cthis);
	this_->setProp(std::string(key->s, key->len), std::string(val->s, val->len));
}

void rdkit_rdprops_set_prop_u32(rdkit_RDProps *cthis, const rdkit_string *key, uint32_t val)
{
	auto this_ = c2cpp(cthis);
	this_->setProp(std::string(key->s, key->len), val);
}

void rdkit_rdprops_set_prop_i32(rdkit_RDProps *cthis, const rdkit_string *key, int32_t val)
{
	auto this_ = c2cpp(cthis);
	this_->setProp(std::string(key->s, key->len), val);
}

void rdkit_rdprops_set_prop_f32(rdkit_RDProps *cthis, const rdkit_string *key, float val)
{
	auto this_ = c2cpp(cthis);
	this_->setProp(std::string(key->s, key->len), val);
}

void rdkit_rdprops_set_prop_f64(rdkit_RDProps *cthis, const rdkit_string *key, double val)
{
	auto this_ = c2cpp(cthis);
	this_->setProp(std::string(key->s, key->len), val);
}

bool rdkit_rdprops_get_prop_str(const rdkit_RDProps *cthis, const rdkit_string *key, rdkit_string_owned *val)
{
	auto this_ = c2cpp(cthis);
	try {
		rdkit_string_owned_ctor_move(val, this_->getProp<std::string>(std::string(key->s, key->len)));
	} catch(std::exception& e) {
		rdkit_string_owned_ctor(val);
		return false;
	}
	return true;
}

bool rdkit_rdprops_get_prop_u32(const rdkit_RDProps *cthis, const rdkit_string *key, uint32_t *val)
{
	auto this_ = c2cpp(cthis);
	try {
		this_->getProp(std::string(key->s, key->len), *val);
	} catch(std::exception& e) {
		*val = 0;
		return false;
	}
	return true;
}

bool rdkit_rdprops_get_prop_i32(const rdkit_RDProps *cthis, const rdkit_string *key, int32_t *val)
{
	auto this_ = c2cpp(cthis);
	try {
		this_->getProp(std::string(key->s, key->len), *val);
	} catch(std::exception& e) {
		*val = 0;
		return false;
	}
	return true;
}

bool rdkit_rdprops_get_prop_f32(const rdkit_RDProps *cthis, const rdkit_string *key, float *val)
{
	auto this_ = c2cpp(cthis);
	try {
		this_->getProp(std::string(key->s, key->len), *val);
	} catch(std::exception& e) {
		*val = 0;
		return false;
	}
	return true;
}

bool rdkit_rdprops_get_prop_f64(const rdkit_RDProps *cthis, const rdkit_string *key, double *val)
{
	auto this_ = c2cpp(cthis);
	try {
		this_->getProp(std::string(key->s, key->len), *val);
	} catch(std::exception& e) {
		*val = 0;
		return false;
	}
	return true;
}

bool rdkit_rdprops_has_prop(const rdkit_RDProps *cthis, const rdkit_string *key)
{
	auto this_ = c2cpp(cthis);
	return this_->hasProp(std::string(key->s, key->len));
}

void rdkit_rdprops_clear_prop(rdkit_RDProps *cthis, const rdkit_string *key)
{
	auto this_ = c2cpp(cthis);
	this_->clearProp(std::string(key->s, key->len));
}

void rdkit_rdprops_clear_computed_props(rdkit_RDProps *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->clearComputedProps();
}

void rdkit_rdprops_update_props(rdkit_RDProps *cthis, const rdkit_RDProps *csource)
{
	rdkit_rdprops_update_props_ex(cthis, csource, RDKIT_DEFAULT_TRIBOOL);
}

void rdkit_rdprops_update_props_ex(rdkit_RDProps *cthis, const rdkit_RDProps *csource, rdkit_tribool preserve_existing)
{
	auto this_ = c2cpp(cthis);
	auto source = c2cpp(csource);

	if (preserve_existing == RDKIT_DEFAULT_TRIBOOL)
		preserve_existing = RDKIT_FALSE;

	this_->updateProps(*source, preserve_existing);
}
