#ifndef FS_DEFINITIONS_H_877452FEC245450C9F96B8FD268D8963
#define FS_DEFINITIONS_H_877452FEC245450C9F96B8FD268D8963

#define STATUS_SERVER_NAME "TFS"
#define STATUS_SERVER_VERSION "[Absolute]"
#define STATUS_SERVER_DEVELOPERS "Andrei Ortolan"

#define CLIENT_VERSION_MIN 1036
#define CLIENT_VERSION_MAX 1041
#define CLIENT_VERSION_STR "10.41"

#ifndef __FUNCTION__
#define __FUNCTION__ __func__
#endif

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif

#define WIN32_LEAN_AND_MEAN

#ifdef _MSC_VER
#ifdef NDEBUG
#define _SECURE_SCL 0
#define HAS_ITERATOR_DEBUGGING 0
#endif

#pragma warning(disable:4127) // conditional expression is constant
#pragma warning(disable:4244) // 'argument' : conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable:4250) // 'class1' : inherits 'class2::member' via dominance
#pragma warning(disable:4267) // 'var' : conversion from 'size_t' to 'type', possible loss of data
#pragma warning(disable:4351) // new behavior: elements of array will be default initialized
#endif

#define strcasecmp _stricmp
#define strncasecmp _strnicmp

//Windows 2000	0x0500
//Windows XP	0x0501
//Windows 2003	0x0502
//Windows Vista	0x0600
#ifdef _WIN32_WINNT
#undef _WIN32_WINNT
#endif
#define _WIN32_WINNT 0x0501
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#endif
