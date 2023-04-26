// celsius to fahrenheit converter
#include <stdio.h>

int main()
{
    // variables to store values in float
    float celsius, fahrenheit;
    // print a message as title of the program
    printf("Celsius to Fahrenheit Converter\n");
    // input a float value as the celsius from the user
    printf("Enter Celsius: ");
    // store the value in 'celsius' variable
    scanf("%f", &celsius);
    // define 'fahrenheit' variable as the formula
    fahrenheit = (celsius * 9 / 5) + 32;
    // print the value of 'fahrenheit' variable
    printf("Fahrenheit: %f", fahrenheit);
    return 0;
}
