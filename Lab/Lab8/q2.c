#include <stdio.h>
#include <string.h>

#include "stack.h"
#include "debug.h"

#define MAX_LEN 30

void reverse_str(char*);

int main()
{
    int numTestcase;
    char str[MAX_LEN] = {'\0'};

    scanf("%d\n", &numTestcase);

    while(numTestcase--)
    {
        reverse_str(str);
        printf("%s\n", str);
    }

    return 0;
}

void reverse_str(char * str)
{
    // TODO
}