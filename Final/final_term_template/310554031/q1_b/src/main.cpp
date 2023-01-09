#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 10000

// read string function
void read_input(char *arr)
{
    int ch,i=0;
    while((ch = getchar())!=EOF) //file EOF!!!!
    {
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
}

// 大->小寫轉換
char bigTosmall(char c){
    if (c >= 'A' && c <= 'Z')
    { 
        c = c + 32;
    }
    return c;
}

// 小->大寫轉換
char smallTobig(char c){
    if (c >= 'a' && c <= 'z')
    { 
        c = c - 32;
    }
    return c;
}



int main(int argc, char *argv[])
{
    int word_nums = 0, alpha_num=0; 
    
    char arr1[MAX_LEN] = {'\0'};
    read_input(arr1);
    //printf("%s\n",arr1);

    for(int i=0;i<MAX_LEN;i++)
    {
        // 1. 全部轉小寫
        arr1[i] = bigTosmall(arr1[i]);
    }

    for(int i=0;i<MAX_LEN;i++){
        // 2. 開頭要大寫
        if(i==0){
            arr1[i] = smallTobig(arr1[i]);
        }
        // 3.其他空白後面要大寫
        else if(arr1[i]==' '){
            arr1[i+1] = smallTobig(arr1[i+1]);
        }
        // 4.換行後面要大寫
        else if(arr1[i]=='\n'){
            arr1[i+1] = smallTobig(arr1[i+1]);
        }
    }
    printf("%s\n",arr1);
    return 0;
}