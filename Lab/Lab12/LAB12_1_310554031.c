#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100000

void read_input(char *arr)
{
    int ch,i=0;
    while((ch = getchar())!='\n')
    {
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
}

int ascendingCompareFunction (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int descendingCompareFunction (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}


int main(){
    char arr1[MAX_LEN] = {'\0'};
    read_input(arr1);   // read string

    int arr[MAX_LEN];
    const char s[2] = " ";
    char *token;
    int N=0;

    /* 獲取第一個字字符串 */
    token = strtok(arr1, s);
    /* 繼續獲取其他的字字符串 */
    while( token != NULL ) 
    {
        arr[N]=atoi(token);
        N++;
        token = strtok(NULL, s);
    }



    qsort(arr, N, sizeof(int), ascendingCompareFunction);
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    qsort(arr, N, sizeof(int), descendingCompareFunction);
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}