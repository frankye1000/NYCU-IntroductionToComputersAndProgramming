#ifndef _DEBUG_H_
#define _DEBUG_H_

#define assert(EX) \
( (EX)?( (void)0) :myassert( # EX, __FILE__, __LINE__) )

void myassert(const char*, char*, int);

#endif