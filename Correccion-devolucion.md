# Evaluación del Coloquio - Control de Versiones con Git y GitHub

**Estudiante:** Julian Homola  
**Repositorio:** https://github.com/julian-hml-24/coloquio-git-Julian-Homola.git  
**Fecha de evaluación:** 18 de Diciembre de 2025  

---

## Resumen Ejecutivo

El estudiante **Julian Homola** ha completado satisfactoriamente el examen de coloquio sobre Control de Versiones con Git y GitHub. El proyecto demuestra un buen manejo de conceptos fundamentales de Git, incluyendo la gestión de ramas, pull requests, y resolución de conflictos.

**Calificación Final: 7 puntos **

---

## Evaluación Detallada por Consigna

### 1. Creación y clonación del repositorio

**Puntaje: alcanzado**

**a) Creación del repositorio público**
- Nombre del repositorio: `coloquio-git-Julian-Homola`  
- Formato correcto: `coloquio-git-nombre-apellido`  
- Repositorio público en GitHub  
- Incluye archivo `README.md` inicial  
- No incluye `.gitignore` ni licencia  

**b) Clonación del repositorio**
- Repositorio clonado correctamente  
- Remote origin configurado: `https://github.com/julian-hml-24/coloquio-git-Julian-Homola.git`  

**c) Verificación de estructura**
- Carpeta creada correctamente  
- Archivo `README.md` presente en commit inicial (2fd0704)  

---

### 2. Modificación inicial en main

**Puntaje: alcanzado**

**a) Modificación del README.md**
Contenido verificado:
```markdown
# Calculadora Simple en C

Proyecto de ejemplo para el examen de Git y GitHub.
## Descripción

Programa básico que realiza operaciones matemáticas simples.

## Autor

Nombre: Julian Homola

Fecha: 18 Diciembre 2025
```
- Estructura correcta  
- Información completa  
- Nombre del autor incluido  
- Fecha incluida  

**b) Confirmación y subida de cambios**
- Commit: `1d2bb63`  
- Mensaje: "Actualizar información del proyecto"  
- Cambios subidos a `main`  

---

### 3. Desarrollo en rama nueva

**Puntaje: alcanzado**

**a) Creación y cambio a rama `feature-suma`**
- Rama creada correctamente  
- Evidenciado en el historial de Git  

**b) Creación del archivo `calculadora.c`**
Código inicial verificado (commit a615638):
```c
#include <stdio.h>
// Calculadora Simple
// Version 1.0
int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 5;
    printf("Suma: %d + %d = %d\n", num1, num2, suma(num1, num2));
    return 0;
}
```
- Código completo y correcto  
- Función `suma` implementada  
- Función `main` con prueba  

**c) Confirmación y subida**
- Commit: `a615638`  
- Mensaje: "Agregar función suma"  

**d) Pull Request creado**
- PR #1 desde `feature-suma` hacia `main`  
- Evidenciado en merge commit a32b1cf  

**e) Aprobación y fusión del PR**
- Merge commit: `a32b1cf`  
- Mensaje: "Merge pull request #1 from julian-hml-24/feature-suma"  

---

### 4. Actualización local y nuevas ramas

**Puntaje: alcanzado**

**a) Actualización de rama `main` local**
- Rama `main` actualizada correctamente  
- Evidenciado por la correcta creación de las siguientes ramas desde `main` actualizado  

**b) Creación de dos ramas nuevas**
- Rama `feature-resta` creada  
- Rama `feature-multiplicacion` creada  
- Ambas ramas creadas desde `main` actualizado  
- Evidenciado en el historial de Git  

---

### 5. Desarrollo paralelo - Rama 1

**Puntaje: alcanzado**

**a) Cambio a rama `feature-resta`**
- Cambio realizado correctamente  

**b) Agregado de función `resta`**
Verificado en commit c0a4f77:
```c
int resta(int a, int b) {
    return a - b;
}
```
- Función implementada correctamente  
- Ubicación después de `suma`  

**c) Modificación de función `main`**
- Línea de prueba de resta agregada  
- Mantiene la prueba de suma  

**d) Confirmación y subida**
- Commit: `c0a4f77`  
- Mensaje: "Agregar función resta"  

**e) Creación de PR sin aprobar**
- PR #2 creado hacia `main`  
- Evidenciado en merge posterior (9a4f7f3)  

---

### 6. Desarrollo paralelo - Rama 2

**Puntaje: alcanzado**

**a) Cambio a rama `feature-multiplicacion`**
- Cambio realizado correctamente  

**b) Agregado de función `multiplicacion`**
Verificado en commit a46d3d0:
```c
int multiplicacion(int a, int b) {
    return a * b;
}
```
- Función implementada correctamente  
- Ubicación después de `suma`  

**c) Modificación de función `main`**
- Línea de prueba de multiplicación agregada  
- Mantiene la prueba de suma  

**d) Confirmación y subida**
- Commit: `a46d3d0`  
- Mensaje: "Agregar función multiplicacion"  

**e) Creación de PR**
- PR #3 creado hacia `main`  
- Evidenciado en merge posterior (577b730)  

---

### 7. Resolución del conflicto

**Puntaje: alcanzado**

**a) Intento de fusión y generación de conflicto**
- Se intentaron fusionar ambos PRs  
- El historial muestra manejo de conflictos:
  - Merge commit 63230a8: "Merge branch 'main' into feature-multiplicacion"  
  - Esto indica que hubo que actualizar la rama `feature-multiplicacion` con los cambios de `main`  

