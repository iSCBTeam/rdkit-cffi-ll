#ifndef RDKIT_CFFI__GEOMETRY__POINT_H
#define RDKIT_CFFI__GEOMETRY__POINT_H 1

#include "rdkit-cffi/decls.h"
#include "rdkit-cffi/types.h"
#include "rdkit-cffi/visibility.h"

#ifdef __cplusplus
extern "C" {
#endif

struct rdkit_geom_Point
{
	alignas(RDKIT_ALIGNOF_GEOM_POINT) char opaque[RDKIT_SIZEOF_GEOM_POINT];
};

struct rdkit_geom_Point3D
{
	alignas(RDKIT_ALIGNOF_GEOM_POINT3D) char opaque[RDKIT_SIZEOF_GEOM_POINT3D];
};

RDKIT_CFFI_API rdkit_geom_Point *rdkit_geom_point3d_to_point(rdkit_geom_Point3D *cthis);
RDKIT_CFFI_API rdkit_geom_Point3D *rdkit_geom_point3d_from_point(rdkit_geom_Point *cthis);

RDKIT_CFFI_API rdkit_geom_Point3D *rdkit_geom_point3d_new(void);
RDKIT_CFFI_API void rdkit_geom_point3d_del(rdkit_geom_Point3D *cthis);
RDKIT_CFFI_API void rdkit_geom_point3d_ctor(rdkit_geom_Point3D *cthis);
RDKIT_CFFI_API void rdkit_geom_point3d_ctor_clone(rdkit_geom_Point3D *cthis, const rdkit_geom_Point3D *cother);
RDKIT_CFFI_API void rdkit_geom_point3d_dtor(rdkit_geom_Point3D *cthis);
RDKIT_CFFI_API void rdkit_geom_point3d_get_coords(const rdkit_geom_Point3D *cthis, double *x, double *y, double *z);

#ifdef __cplusplus
}
#endif

#endif /* RDKIT_CFFI__GEOMETRY__POINT_H */
