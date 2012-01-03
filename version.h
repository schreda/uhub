#if !defined(_MSC_VER)
#include "revision.h"
#endif

#ifndef PRODUCT
#define PRODUCT "uhub"
#endif

#ifndef VERSION
#define VERSION "0.4.0"
#endif

#ifndef GIT_REVISION
#define REVISION ""
#define PRODUCT_STRING PRODUCT "/" VERSION
#else
#define REVISION "git-" GIT_REVISION
#define PRODUCT_STRING PRODUCT "/" VERSION "-" REVISION
#endif

#ifndef COPYRIGHT
#define COPYRIGHT "Copyright (c) 2007-2012, Jan Vidar Krey <janvidar@extatic.org>"
#endif
