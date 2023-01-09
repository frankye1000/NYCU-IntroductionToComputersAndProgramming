/*
目前兩個測資都有過

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define int_MAX_LEN 100000

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int* largest(int* arr, int N)
{
    int i;
    int *max;
    max = arr;
    for (i = 1; i < N; i++) {
        if (*max < *(arr + i)) {
            max = (arr + i);
        }
    }
    return max;
}


int main(int argc, char *argv[])
{

    int arr[int_MAX_LEN];
    int N = 0;
    int temp;
    while(scanf("%d",&temp) && temp!=0) arr[N++]=temp;
    
    // bubble sort
    for (int i=0; i<N; i++) { 
        int *L_P = largest(&(arr[i]), N-i);  // find largest number and swap
        swap(L_P, &arr[i]);
    } 
    
    for(int i=0;i<N;i++) printf("%d ",arr[i]);
    
    return 0;
}

