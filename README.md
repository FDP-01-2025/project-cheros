[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/mi1WNrHU)
# Proyecto de C++ - Búho Quest

## Descripción del Proyecto

Búho Quest es un videojuego de aventuras por consola desarrollado en C++, ambientado en la Universidad Centroamericana José Simeón Cañas (UCA). El jugador debe encontrar a Eros, un búho escondido en diversos lugares del campus, enfrentando desafíos y superando niveles de dificultad.

---

Características principales

Registro e inicio de sesión:
- Los usuarios se registran con nombre y contraseña.
- La información se almacena en el archivo Users.txt.

Niveles de dificultad:
- Fácil: 5 lugares posibles.
- Medio: 10 lugares.
- Difícil: 15 lugares.

Minijuegos:
- Sendero Nocturno: Carrera de dados contra Eros.
- Puente Misterioso: Elegir el lado correcto del puente.
- Puertas del Saber: Elegir la puerta correcta.
 
Estadísticas:
- Guarda los intentos realizados en Statistics.txt por usuario y nivel cuando el jugador gana.

---

Estructuras y conceptos utilizados
- Estructuras: Uso de struct para representar a los usuarios.
- Manejo de archivos: Lectura y escritura de archivos de texto (fstream).
- Control de flujo: Uso de if, switch, while, do-while, for.
- Generación aleatoria: rand() y srand(time(NULL)).
- Modularidad: Código organizado en funciones.

---

Archivos generados
- Users.txt	        Guarda los usuarios registrados.
- Statistics.txt	  Registra los intentos por nivel y usuario al ganar.

---

Notas adicionales
- Cada partida genera nuevos lugares aleatorios.
- Los desafíos se pueden repetir tantas veces como el jugador desee.
- Los datos persisten mientras no se borren los archivos .txt.


## Equipo

- **Nombre del equipo:** Cheros++

### Integrantes del equipo

1. **Nombre completo:** Fernando Darío Serpas Escobar  
   **Carnet:** 00087325

2. **Nombre completo:** Alejandro Fabian Ramírez Canales  
   **Carnet:** 00194725

## Instrucciones de Ejecución

Requisitos previos
- Compilador g++ o equivalente.
- Consola de comandos o terminal.

Pasos para compilar y ejecutar

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone https://github.com/FDP-01-2025/project-cheros.git

2. Compilar el programa:
   Usando...
   g++ BuhoQuest.cpp -o BuhoQuest

3. Ejecutar:
   Usando...
   ./BuhoQuest ó BuhoQuest.exe

## Aplicación de los temas vistos

- Variables y tipos de datos: int, string, bool para almacenar usuarios, niveles e intentos.
- Estructuras condicionales: if, else, switch para decidir el resultado del minijuego.
- Ciclos: for, while y do while para repetir intentos en minijuegos.
- Funciones: Como Login(), Register(), GuessPlace1(), Minigame1().
- Estructura de datos: struct User para almacenar datos del jugador.
- Manejo de archivos: Guardar y leer intentos desde un archivo .txt.
- Manejo de errores: Validar entrada de datos y mostrar mensajes de error claros.
- Interfaz por consola: Mostrar menús y resultados usando cout.

## Mockups
- Dentro de Resources
  
---

Desarrollado por Cheros++

"Nuestra realidad también puede ser divertida si tenemos la suficiente imaginación."
