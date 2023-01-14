#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100000

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


int main(int argc, char *argv[])
{
    char arr1[MAX_LEN] = {'\0'};
    read_input(arr1);
    
    char* main_string; 


    const char s[3] = "\n";
    char *token;
    /* 獲取第一個字字符串 */
    token = strtok(arr1, s);
    /* 繼續獲取其他的字字符串 */
    int N=0;
    while( token != NULL ){
        //printf("token = %s\n",token);
        if(N==0){
            main_string=token;  // 主要句子 
        }else{
            char *ret;
            ret = strstr(main_string,token);
            if(ret){
                int position = ret - main_string;
                printf("Yes %d\n",position);
            }else{
                printf("No x\n");
            }
            
        } 
        N++;
        token = strtok(NULL, s);
    }
    return 0;
}