#include <stdio.h>

int *gcd_iterative(int *m, int *n, int *ans)
{
    int t1=*m;
    int t2=*n;

    while(t1 % t2 != 0){
        int temp = t2;
        t2=t1%t2;
        t1=temp;
        //printf("m= %d ,n=%d",m,n);
    }
    *ans=t2;
    return ans;
}

int main()
{   
    
    int testcase;
    scanf("%d", &testcase);
    
    while (testcase>0)
    {   
        int m, n, an, *hhh;
        printf("a = ");
        scanf("%d", &m);
        printf("b = ");
        scanf("%d", &n);

        // c = &q;
        hhh = gcd_iterative(&m, &n, &an);
        
        printf("The GCD is %d\n", *hhh);
        testcase--;
    }

    return 0;
}