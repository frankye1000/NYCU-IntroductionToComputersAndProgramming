#include <stdio.h>

void pay_amount(int dollars, int *thousand, int *five_hundred, int *one_hundred, int *tens, int *fives, int *ones)
{
    // int t=*thousand, f=*five_hundred, o=*one_hundred, ts=*tens, fi=*fives, on=*ones;
    *thousand     = dollars/1000;
    dollars      %= 1000;
    *five_hundred = dollars/500;
    dollars       %= 500;
    *one_hundred  = dollars/100;
    dollars       %= 100;
    *tens         = dollars/10;
    dollars       %= 10;
    *fives        = dollars/5;
    dollars       %= 5;
    *ones         = dollars/1;
}

int main(void)
{
    int amount, thousand, five_hundred, one_hundred, tens, fives, ones = 0;
    int testcase;
    scanf("%d", &testcase);
    while (testcase>0)
    {
        printf("Enter a dollar amount: ");
        scanf("%d",&amount);
        pay_amount(amount, &thousand, &five_hundred, &one_hundred, &tens, &fives, &ones);
        // print result
        printf("|%5d|%5d|%5d|%5d|%5d|%5d|\n",1000,500,100,10,5,1);
        printf("|%5d|%5d|%5d|%5d|%5d|%5d|\n",thousand,five_hundred,one_hundred,tens,fives,ones);
        testcase--;
    }

    return 0;
}
