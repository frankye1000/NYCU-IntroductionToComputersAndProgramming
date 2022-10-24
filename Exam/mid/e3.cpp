#include <stdio.h>

void occurrence_number(long long int);

int main()
{
    int n_testcases;
    long long int num;
    

    scanf("%d", &n_testcases);

    while(n_testcases > 0){
        scanf("%lld", &num);
        printf("Digit:        ");
        for(int i=0; i<10; i++) printf("%3d", i);
        printf("\n");
        printf("occurrences:  ");
        occurrence_number(num);
        n_testcases--;
    }

    return 0;
}

void occurrence_number(long long int num)
{
    int A[10]={0};
    while(num/10!=0){
        int temp = num%10;
        A[temp]++;
        num = num/10;
    }
    int t=num%10;
    A[t]++;
    for(int i=0; i<10; i++) printf("%3d", A[i]);
    printf("\n");
}