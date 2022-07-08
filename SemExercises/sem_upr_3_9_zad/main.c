#include <stdio.h>
#include <stdlib.h>

//9.От лозе с площ X квадратни метри се заделя 40% от реколтата за
//производство на вино. От 1 кв.м лозе се изкарват Y килограма
//грозде. За 1 литър вино са нужни 2,5 кг. грозде. Желаното
//количество вино за продан е Z литра.
//Напишете програма, която пресмята колко вино може да се
//произведе и дали това количество е достатъчно. Ако е достатъчно,
//остатъкът се разделя по равно между работниците на лозето.



int main()
{
    int vol;
    float q ;
    float grape;
    float wine;
    int goal;
    float left_over = 0;


    printf("Enter volume: ");
    scanf("%d", &vol);

    printf("Enter grape per square meter: ");
    scanf("%f", &grape);

    printf("Enter goal: ");
    scanf("%d", &goal);

    wine = (vol*grape)/2.5;
    q = (vol*grape)*0.4;


    if(wine>=goal){
        left_over = wine - goal;
        printf("Left over wine is %f", left_over);
    }
    else{
        printf("Not enough wine");
    }
    return 0;
}
