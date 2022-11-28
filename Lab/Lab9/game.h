#ifndef _GAME_H_
#define _GAME_H_

#include <string.h>

/*
HINT:
When you declare array as "char example[100];".
Even if you only put "abc" in this array, you should always use 100(maybe you want to use sizeof()) when using following API.

REF:
get_question_from_TA(example, 100);
get_password_by_answer(example, 100);
get_treasure_by_password(example, 100);
*/

void get_question_from_TA(char *arr, int arr_size);
void get_password_by_answer(char *arr, int arr_size);
void get_treasure_by_password(char *arr, int arr_size);

#endif