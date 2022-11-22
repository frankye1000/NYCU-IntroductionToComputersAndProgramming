#ifndef _STACK_H_
#define _STACK_H_

#include <stdbool.h>

#define STACK_SIZE 30

bool empty();
bool full();
void push(char);
void pop();
char top();
void clear();

#endif
