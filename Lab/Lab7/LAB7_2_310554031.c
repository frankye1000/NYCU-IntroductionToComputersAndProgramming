#include <stdio.h>
#include <stdbool.h>

void read_input(char*, char*);
bool are_anagrams(char*, char*);
void reverse(char *message);

int main()
{
    int numTestcase = 0;
    char arr1[11] = {'\0'}; // '\0' is null character
    char arr2[11] = {'\0'};

    scanf("%d\n", &numTestcase);

    while(numTestcase-- > 0){
        read_input(arr1, arr2);
        // printf("arr1=[%s]\n", arr1);
        // printf("arr2=[%s]\n", arr2);
        reverse(arr2);
        // printf("arr2=[%s]\n", arr2);
        if (are_anagrams(arr1, arr2))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

void read_input(char *arr1, char *arr2)
{
    int ch,i=0,j=0;
    while((ch = getchar())!=' '){
        *(arr1+i) = ch;
        i++;
    }
    *(arr1+i)='\0';
    while((ch = getchar())!='\n'){
        *(arr2+j) = ch;
        j++;
    }
    *(arr2+j)='\0';
}


void reverse(char *message)
{
    int length=0;

    for(int i=0;i<100;i++){
        if(*(message+i) =='\0'){
            break;
        }
        length++;
    }

    int i=0;
    int j=length-1;
    while(i<=j){
        char temp =message[i];
        message[i]=message[j];
        message[j]=temp;
        i++;
        j--;
    }
}


bool are_anagrams(char *arr1, char *arr2)
{
    int length1=0,length2=0;

    for(int i=0;i<100;i++){
        if(*(arr1+i) =='\0'){
            break;
        }
        length1++;
    }
    for(int i=0;i<100;i++){
        if(*(arr2+i) =='\0'){
            break;
        }
        length2++;
    }

    if(length1!=length2) return false; 

    for(arr1,arr2;*arr1!='\0',*arr2!='\0';arr1++,arr2++){
        if(*arr1!=*arr2) return false;
    }
    return true;
}

