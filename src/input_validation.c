#include "../Headers/input_validation.h"

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

int valid_input_format(char *character_string)
{
    for(int i = 0; i < 100; i++)
    {
        if((character_string[0] == '-') || (character_string[i] >= '0' && character_string[i] <= '9'))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    return 0;
}