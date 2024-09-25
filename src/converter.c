#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../Headers/converter.h"
#include "../Headers/input_validation.h"
#include "../Headers/copy_to_clipboard.h"
#include "../Headers/print_welcome.h"

/**
 * @brief Converts a value from pixels to rem.
 *
 * This function takes a value in pixels as input (in string form) 
 * and converts it to rem using a fixed conversion ratio (1 rem = 16 px).
 * It is expected that the input value is a valid number represented as a string.
 * If the value is not valid, an error message is printed.
 *
 * @param value String representing the value in pixels to convert.
 * @return The converted value in rem, or 0 if the input is invalid.
 */
float px_to_rem_converter(char *value)
{
    if(valid_input_format(value) == 0) 
    {
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

    return 0;
}