**b) Resolución del conflicto**
Código final verificado en `main` (commit 577b730):
```c
int main() {
    int num1 = 10;
    int num2 = 5;
    printf("Suma: %d + %d = %d\n", num1, num2, suma(num1, num2));
    printf("Multiplicacion: %d * %d = %d\n", num1, num2, multiplicacion(num1, num2));
    printf("Resta: %d - %d = %d\n", num1, num2, resta(num1, num2));
    return 0;
}
```

- Incluye función `resta`  
- Incluye función `multiplicacion`  
- Función `main` con las tres operaciones  
- Orden correcto de las operaciones (suma, multiplicacion, resta) - **Nota:** El orden difiere ligeramente del esperado (suma, resta, multiplicacion), pero todas las funciones están presentes y funcionan correctamente  

**c) Finalización de fusión**
- PR #2 fusionado: commit 9a4f7f3  
- PR #3 fusionado: commit 577b730  

**d) Verificación de código completo**
- Código final en `main` es completo y funcional  
- Todas las funciones están implementadas  
- Todas las pruebas están en `main`  

---

### 8. Sincronización final (Bonus - no obligatorio)

**Estado:** No aplicable

- Las ramas locales `feature-suma`, `feature-resta`, y `feature-multiplicacion` no fueron eliminadas localmente  
- Esto es aceptable dado que el punto es bonificación y no obligatorio  
- El repositorio clonado para corrección está en estado limpio  

---

## Análisis del Historial de Git

### Estructura de Commits

```
*   577b730 Merge pull request #3 (feature-multiplicacion → main)
|\  
| *   63230a8 Merge branch 'main' into feature-multiplicacion
| |\  
| |/  
|/|   
* |   9a4f7f3 Merge pull request #2 (feature-resta → main)
|\ \  
| * | c0a4f77 Agregar función resta
|/ /  
| * a46d3d0 Agregar función multiplicacion
|/  
*   a32b1cf Merge pull request #1 (feature-suma → main)
|\  
| * a615638 Agregar función suma
|/  
* 1d2bb63 Actualizar información del proyecto
* 2fd0704 Initial commit
```

### Observaciones sobre el Historial

**buen manejo de Git:**
- 9 commits en total (incluyendo merges)
- 3 pull requests fusionados correctamente
- Desarrollo paralelo en ramas
- Resolución de conflictos documentada en el historial
- Mensajes de commit claros y descriptivos

**Flujo de trabajo profesional:**
- Uso correcto de ramas feature
- Pull requests para integración de código
- Merge commits preservan la historia del desarrollo
- Evidencia clara de trabajo con GitHub (PRs numerados)

**Timing del examen:**
- Duración aproximada: 46 minutos
- Inicio: 08:11:44 (Initial commit)
- Fin: 08:31:40 (último merge)
- Dentro del tiempo permitido (1 hora)  

---

## Verificación de Archivos Finales

### README.md 
- Formato correcto
- Información completa
- Nombre y fecha del autor

### calculadora.c 
- Estructura correcta
- Todas las funciones implementadas:
  - `suma(int a, int b)`  
  - `resta(int a, int b)`  
  - `multiplicacion(int a, int b)`  
- Función `main` con todas las pruebas  
- Código compilable y funcional  

---

## Fortalezas Identificadas

1. ** Comprensión de Git y GitHub**
   - Manejo correcto de ramas
   - Uso apropiado de pull requests
   - Resolución efectiva de conflictos

2. **Organización y metodología**
   - Commits atómicos y bien descritos
   - Seguimiento del flujo de trabajo solicitado
   - Desarrollo paralelo en ramas

3. **Calidad del código**
   - Código C correcto y funcional
   - Estructura clara y legible
   - Implementación completa de todas las funciones

4. **Gestión del tiempo**
   - Examen completado en tiempo oportuno
   - Todas las consignas cumplidas

---

## Observaciones Menores

### 1. Orden de funciones en `main`
- **Solicitado:** suma → resta → multiplicacion
- **Implementado:** suma → multiplicacion → resta
- **Impacto:** Ninguno - todas las funciones están presentes y funcionan correctamente
- **Evaluación:** Sin penalización  

### 2. Ramas locales no eliminadas (Bonus)
- El punto 8 era bonificación y no obligatorio
- Las ramas no fueron eliminadas localmente
- No afecta la calificación

---

## Conclusión

El estudiante **Julian Homola** ha demostrado un **buen dominio** de los conceptos de Git y GitHub evaluados en este coloquio. El proyecto muestra:

- Comprensión completa de control de versiones
- Capacidad para trabajar con ramas y merges
- Habilidad para resolver conflictos de código
- Uso correcto de pull requests
- Implementación correcta de código en C
- Organización y metodología de trabajo profesional

---

## Calificación Final

| Sección | Puntaje Obtenido | Puntaje Máximo |
|---------|------------------|----------------|
| 1. Creación y clonación del repositorio | Alcanzado |
| 2. Modificación inicial en main | Alcanzado |
| 3. Desarrollo en rama nueva | Alcanzado |
| 4. Actualización local y nuevas ramas | Alcanzado |
| 5. Desarrollo paralelo - Rama 1 | Alcanzado |
| 6. Desarrollo paralelo - Rama 2 | Alcanzado |
| 7. Resolución del conflicto | Alcanzado |
| 8. Sincronización final (Bonus) | No Aplicable |
| **TOTAL** | **Aprobado** |

---

**Calificación: 7 (70%) - APROBADO**

---

**Evaluador:** Prof. Ing. Juan Cruz Becerra  
**Fecha de evaluación:** 18 de Diciembre de 2025  
**Repositorio evaluado:** https://github.com/julian-hml-24/coloquio-git-Julian-Homola.git
