#include <stdio.h>
#include "stack.h"

char st[STACK_SIZE];

// initialize top index of stack 
int topIdx = 0; 

bool empty()
{
    if(topIdx==0) return true;
    else return false;
}

bool full()
{
    if(topIdx==STACK_SIZE) return true;
    else return false;
}

void push(char item)
{
    if(full()) printf("The stack is full, can not push item anymore.\n");
    else st[topIdx++]=item;
}

void pop()
{
    if(empty()) printf("The stack is empty\n");
    else st[topIdx--];
}

char top()
{
    if(empty()) return '-';
    else return st[topIdx-1];
}

void clear()
{
    while(!empty())
    {
        printf("%c",top());
        pop();
    }
    printf("\n");
}