#include <stdio.h>
#include <stdlib.h>

//8.Басейн с обем V има две тръби от които се пълни. Всяка тръба има
//определен дебит (литрите вода минаващи през една тръба за един час).
//Работникът пуска тръбите едновременно и излиза за N часа.
//Напишете програма, която изкарва състоянието на басейна, в момента, когато работникът се върне.


int main()
{
    int vol = 500;
    int t1 = 40;
    int t2 = 50;
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = t1 * n + t2 * n;
    if(sum <= vol){
        printf("The pool has %d out of %d liters water in it", sum, vol);
    }
    else{
        printf("The pool is overflowing");
    }
    return 0;
}
