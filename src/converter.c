#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../Headers/converter.h"
#include "../Headers/input_validation.h"
#include "../Headers/copy_to_clipboard.h"

float px_to_rem_converter()
{
    char value[100];

    do
    {
        printf("~ ");
        scanf("%s",value);

        if(strcmp(value, ".exit") == 0)
        {
            break;
        }
        else
        {
            if(valid_input_format(value) == 0) {
                check_decimal_separator(value);
                float px = atof(value);
                float rem = px / 16;
                printf("%.4frem \n",rem);
                clip_copy(rem);
            }
            else
            {
                printf("Uncaught ReferenceError: %s is not defined\n",value);
            }
        }
    }
    while (1);

    return 0;
}