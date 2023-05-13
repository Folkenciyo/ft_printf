<br/>
<p align="center">
  <h1 align="center">FT_PRINTF</h1>
  <p align="center">
  <img style="display: block;-webkit-user-select: none;margin: auto;background-color: hsl(0, 0%, 90%);transition: background-color 300ms;" src="https://developers.redhat.com/sites/default/files/styles/article_feature/public/ST-c_1x%20%282%29.png?itok=TJtLSL9K">
 <p align="center">
    Este es el proyecto ft_printf de la piscina de 42 Málaga. 
    <br/>
    <br/>
  </p>
</p>

## Contenido

* Sobre el proyecto
* Cómo usar
  * Compilación
* Uso
* Autor

## Sobre el proyecto

Consiste en crear una función que emule el comportamiento de la función printf de la biblioteca estándar de C. Esta función deberá ser capaz de manejar una serie de especificadores de formato, como "%s", "%d", "%i", "%x", "%X", entre otros.

Especificadores de formato
La función ft_printf es capaz de manejar los siguientes especificadores de formato:

* %c: imprime un carácter.
* %s: imprime una cadena de caracteres.
* %p: imprime un puntero en formato hexadecimal.
* %d o %i: imprime un número entero con signo.
* %u: imprime un número entero sin signo.
* %x: imprime un número entero sin signo en formato hexadecimal (en minúsculas).
* %X: imprime un número entero sin signo en formato hexadecimal (en mayúsculas).

## Cómo usar

### Compilación

Ejecuta los siguientes comandos:

* Para compilar
```bash
make
```
* Para eliminar objetos:
```bash
make clean
```
* Para eliminar objetos y archivos binarios (programa):
```bash
make fclean
```
* Para recompilar:
```bash
make re
```
Este comando generará un archivo libftprintf.a, que es la biblioteca que contiene la función ft_printf.

## Uso

Uso en tu programa
Para utilizar la función ft_printf en tu programa, deberás incluir el archivo ft_printf.h en tu código. Luego, podrás llamar a la función ft_printf utilizando los mismos especificadores de formato que se utilizan en la función printf de la biblioteca estándar de C.

Por ejemplo:

```c
#include "libftprintf.h"

int main(void)
{
    ft_printf("Hola, %s!\n", "mundo");
    return (0);
}
```
En este ejemplo, la función ft_printf imprimirá "Hola, mundo!" en la salida estándar.

## Autor

* **Juan Guerrero** - *@juguerre - 42Málaga* - [Juan Guerrero](https://github.com/Folkenciyo/)

### ¿Puedes agregar más funciones a esta biblioteca? ¿Cómo?
* Haz un fork de este repositorio
* Clona tu fork del repositorio
* Contribuye
* Realiza un push
* Crea una solicitud de extracción (pull request) en este repositorio
* ¡Espera a que se fusionen los cambios!
 ¡Sé feliz! :)
---
## 🔗 Links
[![portfolio](https://img.shields.io/badge/portfolio-002?style=for-the-badge&logo=ko-fi&logoColor=white)](https://porfolio-juan-guerrero.vercel.app/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/juanguerrerodeveloper/)

