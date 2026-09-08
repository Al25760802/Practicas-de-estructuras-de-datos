# ESTRUCTURA DE DATOS 2026-2 3SS. 🚀

## 👤 Información del Estudiante

| Campo | Detalle |
| :--- | :--- |
| **Nombre** | Ivan Cervantes Rojas |
| **No. de Control** | 25760802 |
| **Grupo** | 3SS |
| **Carrera** | Ingeniería en Sistemas Computacionales |
| **Docente** |Maria de Lourdes, Aguillon Ruiz.  |
| **Institución** | [Instituto Tecnológico de Ensenada (ITE)](https://www.ensenada.tecnm.mx/) |

---
# 📚 Prácticas de Estructuras de Datos

Repositorio destinado a las prácticas de la asignatura **Estructuras de Datos**.

---

## 📁 Práctica 1: Sistema de Calificaciones Escolares

### 📌 Objetivo
Construir un sistema básico en **C++** para la gestión de calificaciones escolares, aplicando conceptos fundamentales del lenguaje: variables, arreglos, funciones, estructuras de control y menú interactivo.

### 📄 Archivo principal
`Sistema_de_Calificaciones_Escolares.cpp`

---

## 🛠️ Niveles de desarrollo

NIVEL 1 — Estructura básica y declaración de variables
Tema: `main`, tipos de datos, `cin`/`cout`.

Instrucciones:
1. Crea el programa base con `#include <iostream>` y `int main()`.
2. Declara las siguientes variables:
   - `string nombre` (nombre del estudiante)
   - `int edad`
   - `float calificacion1, calificacion2, calificacion3`
   - `float promedio`
3. Pide al usuario todos los datos con `cin`.
4. Calcula el promedio de las 3 calificaciones.
5. Imprime un resumen con `cout`.



NIVEL 2 — Condicionales `if-else`
Tema: decisiones simples, anidadas y validación de datos.

**MODIFICA tu programa del Nivel 1 para agregar:**
1. Después de calcular el promedio, usa `if-else` para determinar el estado:
   - promedio >= 9 → `"EXCELENTE"`
   - promedio >= 7 → `"APROBADO"`
   - promedio >= 6 → `"REGULAR (aprobado con lo minimo)"`
   - menor a 6 → `"REPROBADO"`
2. Valida la edad: si `edad < 0` o `edad > 120`, imprime `"Edad invalida"` y termina el programa con `return 1;`.
3. Valida que cada calificación esté entre 0 y 10; si alguna no lo está, imprime un error y termina.
