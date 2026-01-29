_Este proyecto ha sido creado como parte del currículo de 42 por acanadil._

# Libft — Tu primera librería

## 📌 Descripción

Libft es tu **primera librería en C** en 42. El objetivo es implementar funciones de propósito general similares a las de la libc estándar para comprender cómo funcionan internamente y poder reutilizarlas en futuros proyectos.

La librería debe:

- Estar escrita en **C** y cumplir con la **Norma de 42**.
- No usar funciones externas no permitidas.
- No tener *memory leaks* ni errores de ejecución.

### 📁 Contenido del proyecto

Tu repositorio debe incluir al menos:

- `Makefile` (con reglas: **NAME, all, clean, fclean, re**)
- Archivos `.c` y `.h` con tu implementación de funciones (`libft.h`, `ft_*.c`)

### 🧠 Funciones a implementar

### 🔹 Funciones de libc

Reimplementa funciones estándar como:

- Funciones de clasificación de caracteres: `isalpha` `isdigit` `isalnum` `isascii` `isprint`
- Funciones de strings: `strlen` `strchr` `strrchr` `strnstr` `strncmp` `strlcpy` `strlcat`
- Funciones de memoria: `bzero` `memset` `memcpy` `memmove` `memchr` `memcmp`
- Conversión de caracteres: `toupper` `tolower`
- Asignación de memoria: `calloc` `strdup`
- Conversión de tipos: `atoi`

Todas deben respetar los prototipos y comportamientos de la libc original, con el prefijo `ft_`.

### 🔹 Funciones adicionales

Funciones útiles como:

- Escritura en file descriptors: `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`
- Manipulación de strings: `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split`
- Iteración sobre strings con funciones: `ft_strmapi` `ft_striteri`
- Conversión  de tipos: `ft_itoa`

### 🔹 Listas enlazadas

Implementa y prueba funciones para manejar listas:

- Crear nodo: `ft_lstnew`
- Añadir: `ft_lstadd_front`, `ft_lstadd_back`
- Longitud: `ft_lstsize`
- Borrar: `ft_lstdelone`, `ft_lstclear`
- Iterar y mapear: `ft_lstiter`, `ft_lstmap`

## 🚀 Instrucciones

### ⚙️ Compilación

Ejecuta:

```sh
make 
