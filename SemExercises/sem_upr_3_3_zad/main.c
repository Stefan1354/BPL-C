#include <stdio.h>
#include <stdlib.h>

//3. Да се напише програма, която чете 3 числа и отпечатва дали са еднакви
//(yes / no).

int main()
{
    int a, b, c;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Are the numbers same?\n");
    if (a==b && b==c && a==c)
        printf("Yes");
    else
        printf("No");
    return 0;
}

