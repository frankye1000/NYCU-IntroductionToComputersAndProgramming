#include<stdio.h>
#include<stdlib.h>

int* Largest(int *arr, int size);
void Swap(int *a, int *b);
void Sort(int *arr, int size);

int main(){

    int testcase;
    scanf("%d",&testcase);
    while(testcase-- > 0){
        int temp,size=0;
        int A[10]={0};
        while(scanf("%d",&temp) && temp!=0){
            A[size]=temp;
            size++;
        }
        // printf("size = %d | ",size);
        // for(int i=0;i<size;i++){
        //     printf("%d | ",A[i]);
        // }
        int *LP;
        // LP = Largest(A,size);
        // printf("%d", *LP);
        Sort(A,size);



    }


    return 0;
}


int* Largest(int *arr, int size){
    int *p;
    int max=arr[0];
    int *rep=&arr[0];
    
    for(p=arr; p<arr+size; p++){
        if(*p > max){
            max = *p;
            rep = p;
        }
    }
    return rep;
}

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(int *arr, int size){
    
    int *p;
    int *LP;
    int SS = size;
    for(p=arr; p<arr+size; p++){
        LP = Largest(p, SS);
        Swap(LP,p);
        SS--;
    }

    for(int i=0;i<size;i++){
        printf("[%d] ",arr[i]);
    }



}