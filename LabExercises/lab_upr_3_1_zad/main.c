#include <stdio.h>
#include <stdlib.h>

//Да се прочетат от клавиатурата 3 числа и да се изведе на екрана най-малкото от тях.

//1 nacin

int main()
{
    int a, b, c, min;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    min = a;
    if (b<min){
        min = b;
    }
    if(c<min){
        min = c;
    }

    printf("%d is the smallest number ", min);

    return 0;
}


//2 nacin

int main()
{
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   if (a<b && a<c) {
       printf("%d is min", a);
   }
   else if (b<a && b<c) {
       printf("%d is min", b);
   }
   else if (c<a && c<b) {
       printf("%d is min", c);
   }
   else
       printf("No min number");
   return 0;
}
