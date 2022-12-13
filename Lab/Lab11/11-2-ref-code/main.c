#include <stdio.h>
#include "ta_lib.h"

void example_add(_CUSTOM_PARAMS_T params)
{
    printf("Your answer is %d\n", params.arg1 + params.arg2);
}

void example_mul(_CUSTOM_PARAMS_T params)
{
    printf("Sorry, I don't want to do anything\n");
}

int main(int argc, char **argv)
{
    _CUSTOM_PARAMS_T m_params;
    m_params.arg1 = 1;
    m_params.arg2 = 2;

    ta_register_callback("add", example_add);
    ta_register_callback("mul", example_mul);
    
    // You can register more function by yourself, enjoy it
    // ta_register_callback("ohmygod", balabala_my_cb_func);

    printf("===== Normal example =====\n");

    // Add example
    printf("Action 1: ");
    ta_run("add", m_params);

    // Mul example
    printf("Action 2: ");
    m_params.arg1 = 2;
    m_params.arg2 = 3;
    ta_run("mul", m_params);
    
    printf("===== Exception example =====\n");

    // Exception: duplicate
    ta_register_callback("add", example_add);

    // Exception: The callback function has not been registered
    ta_run("div", m_params);

    return 0;
}
