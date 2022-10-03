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
- int arg1=10, arg2=20, arg3;
- Local variables: visible only inside the scope
- Globa: Visible to the whole program

## Class specifiers 
- Extern, Staic, register, auto;
- Specifier modifier type var;

- Extern: Solve the duplicity of global var different programs. You declare all the global var in one file, and in the others you repeat using 'extern';
- extern int var1;

- Static: Permanent var. Despite not be reconized outsite function or files, keep their values between calls.
- static int var=10;

- Auto: Classifies var type automatically. Cannot be used with global var.
- auto var = value;

- Register: The access to var it is the most fast possible. Can not be used with global var. 

## Arithmetic 

- + 
- -
- *
- /
- %

- Reduced expressions 
- x += 5 -> x = x + 5
- x -= 2.5 -> x = x - 2.5
- x *= 2.5 -> x = x*2
- x /= 7 -> x = x/2
- e %= 3 -> x  = x/3

- Logical operator
- ==
- >
- <
- >=
- <=
- !=
- && 
- ||
- !

### Conditional operations

- condition ? expression1 : expression 2
- z = (a>b) ? a:b;  

### Cast operations 

- var = (new_type) expression;
- var1 = (int) var2;

### I/O Commands

- printf("", arg_list);
- scanf("%x", &var);
- getchar()
- getch() getche()
- gets()
- puts()
- putchar()

### Decision commands

- IF:
if(condition){ 
...
}else{
...
}

- Switch:

switch(var_tested){
case value_1:{
...
breal;
}
case value_2:{
...
break;
}
default{
...
  }
}

- While

while(condition){
...
}

- For 

for(condition){
...
}

### Command Var

- Break: Finish the process of loop structures or the execution of one switch.
- Return: Output mechanisms, returning one value for the function. 
- Continue: Finish the current iteraction and jump to the next iteraction.
- Goto: Change the flow of the program. 
- Exit: End the program. 

### Vector and Matrices 

- Vector: One-dimensional matrices. 
- General Syntax: type var_name[size_1][size_2]..[size_n]
- E.G: int vector[5] = {1,2,3,4,5};
- E.G: char text[2][2] = {'a', 'b', 'c', 'd'};

### Register 

- Register is an heterogeneous structure, that means, one colection of variables that can assume different types of data. All the var are grouped under
one same name. E.G: struct. 

### Typedef

- Typedef define one new name to a new data or structure already existing. 

### String Manipulation 

- String: A vector of char. 
- Last element = '\0'.
- Syntax: char var_type[size];

- Basic functions to manipulate strings
- gets(var_name): Lê string do teclado. 
- printf(string): Prints the string.
- strcpy(string_destiny, string_origin): Copy the origin string into the destiny string.
- strcat(string_destiny, string_origin): Concatenate the origin string with the destiny string. 
- strlen(string): Return string length.
- strcmp(str1, str2): Compare two strings. 

### Functions

- Functions are structures that allow the user separate the program in construction blocks. 
- Sytax:

type function_name(arg_list){
...
}

### Passing parameter by value

In passing parameter by value, the arg values are copied into formal parameter. Any change in the value on those parameters, will not change the value on the original variables. 

### Passing parameter by reference

In this case, the changes peformed into the formal parameter will change the value on the original variable. In this case, the formal parameter must be declare as 
pointers. 

### Recursion 

- When a function call himself or another function inside herself.
- Consumes more memory and takes more time. 

### Main function

- The main function can have two formal parameters pre-defined.
- argc and argv: Provide access to command line from the OS thoughout the program was called. 
- type main(int argc, char *argv[]);
- Argc(Argument Count): Integer and represents the number of word typed on command line. The name of the program is allways the first argument. Indicates
how many elements we have in argv.
- Argv(Argument values): Pointer to string matrice. Each string of this matrix is one of the parameters on command line. argv[0] always points to program name. 

### Pointers





