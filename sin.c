#include <stdio.h>
#include <math.h>       //importing math library

int main(void)
{
    double input, output;

    printf("Enter a number between 0 and 1 (non inclusive) : ");
    scanf("%lf", &input);  //taking in the input

    if ( (input>0) && (input<1) )   //checking if input is valid
    {
        output=sin(input);          //calculating the value of sine, and assigning value to output

        printf("sin(%lf) = %lf", input, output);        //printing the output

        return 0;
    }

    else
    {
        printf("Invalid input (must be between 0 and 1 (non inclusive))");    //error message in case of invalid input
        return 0;
    }
}