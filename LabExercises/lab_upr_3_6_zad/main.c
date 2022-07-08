#include <stdio.h>
#include <stdlib.h>

//Да се напише програма, която прочита от клавиатурата две числа и извежда сумата на четните числа и произведението на нечетните,
//които се намират между тези две числа.

int main(){

int a, b;
printf("Enter a,b: ");
int sum = 0;
int mult = 1;
scanf("%d %d", &a, &b);

if (a>b){
    for (int i=a-1; i>b; i--){
        if (i%2==0){
            sum += i;
        }
        else
            {
                 mult *= i;
            }
        }
    }

if (a<b){
    for (int i=a+1; i<b; i++){
        if (i%2==0)
        {
            sum += i;
        }
        else
        {
            mult *= i;
        }
    }
}

printf("Sum of even number is %d\n", sum);
printf("Mult of odd number is %d\n", mult);
return 0;
}
