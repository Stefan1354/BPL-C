#include <stdio.h>
#include <stdlib.h>


//7.Студент трябва да пропътува n километра. Той има избор измежду три
//вида транспорт:
//● Такси. Начална такса: 0.70 лв. Дневна тарифа: 0.79 лв. / км. Нощна
//тарифа: 0.90 лв. / км.
//● Автобус. Дневна / нощна тарифа: 0.09 лв. / км. Може да се използва за
//разстояния минимум 20 км.
//● Влак. Дневна / нощна тарифа: 0.06 лв. / км. Може да се използва за
//разстояния минимум 100 км.

//Напишете програма, която чете броя километри n и период от деня (ден-D или
//нощ-N), въведени от потребителя, и изчислява цената на най-евтиния
//транспорт.


void lowestPrice(int km, char time)
{
    float train, taxi, bus;
    train = 0;
    taxi = 0;
    bus = 0;

    if (km > 100)
    {
        train = km * 0.06;
    }

    if (km > 20)
    {
        bus = km * 0.09;
    }

    taxi = km * 0.70;
    if (time == "D")
    {
        taxi += km * 0.79;
    }
    else
    {
        taxi += km * 0.90;
    }

    float min;
    min = taxi;
    if (train < min && train != 0)
    {
        min = train;
    }
    if (bus < min && bus != 0)
    {
        min = bus;
    }

    printf("Taxi :%f\n", taxi);
    printf("train :%f\n", train);
    printf("bus :%f\n", bus);
    printf("Cheapest price of travelling: %f", min);
}

int main()
{
    int km;
    char time;

    printf("Km = ");
    scanf("%d", &km);

    printf("\ntime (D or N) ");
    scanf(" %c", &time);

    lowestPrice(km, time);

    return 0;
}


//second way

int main()
{
    float km;
    char dn;
    float taxi, bus, train;
    printf("Enter kilometers: ");
    scanf("%f", &km);
    printf("Enter day/night: ");
    scanf(" %c", &dn);
    if(dn=='d'){
        taxi = 0.7 + 0.79 * km;
    }
    else if(dn=='n'){
        taxi = 0.7 + 0.9 * km;
    }
    else
        printf("Invalid input");

    if(km > 20 && km < 100){
        bus = 0.09 * km;
    }
    else if(km > 100){
        bus = 0.09 * km;
        train = 0.06 * km;
    }


    if(km < 20){
        printf("The cheapest transport is taxi for %.2f", taxi);
    }
    else if(km > 20 && km < 100){
        printf("The cheapest transport is bus for %.2f", bus);
    }
    else if(km > 100)
        printf("The cheapest transport is train for %.2f", train);

//third way

    float n;
    char c;
    printf("Enter kilom: ");
    scanf("%f", &n);

    printf("Enter period: ");
    scanf(" %c", &c);

    if(c == 'D' && n >= 20){
        printf("Taxi: %f\n", 0.70 + n * 0.79);
        printf("Bus: %f\n", n * 0.09);

    }
    if(c=='D' && n >=100){
        printf("Train: %f\n", n * 0.06);

    }
    if(c=='N' && n >= 20){
        printf("Taxi: %f\n", 0.70 + n * 0.79);
        printf("Bus: %f\n", n * 0.09);
    }
    if(c=='N' && n >= 100){
        printf("Train: %f\n", n * 0.06);

    }
