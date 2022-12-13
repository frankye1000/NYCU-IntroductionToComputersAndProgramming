#ifndef _TA_LIB_H_
#define _TA_LIB_H_

typedef struct
{
    int arg1;
    int arg2;
}_CUSTOM_PARAMS_T;

void ta_register_callback(char tag_name[20], void (*FPTR)(_CUSTOM_PARAMS_T params)) ;
void ta_run(char tag_name[20], _CUSTOM_PARAMS_T params);

#endif