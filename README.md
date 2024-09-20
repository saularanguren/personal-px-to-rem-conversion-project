# Convertidor de PX a REM

El Convertidor de unidades absolutas (px) a unidades relativas (rem) es una herramienta diseñada para facilitar la conversión de valores. Este proyecto nació de la necesidad personal de simplificar el trabajo con estilos CSS, permitiendo obtener de manera veloz
la unidad relativa correspodiente al valor ingresado.

## Captura de Pantalla

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

## Características

- **Conversión de múltiples tipos de datos**: Acepta tanto enteros (int) como números en punto flotante (float).
- **Copia al portapapeles**: Los resultados convertidos se copian automáticamente al portapapeles, lo que permite pegarlos fácilmente en tu código.
- **Manejo flexible de entradas**: El programa puede recibir tanto puntos como comas como separadores decimales, sin afectar su funcionamiento.
- **Salida fácil del programa**: Para salir del programa, simplemente escribe `.exit` y el programa se cerrará sin problemas.

## Instalación

1. Si deseas probar este proyecto, basta con descargar el repositorio y tener instalada la dependecia de `xclip` en tu sistema Linux. para ello puedes utilizar el siguiente comando:

Debian, Ubuntu y derivadas...
```bash
sudo apt-get install xclip
```

Fedora, CentOS
```bash
sudo dnf install xclip
```

después de instalar `xclip`, tienes 2 opciones: puedes compilar nuevamente el proyecto con el comando `make` o ejecutar el programa con el siguiente comando:

```
cd personal-px-to-rem-conversion-project
./Build/px-rem-converter 
```

## Avisos

1. Estamos desarrollando los empaquetados de este proyecto (.rpm y .deb)
2. Pronto sera asignado una interfaz grafica al programa
3. Estoy presto a sugerencias y solicitudes