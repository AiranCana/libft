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

#### 🔹 Parte 1 — Funciones de libc

Reimplementa funciones estándar como:

- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`
- `ft_strlcpy`, `ft_strlcat`
- Clasificación de caracteres: `ft_isalpha`, `ft_isdigit`, etc.
- Otras funciones básicas (`ft_atoi`, `ft_strncmp`, …)

Todas deben respetar los prototipos y comportamientos de la libc original, con el prefijo `ft_`.

#### 🔹 Parte 2 — Funciones adicionales

Funciones útiles como:

- `ft_substr`
- `ft_strjoin`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`, …

#### 🔹 Parte 3 — Listas enlazadas

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
