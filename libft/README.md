*Este proyecto ha sido creado como parte del currículo de 42 por vicaguil.*

# Libft

## Descripción

Libft es el primer proyecto del currículo de 42 y consiste en reimplementar desde cero un conjunto de funciones estándar de la biblioteca de C, junto con funciones utilitarias adicionales. El objetivo es comprender en profundidad cómo funcionan internamente las funciones de la libc, desarrollar buenos hábitos de escritura de código en C y construir una biblioteca personal reutilizable que servirá de base para proyectos futuros del cursus.

La biblioteca resultante, `libft.a`, agrupa cuatro categorías de funciones:

- **Funciones de memoria**: manipulación y copia de bloques de memoria (`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`).
- **Funciones de cadenas**: operaciones sobre strings (`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`).
- **Funciones de clasificación y conversión**: (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`).
- **Funciones adicionales** (Parte 2): utilidades de uso frecuente no presentes en la libc estándar (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
- **Funciones de listas enlazadas** (Bonus): implementación completa de una lista enlazada simple (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

### Descripción detallada de la librería

| Función | Descripción |
|---|---|
| `ft_memset` | Rellena un bloque de memoria con un byte dado. |
| `ft_bzero` | Pone a cero un bloque de memoria. Equivale a `ft_memset(s, 0, n)`. |
| `ft_memcpy` | Copia `n` bytes de una zona de memoria a otra (sin solapamiento). |
| `ft_memmove` | Copia `n` bytes gestionando correctamente el solapamiento de memoria. |
| `ft_memchr` | Busca la primera aparición de un byte en un bloque de memoria. |
| `ft_memcmp` | Compara dos bloques de memoria byte a byte. |
| `ft_calloc` | Reserva memoria para un array e inicializa todo a cero. |
| `ft_strlen` | Devuelve la longitud de una cadena (sin el `\0`). |
| `ft_strlcpy` | Copia una cadena con control de tamaño, garantizando terminación nula. |
| `ft_strlcat` | Concatena cadenas con control de tamaño, garantizando terminación nula. |
| `ft_strchr` | Localiza la primera aparición de un carácter en una cadena. |
| `ft_strrchr` | Localiza la última aparición de un carácter en una cadena. |
| `ft_strncmp` | Compara hasta `n` caracteres de dos cadenas. |
| `ft_strnstr` | Busca una subcadena dentro de una cadena, con límite de longitud. |
| `ft_strdup` | Duplica una cadena reservando memoria con `malloc`. |
| `ft_atoi` | Convierte una cadena a un entero. |
| `ft_isalpha` | Devuelve true si el carácter es una letra. |
| `ft_isdigit` | Devuelve true si el carácter es un dígito. |
| `ft_isalnum` | Devuelve true si el carácter es alfanumérico. |
| `ft_isascii` | Devuelve true si el carácter pertenece al conjunto ASCII. |
| `ft_isprint` | Devuelve true si el carácter es imprimible. |
| `ft_toupper` | Convierte un carácter a mayúscula. |
| `ft_tolower` | Convierte un carácter a minúscula. |
| `ft_substr` | Extrae una subcadena a partir de un índice y con una longitud máxima. |
| `ft_strjoin` | Concatena dos cadenas en una nueva cadena reservada con `malloc`. |
| `ft_strtrim` | Elimina los caracteres de un set dado al inicio y al final de una cadena. |
| `ft_split` | Divide una cadena en un array de subcadenas usando un delimitador. |
| `ft_itoa` | Convierte un entero a su representación en cadena de caracteres. |
| `ft_strmapi` | Aplica una función a cada carácter de una cadena, generando una nueva. |
| `ft_striteri` | Aplica una función a cada carácter de una cadena modificándola in-place. |
| `ft_putchar_fd` | Escribe un carácter en el file descriptor dado. |
| `ft_putstr_fd` | Escribe una cadena en el file descriptor dado. |
| `ft_putendl_fd` | Escribe una cadena seguida de un salto de línea en el file descriptor dado. |
| `ft_putnbr_fd` | Escribe un entero en el file descriptor dado. |
| `ft_lstnew` | Crea un nuevo nodo de lista enlazada. |
| `ft_lstadd_front` | Añade un nodo al principio de la lista. |
| `ft_lstsize` | Devuelve el número de nodos de la lista. |
| `ft_lstlast` | Devuelve el último nodo de la lista. |
| `ft_lstadd_back` | Añade un nodo al final de la lista. |
| `ft_lstdelone` | Elimina un nodo aplicando la función de borrado a su contenido. |
| `ft_lstclear` | Elimina todos los nodos de la lista liberando la memoria. |
| `ft_lstiter` | Itera sobre la lista aplicando una función a cada nodo. |
| `ft_lstmap` | Itera sobre la lista y genera una nueva lista con los resultados de aplicar una función a cada nodo. |

---

## Instrucciones

### Compilación

La biblioteca se compila con el `Makefile` incluido en el repositorio. Las reglas disponibles son:

```bash
make        # Compila la librería y genera libft.a
make bonus  # Compila también las funciones de listas enlazadas
make clean  # Elimina los archivos objeto (.o)
make fclean # Elimina los archivos objeto y libft.a
make re     # Equivale a fclean + make
```

### Uso en un proyecto

Para enlazar `libft.a` con un programa propio:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o programa
```

Incluye la cabecera en tus archivos fuente:

```c
#include "libft.h"
```

### Requisitos

- Compilador `cc` (compatible con `gcc` o `clang`)
- Sistema operativo tipo Unix (Linux / macOS)
- `make`

---

## Recursos

### Documentación y referencias

- [Manual de la libc — GNU C Library](https://www.gnu.org/software/libc/manual/)
- [man pages en línea — man7.org](https://man7.org/linux/man-pages/)
- [The C Programming Language — Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) *(libro de referencia clásico)*
- [cppreference — funciones de string y memoria en C](https://en.cppreference.com/w/c/string/byte)
- [Diferencias entre glibc y BSD libc](https://www.gnu.org/software/libc/manual/html_node/Feature-Test-Macros.html)

### Uso de Inteligencia Artificial

Durante el desarrollo de este proyecto se ha utilizado **Claude** (Anthropic) como herramienta de apoyo al estudio. Concretamente, se empleó para generar apuntes y guías de estudio sobre las funciones de la librería: para cada función se elaboraron materiales que incluían el análisis línea a línea de la implementación, diagramas de memoria, casos borde y comparativas entre funciones relacionadas. La IA no fue utilizada para escribir el código del proyecto.
