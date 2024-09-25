#include <stdio.h>
#include <stdlib.h>

#include "../Headers/print_welcome.h"

/**
 * @brief Prints a welcome message for the PX to REM converter.
 *
 * This function clears the screen and displays a welcome message 
 * along with the version of the program. It also informs the user that 
 * they can type ".help" for more information on how to use 
 * the converter.
 *
 * @return Does not return any value.
 */
void print_welcome_message()
{
    system("clear");
    printf("Welcome, PX to REM Converter v1.1.0\n");
    printf("Type \".help\" for more information.\n\n");
}