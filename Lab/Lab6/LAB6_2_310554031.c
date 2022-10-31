#include <stdio.h>

int gcd(int m, int n);
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
  int n_testcase,num, denom, r_num, r_denom;

  // TODO
  scanf("%d",&n_testcase);

  while (n_testcase>0)
  {
    char gar;
    printf("Enter a fraction: ");
    scanf("%d%c%d", &num, &gar, &denom);
    if(denom==0){
      printf("Error!");
      break;
    }
    reduce(num, denom, &r_num, &r_denom);
    printf("Irreducible fraction: %d/%d\n",r_num,r_denom);
  }
  
  n_testcase--;
  return 0;
}

int gcd(int m, int n)
{
    while(m % n != 0){
        int temp = n;
        n=m%n;
        m=temp;
    }
    return n;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int gcdd = gcd(numerator,denominator);
    // printf("%d ||| %d \n",numerator/gcdd,denominator/gcdd);
    *reduced_numerator=numerator/gcdd;
    *reduced_denominator=denominator/gcdd;
}