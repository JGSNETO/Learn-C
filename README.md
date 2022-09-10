# Learn-C

## Basics concepts

- Created in 1970 by Dennis Ritchie
- General purpose language
- The main program is submited into the process of compilation and linkedition, where each source-file is separely compiled, as result we have one file "object" (.obj).
- In linkedition(all obj-files and librarys, are processed together) -> .exe.

Pros:
- High Portability; 
- High modularization;
- Execution start in main();
- {} -> Control flow statement;
- ; -> End of each command line;
- Case senstitive; 
- // or /**/ -> Comment;

## Macros

- Macros are readly reconized by compiler;
- #DEFINE -> Define macros, without ; at the end;
- #define NOME "fulano de tal"

Compile/Linkedition process

1. Source code (.c)
| - Pre-processing of compilation
2. Source code + include files
| - Compilation
3. Obj-file(.obj)
| - Pre-processing of linkedition
4. Set of obj-files + library
| - Linkedition
5. Executable program (.exe)

Include command

- include <> -> Search file in include directory (c:\user\INCLUDE) (Common library of c)
- include "" -> Search the file in the work directory

## Function prototype 

- Define the quantity and type of arguments defined in the beginning of the project;
- Strong type verification;
- Syntax: type function_name(type arg1, type arg2);
- Function without arguments: void;

## Data types

- Char: caracter : 8 bits : %c
- Unsigned char  : 8 bits : %c
- Signed char    : 8 bits : %c
- Int: Integer : 16 bits : %i or %d
- Unsigned int : 16 bits : %u
- Signed int   : 16 bit  : %i or %h
- Short int    : 16 bits : %hi or %hd
- Unsigned short int : 16 bits : %hu
- Signed short int   : 16 bits : %hi or %hd
- Long int : 32 bits : %li or %ld
- Signed long int : 32 bit : %li or %ld
- Unsigned long int : 32 bit : %lu
- Float : 32 bits: %f, %e or %g 
- Double: double : 64 bits : %lf, %le or %lg
- Long double : 80 bits : %Lf

## Access modifiers

- Conts: Can not be modified during the program : const int pi = 3.14
- Volatile: The var value can change during the program, from a non specified source in the program
- Can be used together: Changes for external sources

## Var declaration

- Type var_name
- int arg1, arg2, arg3;
- Local variables: visible only inside the scope
- Globa: Visible to the whole program

## Class specifiers 
