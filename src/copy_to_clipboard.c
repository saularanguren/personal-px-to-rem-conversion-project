#include <stdio.h>
#include <stdlib.h>

#include "../Headers/copy_to_clipboard.h"

/**
 * @brief Copies a measurement value in rem format to the clipboard.
 *
 * This function takes a measurement value in rem and formats it as a string
 * with four decimal places. It then uses the `xclip` command to copy the 
 * resulting string to the system clipboard.
 *
 * @param measure Measurement value in rem that you want to copy to the clipboard.
 * @return Does not return any value.
 */
void clip_copy(float measure)
{
    char command[200];

    snprintf(command,200,"echo -n '%.4frem' | xclip -selection clipboard",measure);
    system(command);
}