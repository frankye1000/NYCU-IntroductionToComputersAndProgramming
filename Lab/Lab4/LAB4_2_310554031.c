# include <stdio.h>

int gcd_recursive(int m, int n){
    if(n==0){
        return m; 
    }
    return gcd_recursive(n, m%n);
}

int gcd_iterative(int m, int n) {
    while(m%n != 0){
        int temp = n;
        n=m%n;
        m=temp;
        //printf("m= %d ,n=%d",m,n);
    }
    return n;
}

int main(){
    // scanf 2 random integers
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
 
    int g1 = gcd_recursive(a,b);
    printf("Recursive:\nThe GCD is %d\n",g1);
    int g2 = gcd_iterative(a,b);
    printf("Iterative:\nThe GCD is %d",g2);
    return 0;
}