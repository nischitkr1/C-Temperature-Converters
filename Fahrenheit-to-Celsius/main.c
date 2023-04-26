// fahrenheit to celsius converter
#include <stdio.h>

int main()
{
    // variables to store values in float
    float fahrenheit, celsius;
    // print a message as title of the program
    printf("Fahrenheit to Celsius Converter\n");
    // input a float value as the fahrenheit
    printf("Enter Fahrenheit: ");
    // store the value in 'fahrenheit' variable
    scanf("%f", &fahrenheit);
    // define 'celsius' variable as the formula
    celsius = (fahrenheit - 32) * 5 / 9;
    // print the value of 'celsius' variable
    printf("Celsius: %f", celsius);
    return 0;
}
