#include <stdio.h>
#include <stdlib.h>

//1. Write a C program to find the area of a rectangle. The lengths of the sides of the rectangle should be drawn from the keyboard.

int main()
{
    int a,b;
    int area;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    area = a * b;
    printf("%d*%d=%d", a, b, area);
    return 0;
}
