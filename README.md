# Convertidor de PX a REM

```
$ ./Build/app
```

```
Welcome, PX to REM Converter v1.0.0
To exit type .exit

~ |
```

```
Welcome, PX to REM Converter v1.0.0
To exit type .exit

~ 375
23.4375rem
~ |
```

```
Welcome, PX to REM Converter v1.0.0
To exit type .exit

~ 150
9.3750rem 
~ .exit
ilovec@pc:~$ |
```

## Descripción

El Convertidor de px a rem es una herramienta diseñada para facilitar la conversión de valores en píxeles (px) a unidades relativas en rem. Este proyecto nació de la necesidad personal de simplificar el trabajo con estilos CSS, permitiendo una mejor adaptación y escalabilidad en el diseño web.

## Características

- **Conversión de múltiples tipos de datos**: Acepta tanto enteros (int) como números en punto flotante (float).
- **Copia al portapapeles**: Los resultados convertidos se copian automáticamente al portapapeles, lo que permite pegarlos fácilmente en tu código.
- **Manejo flexible de entradas**: El programa puede recibir tanto puntos como comas como separadores decimales, sin afectar su funcionamiento.
- **Salida fácil del programa**: Para salir del programa, simplemente escribe `.exit` y el programa se cerrará sin problemas.

## Instalación

Para utilizar este convertidor, asegúrate de tener instalada la dependencia `xclip` en tu sistema Linux. Puedes instalarla utilizando el siguiente comando:

Debian, Ubuntu y derivadas...
```bash
sudo apt-get install xclip
```

Fedora
```bash
sudo dnf install xclip
```

después de instalar `xclip`, Ejecuta `make` lo que permite compilar y ejecutar el programa de manera sencilla.

Si necesitas más ajustes o tienes otras solicitudes, ¡no dudes en preguntar!