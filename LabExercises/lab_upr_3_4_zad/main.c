#include <stdio.h>
#include <stdlib.h>

//Да се прочете от клавиатурата едно число от 1 до 7 и да се изведе на екрана кой ден от седмицата съответства на това число.
//Да се предвиди случай, когато не е въведено валидно число.

int main()
{
   int a;
   scanf("%d", &a);

   switch(a)
   {
   case 1:
       printf("Monday");
       break;
   case 2:
       printf("Tuesday");
       break;
   case 3:
       printf("Wednesday");
       break;
   case 4:
       printf("Thursday");
       break;
   case 5:
       printf("Friday");
       break;
   case 6:
       printf("Saturday");
       break;
   case 7:
       printf("Sunday");
       break;

   default:
       printf("Error! Wrong day");
   }

   return 0;
}
