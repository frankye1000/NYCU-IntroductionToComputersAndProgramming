 #define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
 #include<stdlib.h>

 int main(){
    /************ Q1:Factorial ***********/
    printf("Input a number : ");
    int x;
    scanf("%d", &x);

    long long total=1;
    for(int i=1;i<x;i++){
        printf("%d * ",i);
        total*=i;
    }

    total*=x;
    printf("%d = %lld\n",x,total);

    /************ Q2:Floyd’s Triangle ***********/
    printf("Enter the number of rows : ");
    int rows;
    scanf("%d", &rows);
    int c = 1;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%3d ", c);
            c++;
        }
        printf("\n");
    }
    /************ Q3:Calculator ***********/
    printf("Long int calculator\n");
    
    long long t;
    char defg;
    int o;
    while(printf("Expression:") && scanf("%lld %c %d",&t, &defg, &o)){
        if(defg=='+'){
            printf("%lld\n", t+o);
        }else if(defg=='-'){
            printf("%lld\n", t-o);
        }else{
            break;
        }
    }

    printf("Unsigned int calculator\n");
    
    unsigned int tt;
    char defgt;
    int ot;
    while(printf("Expression:") && scanf("%u %c %d",&tt, &defgt, &ot)){
        if(defgt=='+'){
            printf("%u\n", tt+ot);
        }else if(defgt=='-'){
            printf("%u\n", tt-ot);
        }else{
            break;
        }
    }

    /************ Bonus : Pyramid ***********/

    printf("Input pyramid's row : ");
    int rs;
    scanf("%d", &rs);
    for(int i=0;i<rs;i++){
        //space
        for(int j=rs-i;j>0;j--){
            printf(" ");
        }
        // star
        for(int j=1;j<=2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
 }