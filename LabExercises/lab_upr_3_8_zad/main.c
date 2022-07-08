#include <stdio.h>
#include <stdlib.h>

//Да се напише програма, която при въвеждането на произволен брой числа извежда сборът им.
//За край на въвеждането се приема въвеждането на 0.

//1 nacin

int main()
{
	double number,sum=0;
	do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum+=number;
    }
    while(number!=0);
    printf("Sum = %.2lf",sum);
	return 0;
}

//2 nacin

int main()
{
    int n;
    int sum=0;
    while (n!=0) {
        scanf("%d", &n);
        sum+=n;
    }
    printf("Sum is %d", sum);

    return 0;
}
