#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int *i, int *j){
    int temp = *i;
    *i=*j;
    *j=temp;
}


int main(){
    int small,big,*a,*b;
    printf("input=\n");
    scanf("%d %d", &small, &big);
    a=&small;
    b=&big;

    swap(a,b);
    printf("%d %d", small, big);



}