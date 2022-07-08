#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//7.Напишете конвертор от градуси в радиани.

int main()
{
    float deg;
    float radian;

    printf("Enter degrees: ");
    scanf("%f", &deg);

    rad = deg*M_PI / 100;

    printf("Degrees to Radians Converter\n");
    printf("Degrees\t\Radians\n");
    printf("%.1f\t%f", deg, rad);
    return 0;
}
