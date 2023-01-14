#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100000

/*計算星期幾 基姆拉爾森計算公式 https://www.itsfun.com.tw/%E5%9F%BA%E5%A7%86%E6%8B%89%E7%88%BE%E6%A3%AE%E8%A8%88%E7%AE%97%E5%85%AC%E5%BC%8F/wiki-5628372 */
int week(int year, int month, int day){
    int y,y0,m,m0,d,d0,z,x;
    y = year;
    m = month;
    d = day;

    z=(14-m)/12;
    y0=y-z;
    x=y0+y0/4-y0/100+y0/400;
    m0=m+12*z-2;
    d0=(d+x+31*m0/12)%7;
    return d0;
}

/*print星期幾*/
void weekintTostring(int w){
    switch (w)
    {
    case 1:
        printf("(Monday)\n");
        break;
    case 2:
        printf("(Tuesday)\n");
        break;
    case 3:
        printf("(Wednesday)\n");
        break;
    case 4:
        printf("(Thursday)\n");
        break;
    case 5:
        printf("(Friday)\n");
        break;
    case 6:
        printf("(Saturday)\n");
        break;
    case 0:
        printf("(Sunday)\n");
        break;
    default:
        break;
    }
}

/*print月份 int to string*/
void monthintTostring(int month){
    switch (month){
        case 1:
            printf("January ");
            break;
        case 2:
            printf("February ");
            break;
        case 3:
            printf("March ");
            break;
        case 4:
            printf("April ");
            break;
        case 5:
            printf("May ");
            break;
        case 6:
            printf("June ");
            break;
        case 7:
            printf("July ");
            break;
        case 8:
            printf("Auguest ");
            break;
        case 9:
            printf("September ");
            break;
        case 10:
            printf("October ");
            break;
        case 11:
            printf("November ");
            break;
        case 12:
            printf("December ");
            break;
        default:
            break;
    }
}

/*處理一般 case*/
void normal_token(char* commend){
    int month = 0;
    int year  = 0;
    int day   = 0;

    const char s2[2] = "/";
    char *token;
    /* 獲取第一個字字符串 */
    token = strtok(commend, s2);
    /* 繼續獲取其他的字字符串 */
    int N=0;
    while( token != NULL ){
        if(N==0) year = atoi(token); 
        else if(N==1) month = atoi(token);
        else day = atoi(token);
        N++;
        token = strtok(NULL, s2);
    }

    monthintTostring(month);
    printf("%d, ", day);
    printf("%d ", year);
    int w = week(year, month, day);
    weekintTostring(w);
}

/*處理ROC case*/
void ROC_token(char* commend){
    char* temp;
    int month = 0;
    int year  = 0;
    int day   = 0;

    const char s[3] = " /";
    char *token;

    /* 獲取第一個字字符串 */
    token = strtok(commend, s);
    /* 繼續獲取其他的字字符串 */
    int N=0;
    while( token != NULL ){
        //printf("token = %s\n",token);
        if(N==0) temp=token;  // ROC 
        else if(N==1) year = atoi(token)+1911; 
        else if(N==2) month = atoi(token);
        else day = atoi(token);
        N++;
        token = strtok(NULL, s);
    }

    monthintTostring(month);
    printf("%d, ", day);
    printf("%d ", year);
    int w = week(year, month, day);
    weekintTostring(w);
}



int read_input(char *commend){
    int ch,i=0;
    while((ch = getchar())!='\n'){
        if(ch==EOF) return 0;
        *(commend+i) = ch;
        // printf("%c",ch);
        i++;
    }
    *(commend+i)='\0';
    return 1;
}




int main(){
    char arr_char[MAX_LEN] = {'\0'};

    while(read_input(arr_char)){
        if(arr_char[0]=='R'){
            ROC_token(arr_char);
        }
        else{
            normal_token(arr_char);
        }
    }
    
    return 0;
}