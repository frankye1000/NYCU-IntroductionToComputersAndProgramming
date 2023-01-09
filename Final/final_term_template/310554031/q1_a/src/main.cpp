#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 10000

// read string function
void read_input(char *arr)
{
    int ch,i=0;
    while((ch = getchar())!=EOF)
    {
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
}


int main(int argc, char *argv[])
{
    int word_nums = 0, alpha_num=0; 
    
    char arr1[MAX_LEN] = {'\0'};
    read_input(arr1);
    
    // calculate alphabet characters
    for(int i=0;i<MAX_LEN;i++)
    {
        int ah=arr1[i];      //alphabet to ASCII code 
	    if(ah>=65 && ah<=90) //A~Z ASCII code
        {   
		    alpha_num++;
	    }
        else if(ah>=97&&ah<=122) //a~z ASCII code
        {
		    alpha_num++;
        }
    }
    
    // use blank(" ") to splite string
    const char s[3] = " \n";
    // calculate number of words  
    char *token;
    token = strtok(arr1, s);
    while(token!=NULL)
    {
        //printf("t=%s wm=%d\n",token,word_nums);
        word_nums+=1;
        token = strtok(NULL, s);
    }

    
    printf("%d %d\n",alpha_num,word_nums);
    return 0;
}