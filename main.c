#include <stdio.h>
#include <stdlib.h>

#include "./Headers/print_welcome.h"
#include "./Headers/menu_system.h"

/**
 * @brief Main function of the program.
 *
 * This function initializes the program, prints a welcome message 
 * and enters a loop where it prompts the user to enter commands. 
 * If the user enters a command that indicates they should exit (for 
 * example, ".exit"), the loop is interrupted and the program terminates.
 *
 * @return 0 if the program executes successfully.
 */
int main()
{
    char value[100];

    print_welcome_message();

    do
    {
        printf("~ ");
        scanf("%s",value);

        if(menu_launcher(value) == 1) {
            break;
        }
    } 
    while (1);
    

    return 0;
}