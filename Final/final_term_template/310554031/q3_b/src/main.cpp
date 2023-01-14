#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 10000

bool a(char* password){
    bool pass_a=false;
    long long int N = strlen(password);
    for(int i=0;i<N;i++)
    {
        int t = password[i];         
        if(t>=65 && t<=90)
        {
            pass_a=true;     // upper case;
            break;
        }
    }
    return pass_a;
}

bool b(char * password){
    bool pass_b_1=false;
    bool pass_b_2=false;
    long long int N = strlen(password);
    
    // 小寫數要多於兩個
    int lowercase_num=0;
    for(int i=1;i<N-1;i++){
        int t = password[i];
        if(t>=97 && t<=122){  // lower case
            lowercase_num++;
        }
        if(lowercase_num>=2){ // 如果有兩個小寫英文字就停下
            pass_b_1=true;
            break;
        }    
    }

    // 頭尾字不能是小寫
    int sw = password[0];
    if(sw<97 && sw>122) pass_b_2=true;
    int ew = password[N-1];
    if(ew<97 && ew>122) pass_b_2=true;

    if(pass_b_1 && pass_b_2) return true;
    else return false;
}

bool c(char * password){
    bool pass_c_1=false;
    bool pass_c_2=true;
    int N = strlen(password);
    //printf("N=%d\n",N);
    // 至少一個0-9
    for(int i=1;i<N-1;i++){
        int t = password[i];
        // printf("!!!!!!!!!!!%c = %d\n",password[i],t);
        if(t>=48 && t<=57){  // [0-9]
            pass_c_1=true;
            // break;
        }    
    }
    // 頭尾不能有0-9
    int sw = password[0];
    //printf("sw= %c\n",sw);
    if((sw>=48 && sw<=57)) pass_c_2=false;
    int ew = password[N-1];
    //printf("ew= %c\n",ew);
    if((ew>=48 && ew<=57)) pass_c_2=false;
    
    //printf("pc1=%d pc2%d", pass_c_1,pass_c_2);
    if( pass_c_1 && pass_c_2 ) return true;
    else return false;
}

bool d(char * password){
    bool pass_d=false;
    long long int N = strlen(password);

    for(int i=1;i<N;i++){
        int t = password[i];
        // printf("password[i] =%c  int=%d \n",password[i],t);
        if(t==64 || t==33 || t==37 || t==38 || t==42){  // '@'=64, '!'=33, '%'=37, '&'=38, '*'=42
            pass_d=true;
        }    
    }
    // printf("pass_d = %d\n",pass_d);
    return pass_d;
}

bool e(char * password){
    bool pass_d=false;
    long long int N = strlen(password);
    if (N>=8){
        pass_d=true;
    }
    return pass_d;
}

int main(int argc, char *argv[])
{
    char input[MAX_LEN] = {'\0'};
    scanf("%[^\%$]", input);
    // printf("%s", input);
    // use "\n" to splite string
    const char s[3] = "\n";
    char *token;
    token = strtok(input, s);
    while(token!=NULL)
    {
        // printf("t=%s\n",token);
        char *password = token;
        if(a(password) && (password) && c(password) && d(password) && e(password)) printf("yes\n");
        else printf("no\n");
        token = strtok(NULL, s);
    }


    return 0;
}