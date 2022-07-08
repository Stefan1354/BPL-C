#include <stdio.h>
#include <stdlib.h>


//2. Write a program that will exchange the places of 2 values entered from the keyboard

int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    //a=5, b=3
    a += b; //a=8 b=3
    b = a - b; //a=8 b=5
    a -= b;  //a=3 b=5
    printf("a = %d,b = %d", a, b);
    return 0;
}
