#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int *i, int *j){
    int temp = *i;
    *i=*j;
    *j=temp;
}


int main(){
    int a, b;
    printf("input: a= b= \n");
    scanf("%d %d", &a, &b);

    swap(&a,&b);
    printf("%d %d", a, b);
}