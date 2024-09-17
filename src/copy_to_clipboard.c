#include <stdio.h>
#include <stdlib.h>

#include "../Headers/copy_to_clipboard.h"

void clip_copy(float measure)
{
    char command[200];

    snprintf(command,200,"echo -n '%.4frem' | xclip -selection clipboard",measure);
    system(command);
}