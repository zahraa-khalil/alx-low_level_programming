#include "3-calc.h"

/**
 **get_op_func - selects the correct function to perform the
 *operation asked by the user.
 *@s: is the operator passed as argument to the program
 *Returns: a pointer to the function that corresponds
 * to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{

    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
        };
    int i;


    while (i <= 5) 
    {
       if (*s == ops[i].op[0])
       {
            return (ops[i].f);
       }
       i++;
    }

    return (NULL);
}

/*
You are  allowed to use one if statement in your code
You are allowed to use one while loop in your code
*/

