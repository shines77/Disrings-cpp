
#ifndef _DISRING_STDBOOL_H_
#define _DISRING_STDBOOL_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(_MSC_VER) && (_MSC_VER < 1700)
#include "disring/msvc/stdbool.h"
#else
#include <stdbool.h>
#endif  /* _MSC_VER */

#endif  /* _DISRING_STDBOOL_H_ */