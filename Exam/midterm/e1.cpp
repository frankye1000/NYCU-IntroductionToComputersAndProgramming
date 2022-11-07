#include <stdio.h>

void dec_to_oct(int);

int main()
{
    int n_testcase;
    int num;

    scanf("%d", &n_testcase);

    while(n_testcase > 0){
        printf("Enter an integer: ");
        scanf("%d", &num);
        printf("In Octal, your number is: ");
        dec_to_oct(num);
        n_testcase--;        
    }

    return 0;
}

void dec_to_oct(int num)
{   
    printf("0%o\n",num);
}