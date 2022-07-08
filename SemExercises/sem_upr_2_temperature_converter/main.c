#include <stdio.h>
#include <stdlib.h>

//6.Напишете програма, която чете градуси по скалата на Целзий и ги превръща в градуси по Фаренхайт.

int main()
{
   float celsius,fahrenheit;
   printf("Enter temperature in celsius: ");
   scanf("%f", &celsius);
   fahrenheit=(celsius*1.8)+32;
   printf("%.2f Celsius = %.2f Fahrenheit",celsius,fahrenheit);
return 0;
}
