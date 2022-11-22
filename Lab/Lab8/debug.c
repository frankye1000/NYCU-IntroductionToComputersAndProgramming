#include <stdio.h>
#include "debug.h"

void myassert(const char *msg, char *file, int line)
{
    fprintf(stderr, "assertion failed: " "%s:%d: \"%s\"\n", file, line, msg);
}