# CPLUSPY
## Introduction
A very basic c++ program to spy the keyboard strokes.                        
## Requirements
**Language:** C++                                   
**Libraries:** windows.h and fstream.      
**Compiler:** any c++ compiler for windows could work, g++ for example.
## More information:
This c++ keylogger only detects the keys you specify in the code as **chars_to_detect**, you can change it as you want.
```c++
using namespace std;
char chars_to_detect[] = "SPECIFY THEM HERE"; // This are the chars you wanna detect
```
## Problems
This program does not distinguish between **keyboard languages**, so it can generate some problems.
An example could be the letter **Ñ** in Spanish.            
You can report problems [here](https://github.com/Kik449/schat/issues)!                      
Don't be afraid of asking questions, if it is posible, I will be answering them.
## Update
In the next days I will be working to improve the keylogger to detect ALGR and SHIFT keystrokes and adding different keyboard layout to the program.
