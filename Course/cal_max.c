#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void max(int *a, int *b, int *m){
    if(*a>*b){
        *m=*a;
    }else{
        *m=*b;
    }
}


int main(){
    int small,big,*a,*b, c;
    printf("input=\n");
    scanf("%d %d", &small, &big);
    a=&small;
    b=&big;

    max(a,b,&c);
    printf("MAX= %d", c);

}