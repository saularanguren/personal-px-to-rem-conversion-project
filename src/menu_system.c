#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Headers/menu_system.h"
#include "../Headers/print_welcome.h"
#include "../Headers/converter.h"

/**
 * @brief Maneja las opciones del menú del programa.
 *
 * Esta función toma un comando como entrada y ejecuta la acción correspondiente.
 * Si el comando es ".help", imprime un mensaje de ayuda con las opciones disponibles.
 * Si el comando es ".clear", limpia la pantalla y muestra el mensaje de bienvenida.
 * Si el comando es ".exit", indica que se debe salir de la aplicación.
 * Para cualquier otro comando, se llama a la función para convertir píxeles a rem.
 *
 * @param value Cadena que representa el comando ingresado por el usuario.
 * @return 1 si se debe salir de la aplicación.
 */
int menu_launcher(char *value) {
    if(strcmp(value, ".help") == 0)
    {
        printf(".exit    Exit the application\n");
        printf(".clear   Clean the application\n");
        printf(".help    Print this help message\n");
    }
    else if(strcmp(value, ".clear") == 0)
    {
        print_welcome_message();
    }
    else if(strcmp(value, ".exit") == 0)
    {
        return 1;
    }
    else
    {
        px_to_rem_converter();
    }

    return 0;
}