#include <stdio.h>

// In this scope, compiler doesn't know what "get_question_from_TA(...)" is.
// You might include something to tell compiler
#include  "game.h"

int main(int argc, char **argv)
{
    char example[200];
    //Get question by this API
    get_question_from_TA(example, 200);
    printf("%s\n", example);
    //Fill your answer to array, and call this API to get password
    
    char answer[7] = "TF.CHEN";
    char example2[200] = {'\0'};
    for (int i=0; i<7;i++) example2[i] = answer[i];
    get_password_by_answer(example2, 200);
    printf("%s\n", example2);


    char passward[40] = "S;>m;;^5FX;ks1=0'P6FhkN=Ol[t30GVk,.G,%vf";
    //Using password to get treasure
    char example3[200] = {'\0'};
    for (int i=0; i<40;i++) example3[i] = passward[i];
    get_treasure_by_password(example3, 200);
    printf("%s", example3);
    return 0;
}
