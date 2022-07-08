#include <stdio.h>
#include <stdlib.h>

/*16.Иван е програмист в американска компания и работи от вкъщи средно N дни в месеца като изкарва средно по M долара на ден.
В края на годината Иван получава бонус, който е равен на 2.5 месечни заплати. От спечеленото през годината му се удържат 25% данъци.
Напишете програма, която да пресмята, колко е чистата средна печалба на Иван на ден в лева, тъй като той харчи изкараното в България.
Приема се, че в годината има точно 365 дни. Курсът на долара спрямо лева ще се чете от конзолата. */

int main()
{
    int N, M;
    float earn;
    float avg_profit_per_day, in_levs;

    printf("How many days a month he works? ");
    scanf("%d", &N);
    printf("How much he earns per day? ");
    scanf("%d", &M);

    earn = M * N * 12;
    avg_profit_per_day = (earn - earn*25/100) / 365;
    in_levs = avg_profit_per_day * 1.72;

    printf("Average profit per days in levs is: %f", in_levs);

    return 0;
}

