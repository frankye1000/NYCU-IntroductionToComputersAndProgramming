#include <stdio.h>

int *gcd_iterative(int *m, int *n, int *ans)
{
    while(*m % *n != 0){
        int temp = *n;
        *n = *m % *n;
        *m = temp;
    }
    *ans=*n;
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