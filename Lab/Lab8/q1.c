#include <stdio.h>
#include <string.h>
#include "stack.h"
#define MAX_LEN 10

void read_input(char*);
void test_stack(char*, bool*);
int count = 0;
int main()
{
    int numTestcase;
    bool endFlag = false;
    

    scanf("%d\n", &numTestcase);
    
    while(numTestcase--)
    {
        endFlag = false;
        do{
            char arr1[MAX_LEN] = {'\0'}; // '\0' is null character
            read_input(arr1);
            test_stack(arr1, &endFlag);
        }while(!endFlag);
    }
    return 0;
}


void read_input(char *arr1)
{
    int ch,i=0,j=0;
    count = 0;
    while((ch = getchar())!='\n' && ch!=' '){
        *(arr1+i) = ch;
        i++;
        count++;
    }
    *(arr1+i)='\0';
    
}

void test_stack(char* arr1, bool* endFlag)
{
    char ch;
    char item;
    bool is_push = false;
    //printf("sizeof(arr1)=%d\n",sizeof(arr1));
    if (count==0){
        
    }
    else if(strcmp(arr1, "empty")==0) // got "empty" command
    {
        if(empty()) 
            printf("The stack is empty.\n"); 
        else
            printf("The stack is not empty.\n");
    }
    else if(strcmp(arr1, "full")==0) // got "full" command
    {
        if(full())
            printf("The stack is full.\n");
        else
            printf("The stack is not full\n");
    }
    else if(strcmp(arr1, "top")==0) // got "top" command
    {
        if(top()=='-') 
            printf("The stack is empty\n");
        else 
            printf("%c", top());   
    }
    else if(strcmp(arr1, "clear")==0) //got "clear" command
    {
        clear();
    }
    else if(strcmp(arr1, "end")==0) // got "end" command
    {
        printf("\n\n");
        (*endFlag) =  true;
    }

    else if(strcmp(arr1, "push")==0) // got push command
    {
        int j=0;
        char arr2[MAX_LEN] = {'\0'};
        while((ch = getchar())!='\n'){
            *(arr2+j)=ch;
            j++;
        }
        *(arr2+j)='\0';
        push(*arr2);
    }
    else if(strcmp(arr1, "pop")==0) // got pop command
    {
        pop();
    }
    else printf("command: [%s] is not implemented.\n", arr1);
}
