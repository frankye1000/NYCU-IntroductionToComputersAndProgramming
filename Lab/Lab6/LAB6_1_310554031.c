#include <stdio.h>

#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
  int my_arr[N], largest, second_largest, n_testcase;

  scanf("%d",&n_testcase);

  while (n_testcase>0)
  {
    printf("Enter %d numbers: ", N);

    // TODO
    int temp;
    for(int i=0;i<N;i++){
      scanf("%d",&temp);
      my_arr[i]=temp;
    }

    find_two_largest(my_arr, N, &largest, &second_largest);

    printf("Largest: %d\n", largest);
    printf("second_largest: %d\n", second_largest);

    n_testcase--;

  }


  return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    // TODO

    int max,sec;
    if(a[0]>a[1]){
      max=a[0];
      sec=a[1];
    }else{
      max=a[1];
      sec=a[0];
    }

    for(int i=2;i<n;i++){
      if(a[i]>sec){
        if(a[i]>max){
          sec=max; 
          max=a[i];          
        }else{
          sec=a[i];
        }
      }
    }
    
    // printf("%d || %d",max,sec);
    *largest = max;
    *second_largest = sec;
}