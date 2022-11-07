#include<stdio.h>

#define N 10

int main(){

    int A[N]={1,2,3,4,5,6,7,8,9,10};
    int sum=0, *p;
    
    /* ver 1 */ 
    // for(p=&A[0];p<&A[10];p++){  
    //     sum += *p;
    // }

    /* ver 2 */
    p = &A[0];
    for(int i=0; i<N; i++){   //perfect use int i to control for loop
        sum += *p++;
    }

    printf("sum= %d",sum);
}