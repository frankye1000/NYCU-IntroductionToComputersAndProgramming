#include "q3_a.h"
#define MAX_LEN 100000

/*
計算星期幾 基姆拉爾森計算公式
*/
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

/*處理一般 case*/
void sample(char* commend){
    int month = 0;
    int year  = 0;
    int day   = 0;

    //char Week[20]={'\0'};
    const char s2[2] = "/";
    char *token;

    token = strtok(commend, s2);
    year  = atoi(token);
    
    token = strtok(NULL, s2);
    month = atoi(token);

    token = strtok(NULL, s2);
    day = atoi(token);

    print_month(month);
    printf("%d, ", day);
    printf("%d ", year);
    int w = week(year, month, day);
    print_week(w);
}

/*處理ROC case*/
void ROC_sample(char* commend){
    int month = 0;
    int year  = 0;
    int day   = 0;

    const char s1[2] = " ";
    const char s2[2] = "/";
    char *token;

    token = strtok(commend, s1);

    token = strtok(NULL, s2);
    year  = atoi(token)+1911;
    
    token = strtok(NULL, s2);
    month = atoi(token);

    token = strtok(NULL, s2);
    day = atoi(token);

    print_month(month);
    printf("%d, ", day);
    printf("%d ", year);
    int w = week(year, month, day);
    print_week(w);
}

/*讀檔*/
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

/*print月份*/
void print_month(int month){
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


/*print星期幾*/
void print_week(int w){
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


int main(){
    char arr_char[MAX_LEN] = {'\0'};

    while(read_input(arr_char)){
        if(arr_char[0]=='R'){
            ROC_sample(arr_char);
        }
        else{
            sample(arr_char);
        }
    }
    
    return 0;
}