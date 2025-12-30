# ICPC-Training

¡Bienvenido al repositorio de entrenamiento competitivo! Este proyecto reúne soluciones, ejercicios y material de estudio orientado a competiciones de programación (ICPC, Codeforces, LeetCode, HackerRank) y a aprendizaje de algoritmos y estructuras de datos.

---

## 📌 Resumen

- **Lenguajes principales:** C++ (mayoría), C, Java, python
- **Propósito:** Archivo centralizado con soluciones a problemas, ejemplos pedagógicos y material de referencia (capítulos de libros, plantillas y ejercicios).
- **Estructura:** organizada por carpetas temáticas (competencias, algoritmos, ejercicios, libros, prácticas de plataformas).

---

## 📁 Estructura del repositorio

A continuación se explica la organización del proyecto y el contenido más relevante.

- `77/` — Contiene resoluciones y archivos sueltos para problemas (ej. `Bottle.cpp`, `Dralinpome.cpp`).
- `algoritmos/` — Implementaciones de algoritmos de uso general (p. ej. `backtracking.cpp`, `mergesort.cpp`).
- `books/` — Código de apoyo de libros y notas (por ejemplo `AnttiLaaksonen` con capítulos y macros; `HugoHumbertoMorales` con ejercicios y ejemplos).
- `c/` — Código en C (`primes.c`).
- `codeforce/` — Soluciones a problemas de Codeforces (varios `.cpp`).
- `exercises/` — Ejercicios varios y ejemplos básicos (arrays, recursividad, strings, Java validator, etc.).
- `HackerRank/` — Ejercicios resueltos de HackerRank (`AVeryBigSum.cpp`, `plus-minus.cpp`, `staircase.cpp`).
- `ICPC/` — Competencias/entradas de ICPC por año (por ejemplo `2025REGIONAL/`).
- `icpc2024/`, `icpc2025/` — Carpeta con soluciones y material para cada año.
- `leetcode/` — Problemas y soluciones (por ejemplo `maximum-subarray`).
- `neetcode.io/` — Soluciones organizadas por patrones (hashing, stack, two-pointers, etc.).
- `rpc/` — Actividades y problemas varios (ej. `Bottle.cpp`).
- `onlyexercises/` — Código de ejercicios sueltos.
- `build/`, `**/build/Debug/` — Salidas generadas por compilaciones y debugs (no versionar normalmente).



---

## 🛠 Tecnologías y herramientas

- Lenguajes: **C++**, **C**, **Java**, **Python**
- Compiladores utilizados en el entorno: **GCC / g++** (MSYS2 ucrt64) y **cl.exe** (MSVC) en Windows
- Entorno de desarrollo: **VS Code** con tareas para compilar archivos (`C/C++: gcc.exe build active file`, `C/C++: cl.exe build active file`).
- Estándares C++: según el código puede variar (C++11/14/17/20); especificar en cada solución si hace uso de características concretas.

---

## 🚀 Cómo compilar y ejecutar

Se asume un entorno Windows con MSYS2 (o MinGW) instalado o Visual Studio (cl.exe) configurado.

1) Compilar un archivo C++ con g++ (ejemplo):

```bash
# Compilar
g++ -std=c++17 -O2 -Wall -Wextra -o Solution.exe Solution.cpp

# Ejecutar (redireccionando entrada desde archivo)
./Solution.exe < input.txt > output.txt
```

2) Compilar con cl.exe (Visual Studio Developer Command Prompt):

```powershell
cl.exe /EHsc /O2 /FeSolution.exe Solution.cpp
.
\Solution.exe < input.txt
```

3) Usar tareas de VS Code:
- Seleccionar la tarea: `Terminal` → `Run Task...` → `C/C++: gcc.exe build active file` o `C/C++: cl.exe build active file`.
- La tarea compilará el archivo actualmente abierto y generará el ejecutable en la misma carpeta.

---

## 🧭 Buenas prácticas para el repositorio

- Mantén una carpeta por problema o por temática según prefieras (ej. `icpc2025/nombre_problema/` con `main.cpp`, `README.md` del problema y tests).
- Añade comentarios y explica la complejidad temporal y espacial al inicio de cada archivo cuando sea relevante.
- Usa `.gitignore` para excluir `build/`, ejecutables y archivos temporales.
- Añade entradas `README.md` por carpeta si hay material de apoyo o notas de solución.

---

## ✅ Cómo añadir soluciones nuevas (guía rápida)

1. Crea una carpeta para el problema (opcional): `icpc2025/nombre-problema/`.
2. Añade `main.cpp` (o `.c`/`.java`) y, si quieres, `input.txt` con casos de prueba.
3. Añade un breve `README.md` explicando la idea de la solución y su complejidad.


---

## 📚 Material de referencia en el repo

- `books/` contiene ejemplos por capítulos que puedes consultar para aprender técnicas específicas (diversas implementaciones, plantillas y macros).
- `algoritmos/` para algoritmos genéricos reutilizables.
- `codeforces` Para entrenar
- `neetcode.io/` y `leetcode/` para patrones de problemas y soluciones de práctica.

---

## 🧪 Tests y validación

- Para problemas de concurso, prueba localmente con `./Solution.exe < input.txt` y compara con salida esperada.
- Puedes añadir scripts de test (por ejemplo `run_tests.sh` o `run_tests.ps1`) para automatizar ejecución sobre múltiples inputs.

---

## 🤝 Contribuciones

- Si quieres contribuir, abre un PR con una descripción clara y, si es posible, añade tests o `input.txt` + `expected.txt`.
- Mantén estilo consistente: nombres descriptivos de archivos y funciones pequeñas y legibles.

