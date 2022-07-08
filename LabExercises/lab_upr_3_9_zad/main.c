//Да се напише програма, която прочита от клавиатурата две реални числа и
//извежда стойностите на фукция f(x) = x*x-4 за всички стойности в дадения интервал.
//Стъпката на обхождане е 0.01.

#include <stdio.h>
#include <stdlib.h>

//1 nacin

int main()
{
    double first;
    scanf("%lf", &first);
    double second;
    scanf("%lf", &second);

    if (first>second)
    {
	double a = first;
	first = second;
	second = a;
    }
    if (first==second)
    {
	return 1;
    }

//   for (double i = first+0.01; i < second; i+=0.01)
     for (double i=first; i<=second; i+=0.01)
	{
	    double num = i * i - 4;
	    printf("%.2lf\n", num);
	}
    return 0;
}


//2 nacin

int main()
{
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    if (a<b) {
        for (float i=a; i<=b; i+=0.01)
        {
            float exp;
            exp = i*i - 4;
            printf("\nf(%f) = %f*%f - 4 = %f", i, i, i, exp);
        }
    }
    return 0;
}
