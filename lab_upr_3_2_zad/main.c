#include <stdio.h>
#include <stdlib.h>

//Да се прочете от клавиатурата едно целочислено число и да се изведе на екрана съобщение, ако остатъкът от делението му с 8 е по-голям от 4.

int main()
{
    int a;
    printf("Enter the number: ");

    scanf("%d", &a);

    if(a%8>4)
    {
        printf("%d % 8 is bigger than 4");
    }
    else if(a%8<4)
    {
        printf("%d % 8 is smaller than 4");
    }
    else
    {
        printf("%d %8 is equal to 4");
    }
    return 0;
}
