#include <stdio.h>
#include <stdlib.h>

//8.Напишете конвертор от левове в долари, евро и паундове.

int main()
{
    float lev;
    float euro;
    float dollar;
    float pound;

    printf("Enter lev: ");
    scanf("%f", &lev);

    euro = lev * 0.31;
    printf("Lev in evro is %.2f: \n", euro);

    dolar= lev * 0.58;
    printf("Lev in dollar is %.2f: \n", dollar);

    pound = lev * 0.43;
    printf("Lev in pound is %.2f: \n", pound);


    return 0;
}
