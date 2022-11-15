#include <stdio.h>
#include <string.h>

#define MSG_LEN 50   /* maximum length of message */

void convert(char *message);
void reverse(char *message);
void read_line(char *str, int n);

int main(void)
{
  int n_testcase;
  char msg[MSG_LEN+1];

  // TODO
  scanf("%d\n", &n_testcase);
  
  while (n_testcase > 0)
  {
    read_line(msg, MSG_LEN);
    convert(msg);
    printf("%s\n", msg);

    reverse(msg);
    printf("%s\n", msg);

    n_testcase--;
  }
  return 0;
}

void convert(char *message)
{
    for(; *message!='\0';message++){
        if(*message>='A' && *message<='Z') *message+=32;
        else if(*message>='a' && *message<='z') *message-=32;
    }
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

void read_line(char *str, int n)
{
    int ch, i=0;

    while((ch = getchar())!='\n'){
        if(i<n){
            *(str+i) = ch;
            i++;
        }
    }
    *(str+i)='\0';
}