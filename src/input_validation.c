#include "../Headers/input_validation.h"

/**
 * @brief Checks and replaces the decimal separator in a string.
 *
 * This function iterates through a character string looking for a decimal separator
 * represented by a comma (','). If it finds a comma, it replaces it with a point ('.')
 * and returns 1 to indicate that a replacement was made. If no comma is found,
 * the function returns 0.
 *
 * @param character_string Character string to be checked and modified.
 * @return 1 if a replacement was made; 0 if no comma was found.
 */
int check_decimal_separator(char *character_string)
{
    for(int i = 0; i <= sizeof(character_string); i++)
    {   
        if(character_string[i] == ',')
        {
            character_string[i] = '.';
            return 1;
        }
    }

    return 0;
}

/**
 * @brief Checks the input format of a character string.
 *
 * This function validates whether a string represents a correct input format
 * for a numeric value that may include a negative sign, digits, and optionally
 * the suffix "px" or "PX". The function returns 0 if no errors are detected in the format,
 * and 1 if any errors are found.
 *
 * @param character_string Character string to be validated.
 * @return 0 if the format is valid; 1 if an error is detected in the format.
 */
int valid_input_format(char *character_string)
{
    int error = 0;

    for(int i = 0; character_string[i] != '\0'; i++)
    {
        if((character_string[0] == '-') || (character_string[i] == ',') || (character_string[i] == '.') || (character_string[i] >= '0' && character_string[i] <= '9'))
        {
            continue;
        }
        else
        {
            if((i > 0) && ((character_string[i] == 'p' && character_string[i + 1] == 'x') || (character_string[i] == 'P' && character_string[i + 1] == 'X'))) 
            {
                error--;
                continue;
            }
            else
            {
                error++;
            }
        }
    }

    return (error == 0) ? 0 : 1;
}