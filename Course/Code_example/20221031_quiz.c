#include<stdio.h>

int main(){

    int a[] = {5,15,34,54,14,2,52,72};
    int *p = &a[1], *q=&a[5];

    printf("*(p+3)=%d\n",*(p+3));
    printf("*(q-3)=%d\n",*(q-3));
    printf("q-p=%d\n",q-p);
    printf("p<q=",p<q);
    printf("\n");
    printf("*p<*q=",*p<*q);
    printf("\n");
    printf("%d %d %d",sizeof(p),sizeof(*p),sizeof(a));
    return 0;
}