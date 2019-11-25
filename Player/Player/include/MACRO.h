#include <iostream>
#include <stdlib.h>     /* srand, rand */

#ifndef _MACRO_H
#define _MACRO_H

#define RNG(min, max) ((rand() % (int)(((max) + 1) - (min))) + (min))

#endif // !_MACRO_H