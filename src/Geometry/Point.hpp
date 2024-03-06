#ifndef RDKIT_CFFI__GEOMETRY__POINT_HPP
#define RDKIT_CFFI__GEOMETRY__POINT_HPP 1

#include <bit>

#include "rdkit-cffi/Geometry/Point.h"
#include "rdkit/Geometry/point.h"

namespace RDGeom {

constexpr const Point *c2cpp(const rdkit_geom_Point *cthis)
{
	return std::bit_cast<const Point *>(cthis);
}

constexpr Point *c2cpp(rdkit_geom_Point *cthis)
{
	return std::bit_cast<Point *>(cthis);
}

constexpr const rdkit_geom_Point *cpp2c(const Point *this_)
{
	return std::bit_cast<const rdkit_geom_Point *>(this_);
}

constexpr rdkit_geom_Point *cpp2c(Point *this_)
{
	return std::bit_cast<rdkit_geom_Point *>(this_);
}

constexpr const Point3D *c2cpp(const rdkit_geom_Point3D *cthis)
{
	return std::bit_cast<const Point3D *>(cthis);
}

constexpr Point3D *c2cpp(rdkit_geom_Point3D *cthis)
{
	return std::bit_cast<Point3D *>(cthis);
}

constexpr const rdkit_geom_Point3D *cpp2c(const Point3D *this_)
{
	return std::bit_cast<const rdkit_geom_Point3D *>(this_);
}

constexpr rdkit_geom_Point3D *cpp2c(Point3D *this_)
{
	return std::bit_cast<rdkit_geom_Point3D *>(this_);
}

}

#endif /* RDKIT_CFFI__GEOMETRY__POINT_HPP */
