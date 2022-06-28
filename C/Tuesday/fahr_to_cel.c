/* Convertir de Fahrenheit a Celsius */
#include <stdio.h>

int main(void)
{
    float fahr = 90.2; //valor en Fahrenheit
    float cels = 0; //valor en Celsius

    /* Convertir con la ecuación C = (5/9)(F - 32) */
    cels = (5.0/9.0) * (fahr-32.0);
    printf("%.1f grados Fahrenheit son equivalentes a %.1f grados Celsius\n", fahr, cels);

    return 0;
}
