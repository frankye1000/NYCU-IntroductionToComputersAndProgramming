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

int main()
{
    int testcase;
    scanf("%d",&testcase);
    struct student_t database[testcase]; 
    
    // no use
    char temp[50];
    scanf("%s %s %s %s %s %s",&temp,&temp,&temp,&temp,&temp,&temp);
    // scanf data
    // char NAME[50];
    // int STUDENT_ID,CHINESE,ENGLISH,MATH,CS ;
    
    for(int i=0;i<testcase;i++)
    {
        scanf("%s %d %d %d %d %d",&(database[i].name),
                                  &(database[i].student_id),
                                  &(database[i].chinese_score),
                                  &(database[i].eng_score),
                                  &(database[i].math_score),
                                  &(database[i].cs_score)
                                  );
        // scanf("%s %d %d %d %d %d",&NAME,
        //                           &STUDENT_ID,
        //                           &CHINESE,
        //                           &ENGLISH,
        //                           &MATH,
        //                           &CS);
        // strcpy(database[i].name, NAME);
        // database[i].student_id=STUDENT_ID;
        // database[i].cs_score=CS;
        // database[i].chinese_score=CHINESE;
        // database[i].math_score=MATH;
        // database[i].eng_score=ENGLISH;

    }

    for(int i=0;i<testcase;i++)
    {
        printf("---\n");
        print_node(&database[i]);
    } 
        
}