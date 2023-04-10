# Snake-Game-Console-without-graphics.h 🐍
### Snake Game Console build in C language but without ``graphics.h`` header
OS : <img alt="Windows" src="https://img.shields.io/badge/Windows-0078D6?logo=windows&logoColor=white&style=flat"/>

```Version : v1.0.0```

### [README Indonesian Version (README Versi Indonesia)](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h/blob/main/README%20(Indonesian%20Version).md)

### Demo Video
https://user-images.githubusercontent.com/128687596/230853416-b353ac7d-dd65-4a21-93c3-45e084b9fb9a.mp4


Library Requirements : Standard C Library such as..
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
```
  This is the simple snake game that run on windows console/command prompt/CMD without using graphic library or ``graphic.h`` for display the graphic thing on <img alt="C lang" src="https://img.shields.io/badge/-3178C6?logo=C&logoColor=white&style=flat" /> language.
  The main idea is to make movement of the snake using looping and every loop, the coordinate of the snake and it's tail is different sequencially.
  This snake game is build just using the basic syntax of the C language without any special syntax from another C library.



  > **NOTE** : *This snake game console actually have a little bug when generating food on random location. If you want to contribute to fix that bug and another bug while trying from source code, read the [CONTRIBUTING.md](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h/blob/main/CONTRIBUTING.md) file to know how to contribute to this little fun project*
  
  - [ ] [Random food coordinate generating bug issue](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h/issues/1)


  ### Jump to section
  * [Features ✔](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#features-)
  * [Limitations ⚠](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#limitations-)
  * [Preview Images 👀](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#preview-images-)
  * [Build and Run from source code 🛠⚙](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#build-and-run-the-source-file-)


---
# Features ✔
* Move the snake using W A S D on keyboard ➡⬅⬆⬇ ⌨
* Store the history of the player including the player names and the date time achieved 💾
* Access the history even when the program has been terminated (persistence text file based) 📂
* Pause the game when anything disturb while playing ⏸

---
# Limitations ⚠
* Unfortunately, this snake game console runs using the principle of looping and without using a graphics engine such as the ``graphics.h`` header, so its performance depends on CPU speed, the higher the CPU speed, the smoother the "snake" moves in the game.
* This snake game only run on Windows Operating System in CMD form/console program.

---
# Preview Images 👀
* **Main Menu**
  
  <img src="https://user-images.githubusercontent.com/128687596/229764982-313bc5e1-3dbf-425a-a264-dc392f266f03.png" width="500"/>
  
  *Main menu of the snake game console program*
  
* **Confirmation to play**
  
  <img src="https://user-images.githubusercontent.com/128687596/229765083-deb3b2e5-7ace-4a38-a1b0-0b0f3bc3ea7f.png" width="500"/>
  
  *Asking for confirmation that the player really want to continue to the game*
  
  <img src="https://user-images.githubusercontent.com/128687596/229765106-18b2297b-ede9-4318-bfcc-5dd6131b11db.png" width="500"/>
  
  *Asking for the player name (can be random name) for storing history purpose*

* **See the History**

  <img src="https://user-images.githubusercontent.com/128687596/229767767-461826b9-d8f4-4afb-9a7f-eab00d67eb0d.png" width="500"/>
  
  *See all players history data*
  
  <img src="https://user-images.githubusercontent.com/128687596/229768005-349115bc-96f0-427f-b281-7ac2c36b373e.png" width="500"/>
  
  *Search and see the specific player history by name*
  
* **Game Play**

  <img src="https://user-images.githubusercontent.com/128687596/229838794-11e8df48-f933-4cf3-9df8-643e010873c1.png" width="300"/>
  
  *Game Play in action*
  
  <img src="https://user-images.githubusercontent.com/128687596/229783462-23544d67-ad28-400f-af97-f243fd6a9466.png" width="300"/>

  *Game Paused by pressing P key on keyboard*
  
  <img src="https://user-images.githubusercontent.com/128687596/229838230-cc1bafa6-49d4-4986-a6e7-30ddd584045f.png" width="300"/>
  
  *Game Over*
  

  
---
# Build and Run the source file 🛠⚙
* **Windows**
  > *If you want to run this code from text editor like VS CODE, you **MUST HAVE** GCC Compiler installed on your computer environment*
  > *These are couple of way to get the GCC Compiler installed in your computer :*
  > *  Installer called MinGW is pretty popular among windows users, you can directly search in google by keyword : MinGW C Compiler download OR [you can click this to download MinGW and read installation instructions](https://www.scaler.com/topics/c/c-compiler-for-windows/) to get the GCC Compiler install in your computer
  > *  Other installer is msys2 which i use in my computer, [click here for the msys2 download and install instructions](https://www.msys2.org/).
  > 
  > ***NOTE** that not only install the GCC Compiler using one of the installer, but also configure the PATH to your windows system environment*

  > *RECOMMENDED is using IDE such as Dev C++ or Microsoft Visual Studio*
  > *  [Click here to download the Dev C++ IDE from official website](https://www.bloodshed.net/).
  > *  [Click here to download Dev C++ version that i use in my computer](https://github.com/Fredo-Ronan/Dev-C-IDE-Installer)

  * Download the source code (see the download instructions)
  * Extract the zip downloaded source code to the directory that you want

  ### If you are using VS CODE, follow these instructions =====================================
  * Open the CMD on your windows machine to that directory (see the shortest way to open directly from the directory)
  * type ``code .`` then press ENTER
  * After that, your VS CODE will be open to that directory
  * Open those source files by double click it, or using CTRL + P to search and open
  * Open the terminal inside your VS CODE (you can use shortcut CTRL + ` on your keyboard)
  * type ``gcc main.c source.c -o snake``
  
  Actually the ``snake`` can be replace according to your preference what to name the .exe file for the output of the program.
  
  So the format is :
  ``gcc <sourceFiles sourceFiles> -o <outputName>``
  * type ``start snake.exe`` or ``./snake`` to run the program
  * Enjoy :)
  
  
  #### When compile and running from the source using Vs Code, ignore these files inside the source code folder :
  ```
  - Project1.layout
  - Project1.dev
  - Project1.exe
  - MakeFile.win
  - source.o
  - main.o
  ```
  #### Because they are actually autogenerated from Dev C++ IDE and it's important just for compiling inside the Dev C++ IDE.

  ### If you are using Dev C++, follow these instructions =====================================
  * Extract the downloaded source file zip
  
  * Follow these step to open project in Dev C++ :
    * Open Dev C++
    * Click on File > Open
      
      <img src="https://user-images.githubusercontent.com/128687596/229816000-fbfa6578-d826-4b88-9929-bc14e2a77b7a.png" width="500"/>
      
    * Navigate to the directory you've download and extract the source file
    * Click on Project1.dev then click Open
    
      <img src="https://user-images.githubusercontent.com/128687596/229818293-1ced2a03-20a7-49d5-84ac-6b6ed58323df.png" width="500"/>
      
    * Click on the Compile & Run icon or press F11 for the shortcut
    
      <img src="https://user-images.githubusercontent.com/128687596/229819444-9025daac-90ec-4d48-9bb9-568c7ae0ebb1.png" width="500"/>
      
    * After that, Dev C++ will compile it and automatically run the program also
    * Enjoy :)
---
