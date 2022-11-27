#include <stdio.h>
#include <string.h>

#include "stack.h"
#include "debug.h"

#define MAX_LEN 30

void reverse_str(char*);
void read_str(char*);
int main()
{
    int numTestcase;
    

    scanf("%d\n", &numTestcase);

    while(numTestcase--)
    {
        char str[MAX_LEN] = {'\0'};
        read_str(str);
        reverse_str(str);
        //printf("%s\n", str);
    }

    return 0;
}
void read_str(char * str){
    int ch,i=0;
    while((ch = getchar())!='\n'){
        *(str+i) = ch;
        i++;
    }
}

void reverse_str(char * str)
{
    int i=0;
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
    //printf("str= [%s]\n", str);
    clear();
    assert(i<MAX_LEN);

}