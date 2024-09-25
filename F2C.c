#include <stdio.h>

int main(void) 
{
    printf("Please enter a temperature value in Fahrenheit: ");

    float fFahrenheit;
    scanf("%f", &fFahrenheit);
    
    float fCelsius = (fFahrenheit - 32.0) * 5.0 / 9.0;
    printf("Temperature equivalent value in Celsius is: %.2f C. \n", fCelsius);

    return 0;
}
