#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void max(int *a, int *b, int *m){
    if(*a>*b) *m=*a;
    else *m=*b;
}


int main(){
    int a, b, c;
    printf("input=\n");
    scanf("%d %d", &a, &b);

    max(&a,&b,&c);
    printf("MAX= %d", c);
}