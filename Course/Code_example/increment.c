#include<stdio.h>
#include<stdlib.h>

int main(){
    /*++i means “increment i immediately,” 
    while i++ means “use the old value of i for now, 
    but increment i later.”*/
    int i=1;
    printf("i is %d\n",++i);
    printf("i is %d\n",i);

    int j=1;
    printf("j is %d\n",j++);
    printf("j is %d\n",j);
    return 0;
}
