#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int J_leap_year(int year)
{
    // leap year if perfectly divisible by 400
   if (year % 400 == 0) return 1;
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) return 0;
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) return 1;
   // all other years are not leap years
   else return 0;
}



int main(){
    int choice;
    while(printf("Enter the function you want(0: Terminate. 1: Interval of same month. 2: Interval of two near month. 3: Interval of same year.): ") && scanf("%d",&choice) != EOF){
        
        if(choice==0)
        {
            printf("Got function 0, exit\n");
            break;
        }
        else if(choice==1)
        {
            int y1,m1,d1,y2,m2,d2;
            printf("Enter first date(yyyy/mm/dd): ");
            scanf("%d/%d/%d",&y1,&m1,&d1);
            printf("Enter second date(yyyy/mm/dd): ");
            scanf("%d/%d/%d",&y2,&m2,&d2);
            
            if(d1>d2) printf("The interval between %d/%d/%d and %d/%d/%d is %d\n",y2,m2,d2,y1,m1,d1,d1-d2);
            else printf("The interval between %d/%d/%d and %d/%d/%d is %d\n",y1,m1,d1,y2,m2,d2,d2-d1);
            
        }
        else if(choice==2)
        {
            int y1,m1,d1,y2,m2,d2;
            printf("Enter first date(yyyy/mm/dd): ");
            scanf("%d/%d/%d",&y1,&m1,&d1);
            printf("Enter second date(yyyy/mm/dd): ");
            scanf("%d/%d/%d",&y2,&m2,&d2);

            if(J_leap_year(y1))
            {
                int diff=0;
                switch(m1)
                {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        diff+=(31-d1);
                        break;
                    case 2:
                        diff+=(29-d1);
                        break;
                    default:
                        diff+=(30-d1);
                        break;
                }
                printf("The interval between %d/%d/%d and %d/%d/%d is %d\n",y1,m1,d1,y2,m2,d2,diff+d2);
            }
            else
            {
                int diff=0;
                switch(m1)
                {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        diff+=(31-d1);
                        break;
                    case 2:
                        diff+=(28-d1);
                        break;
                    default:
                        diff+=(30-d1);
                        break;
                }
                printf("The interval between %d/%d/%d and %d/%d/%d is %d\n",y1,m1,d1,y2,m2,d2,diff+d2);
            }
        }
        // choice 3!!!
        else
        {
            int y1,m1,d1,y2,m2,d2;
            printf("Enter first date(yyyy/mm/dd): ");
            scanf("%d/%d/%d",&y1,&m1,&d1);
            printf("Enter second date(yyyy/mm/dd): ");
            scanf("%d/%d/%d",&y2,&m2,&d2);

            if(J_leap_year(y1))
            {
                int diff=0;
                /////
                switch(m1){
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        diff+=31-d1;
                        break;
                    case 2:
                        diff+=29-d1;
                        break;
                    default:
                        diff+=30-d1;
                        break;
                }
                //////
                for(int i=m1+1;i<m2;i++)
                {
                    switch(i)
                    {
                        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                            diff+=31;
                            break;
                        case 2:
                            diff+=29;
                            break;
                        default:
                            diff+=30;
                            break;
                    }        
                }
                //////
                diff+=d2;
                printf("The interval between %d/%d/%d and %d/%d/%d is %d\n",y1,m1,d1,y2,m2,d2,diff);

            }
            else
            {    
                int diff=0;
                /////
                switch(m1)
                {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        diff+=31-d1;
                        break;
                    case 2:
                        diff+=28-d1;
                        break;
                    default:
                        diff+=30-d1;
                        break;
                }

                //////
                for(int i=m1+1;i<m2;i++)
                {
                    switch(i)
                    {
                        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                            diff+=31;
                            break;
                        case 2:
                            diff+=28;
                            break;
                        default:
                            diff+=30;
                            break;
                    }        
                }
                //////
                diff+=d2;
                printf("The interval between %d/%d/%d and %d/%d/%d is %d\n",y1,m1,d1,y2,m2,d2,diff);
            }
        }
    }

    return 0;
}