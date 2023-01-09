#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main()
{
    long i = 10000000L;
    double start, end;

    start = clock();
    while(i--);
    end = clock();


    printf("Execution time: %lf sec\n",  (end - start) / CLOCKS_PER_SEC);

    return 0;
}