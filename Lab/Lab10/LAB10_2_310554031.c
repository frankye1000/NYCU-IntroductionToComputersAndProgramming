#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct student_t
{
    char name[50];
    int student_id;
    int cs_score;
    int chinese_score;
    int math_score;
    int eng_score;
};

void print_node(struct student_t *s)
{
    printf("Name: %s\n", s->name);
    printf("Student ID: %d\n", s->student_id);
    printf("Computer Science: %d\n", s->cs_score);
    printf("Chinese: %d\n", s->chinese_score);
    printf("Math: %d\n", s->math_score);
    printf("English: %d\n", s->eng_score);
}        

void intSwap (int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void stringSwap(char** a, char** b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int testcase;
    scanf("%d",&testcase);
    struct student_t database[testcase]; 
    
    // no use
    char temp[50];
    scanf("%s %s %s %s %s %s",&temp,&temp,&temp,&temp,&temp,&temp);
    // scanf data
    for(int i=0;i<testcase;i++)
    {
        scanf("%s %d %d %d %d %d",&(database[i].name),
                                  &(database[i].student_id),
                                  &(database[i].chinese_score),
                                  &(database[i].eng_score),
                                  &(database[i].math_score),
                                  &(database[i].cs_score)
                                  );
    }



    struct student_t databaseCS[testcase], databaseC[testcase], databaseM[testcase], databaseE[testcase];
    memcpy(&databaseCS,&database, sizeof(database));
    memcpy(&databaseC, &database, sizeof(database));
    memcpy(&databaseM, &database, sizeof(database));
    memcpy(&databaseE, &database, sizeof(database));

    /////
    printf("Sort by Computer Science:\n");
    for(int i = testcase-1; i > 0; i--)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if(databaseCS[j].cs_score < databaseCS[j+1].cs_score)
            {
                intSwap(&databaseCS[j].cs_score,&databaseCS[j+1].cs_score);
                stringSwap(&databaseCS[j].name, &databaseCS[j+1].name);
            }
        }
    }
    for(int i = 0; i < testcase; i++) printf("%s, %d\n", databaseCS[i].name, databaseCS[i].cs_score);
    printf("\n");  


    ////

    printf("Sort by Chinese:\n");
    for(int i = testcase-1; i > 0; i--)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if(databaseC[j].chinese_score < databaseC[j+1].chinese_score)
            {
                intSwap(&databaseC[j].chinese_score,&databaseC[j+1].chinese_score);
                stringSwap(&databaseC[j].name, &databaseC[j+1].name);
            }
        }
    }
    for(int i = 0; i < testcase; i++) printf("%s, %d\n", databaseC[i].name, databaseC[i].chinese_score);
    printf("\n"); 


    ///

    printf("Sort by Math:\n");
    for(int i = testcase-1; i > 0; i--)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if(databaseM[j].math_score < databaseM[j+1].math_score)
            {
                intSwap(&databaseM[j].math_score,&databaseM[j+1].math_score);
                stringSwap(&databaseM[j].name, &databaseM[j+1].name);
            }
        }
    }
    for(int i = 0; i < testcase; i++) printf("%s, %d\n", databaseM[i].name, databaseM[i].math_score);
    printf("\n"); 

    ////
    printf("Sort by English:\n");
    for(int i = testcase-1; i > 0; i--)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if(databaseE[j].eng_score < databaseE[j+1].eng_score)
            {
                intSwap(&databaseE[j].eng_score,&databaseE[j+1].eng_score);
                stringSwap(&databaseE[j].name, &databaseE[j+1].name);
            }
        }
    }
    for(int i = 0; i < testcase; i++) printf("%s, %d\n", databaseE[i].name, databaseE[i].eng_score);
    printf("\n");    
}

