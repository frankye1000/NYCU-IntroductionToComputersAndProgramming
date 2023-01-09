/*
目前可以讀單行，但無法處理多行
例如:
correct ex 1:
2 14 5 90 2 40 0
add 86 50 1

correct ex 2:
2 14 5 90 2 40 0
del 2 5

wrong ex 3:
2 14 5 90 2 40 0
add 86 50 1
del 2 5

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define int_MAX_LEN 100000
#define char_MAX_LEN 100000

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

int* del_num(int* arr, int del_n, int N)
{
    /*
    arr   is array
    del_n is delete number
    N     is array size
    */
    int break_index=0;
    for (int i = 0; i < N; i++) 
    {
        if (arr[i]==del_n) 
        {
            break_index=i;
            break;
        }
    }

    // from break_index 開始把資料往前移
    for (int i = break_index; i < N; i++) 
    {
        arr[i]=arr[i+1];
    }

    return arr;
}


void read_input(char *arr)
{
    int ch,i=0;
    ch = getchar();
    while((ch = getchar())!='\n')
    {
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
}


void bubblesort(int n, int* ptr) 
{ 
    int i, j, t; 
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
}


int main(int argc, char *argv[])
{

    int arr[int_MAX_LEN];
    int N = 0;
    int temp;
    // 1. initial array
    while(scanf("%d", &temp) && temp!=0) arr[N++]=temp;

    
    // 2. function 
    char arr_char[char_MAX_LEN] = {'\0'};
    read_input(arr_char);   // read string
    printf("arr_char=%s\n",arr_char);

    const char s[2] = " ";
    char *token;
    
    /* 獲取第一個字字符串 */
    token = strtok(arr_char, s);
    /* 繼續獲取其他的字字符串 */
    
    if (strcmp(token, "add")==0){
        token = strtok(NULL, s);
        while( token != NULL ){
            arr[N]=atoi(token);    // 直接將字加進array
            N++;
            token = strtok(NULL, s);
        }
    }else if (strcmp(token, "del")==0){
        token = strtok(NULL, s);
        while( token != NULL ){

            int del_n = atoi(token); // 要刪除的數字
            del_num(arr, del_n, N); // 刪除數字的function
            N--;
            token = strtok(NULL, s);
        }
    }



    // bubble sort
    for (int i=0; i<N; i++) { 
        int *L_P = largest(&(arr[i]), N-i);
        swap(L_P, &arr[i]);
    } 
    
    for(int i=0;i<N;i++) printf("%d ",arr[i]);
    
    return 0;
}

