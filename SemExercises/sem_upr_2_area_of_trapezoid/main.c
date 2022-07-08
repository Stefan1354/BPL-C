#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, h;
    int area;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Enter h: ");
    scanf("%d", &h);
    area=((a+b)/2)*h;
    printf("The area of the trapezoide is :%d", area);
    return 0;
}
