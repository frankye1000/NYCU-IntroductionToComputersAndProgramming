#include <stdio.h>

void to_letter_grade(int);

int main()
{
    int n_testcase;
    int numericalGrade;

    scanf("%d", &n_testcase);
    while(n_testcase > 0){
        printf("Enter a numerical grade: ");
        scanf("%d", &numericalGrade);
        printf("The letter grade is: ");
        to_letter_grade(numericalGrade);
        n_testcase--;
    }

    return 0;
}

void to_letter_grade(int numericalGrade)
{
    int quotient;
    char letterGrade;
    //TO DO ... need you to fill in
    if(numericalGrade>100 || numericalGrade<0){
        printf("error\n");
    }else{
        quotient = numericalGrade/10;
        switch(quotient){
            case 9:
                letterGrade='A';
                break;
            case 8:
                letterGrade='B';
                break;
            case 7:
                letterGrade='C';
                break;
            case 6:
                letterGrade='D';
                break;
            default:
                letterGrade='F';
                break;
            
        }

        printf("%c\n", letterGrade);
    }
}