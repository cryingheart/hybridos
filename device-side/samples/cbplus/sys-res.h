
#ifndef HFCL_SAMPLES_SYS_RES_H__
#define HFCL_SAMPLES_SYS_RES_H__

#define RESPKGID      RPKG_sys
#define RESID(name)   R_sys_##name

#include <hfcl/css/stylesheetdeclared.h>

#include <hfcl/resource/resdefines.head.h>
#include "sys-res.inc"
#include <hfcl/resource/resundefines.h>

#include <hfcl/resource/resdefines.name.h>
#include "sys-res.inc"
#include <hfcl/resource/resundefines.h>

#undef RESID
#undef RESPKGID

#endif  /* HFCL_SAMPLES_SYS_RES_H__ */

