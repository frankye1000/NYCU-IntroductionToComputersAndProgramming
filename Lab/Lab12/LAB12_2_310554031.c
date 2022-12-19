#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100000
void read_input(char *arr)
{
    int ch,i=0;
    while((ch = getchar())!='\n')
    {
        *(arr+i) = ch;
        i++;
    }
    *(arr+i)='\0';
}


int main () {
        int N; 
        scanf("%d", &N);
        while (N--) {
                int n, k, a, b;
                scanf("%d %d %d %d", &n, &k, &a, &b);
                printf("%d\n%d\n%d\n%s\n",n<<k,n>>k, n&(~( 0xffffffff << k)) , (a^b)?"No":"Yes");
        }
}
