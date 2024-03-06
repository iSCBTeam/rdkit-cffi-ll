#include "rdkit-cffi/Geometry/Point.h"
#include "rdkit/Geometry/point.h"

#include "Point.hpp"

using namespace RDKit;
using namespace RDGeom;

static_assert(alignof(Point) == alignof(rdkit_geom_Point));
static_assert(sizeof(Point) == sizeof(rdkit_geom_Point));
static_assert(alignof(Point3D) == alignof(rdkit_geom_Point3D));
static_assert(sizeof(Point3D) == sizeof(rdkit_geom_Point3D));


rdkit_geom_Point *rdkit_geom_point3d_to_point(rdkit_geom_Point3D *cthis)
{
	Point *this_ = c2cpp(cthis);
	return cpp2c(this_);
}

rdkit_geom_Point3D *rdkit_geom_point3d_from_point(rdkit_geom_Point *cthis)
{
	auto this_ = c2cpp(cthis);
	auto obj = static_cast<Point3D *>(this_);
	return cpp2c(obj);
}

rdkit_geom_Point3D *rdkit_geom_point3d_new(void)
{
	auto this_ = static_cast<Point3D *>(::operator new(sizeof(Point3D), std::align_val_t(alignof(Point3D))));
	return cpp2c(this_);
}

void rdkit_geom_point3d_del(rdkit_geom_Point3D *cthis)
{
	auto this_ = c2cpp(cthis);
	::operator delete(this_);
}

void rdkit_geom_point3d_ctor(rdkit_geom_Point3D *cthis)
{
	new (cthis) Point3D();
}

void rdkit_geom_point3d_ctor_clone(rdkit_geom_Point3D *cthis, const rdkit_geom_Point3D *cother)
{
	auto other = c2cpp(cother);
	new (cthis) Point3D(*other);
}

void rdkit_geom_point3d_dtor(rdkit_geom_Point3D *cthis)
{
	auto this_ = c2cpp(cthis);
	this_->~Point3D();
}

void rdkit_geom_point3d_get_coords(const rdkit_geom_Point3D *cthis, double *x, double *y, double *z)
{
	auto this_ = c2cpp(cthis);

	if (x)
		*x = this_->x;

	if (y)
		*y = this_->y;

	if (z)
		*z = this_->z;
}
