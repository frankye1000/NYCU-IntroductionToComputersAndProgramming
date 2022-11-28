#include <stdio.h>
#include <stdbool.h>

#include "stack.h"
#include "debug.h"
#define MAX_LEN 21

#define MIN(X,Y) (X<Y)?X:Y

void read_str(char*, char);
long long int str2int(char*);

int main()
{
    int numTestcase;
    char str1[MAX_LEN] = {'\0'};
    char str2[MAX_LEN] = {'\0'};

    scanf("%d\n", &numTestcase);
    while(numTestcase--)
    {
        long long int num1, num2;
        read_str(str1, ' ');
        read_str(str2, '\n');
        num1 = str2int(str1);
        num2 = str2int(str2);
        printf("%lld\n", MIN(num1,num2));
    }
    return 0;
}

void read_str(char * str, char sep)
{
    int ch;
    int sz = 0;
    while((ch = getchar()) != sep && ch != EOF)
    {
        assert(sz<21);
        str[sz++] = ch;
    }
    str[sz] = '\0';
}

long long int str2int(char *str)
{
    long long int ret = 0;
    long long int base = 1;
    bool negative = false;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == '-')
        {
            negative = true;
        }
        else
        {
            push(str[i]);
        }           
    }
    
    while(!empty())
    {
        ret += ((top()-'0') * base); 
        pop();
        base *= 10;
    }

    if(negative)
        ret *= -1;

    return ret;
}