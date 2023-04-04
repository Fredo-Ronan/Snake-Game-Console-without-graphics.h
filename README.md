# Snake-Game-Console-without-graphics.h
### Snake Game Console build in C language but without ``graphics.h`` header

This is the simple snake game that run on windows console/command prompt/CMD without using graphic library or ``graphic.h`` for display the graphic thing on <img alt="C lang" src="https://img.shields.io/badge/-3178C6?logo=C&logoColor=white&style=flat" /> language.
The main idea is to make movement of the snake using looping and every loop, the coordinate of the snake and it's tail is different sequencially.
This snake game is build just using the basic syntax of the C language without any special syntax from another C library.

---
# Features
* Move the snake using W A S D on keyboard
* Store the history of the player including the player names

---
# Limitations
* Unfortunately, because this simple console snake game is running by looping mechanism without any graphic engine and special syntax, so it's depends on the CPU speed. The faster CPU speed, more smooth the snake will run in the game.
* This snake game only run in windows in CMD form/console program.

---
# Preview Images
* **Main Menu**
* **Confirmation to play**
* **See the History**
* **Game Play**

---
# Build and Run the source file
* **Windows**
  > *If you want to run this code from text editor like VS CODE, you **MUST HAVE** GCC Compiler installed on your computer environment*

  > *RECOMMENDED is using IDE such as Dev C++ or Microsoft Visual Studio*

  * Download the source code (see the download instructions)
  * Extract the zip downloaded source code to the directory that you want

  ### If you are using VS CODE, follow these instructions
  * Open the CMD on your windows machine to that directory (see the shortest way to open directly from the directory)
  * type ``code .`` then press ENTER
  * After that, your VS CODE will be open to that directory
  * Open those source files by double click it, or using CTRL + P to search and open
  * Open the terminal inside your VS CODE (you can use shortcut CTRL + ` on your keyboard)
  * type ``gcc -o main.c snake``
  Actually the ``snake`` can be replace according to your preference what to name the .exe file for the output of the program.
  So the format is :
  ``gcc -o <sourceFiles> <outputName>``

---
