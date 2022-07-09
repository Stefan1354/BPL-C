/* 1) Function that calculates the sum of two numbers*/

#include <stdio.h>
#include <stdlib.h>

//int Sum(int, int);
//
//int Sum(int a, int b)
//{
//    int result;
//    result = a + b;
//    return result;
//}
//
//int main()
//{
//    int x, y, res;
//    printf("Enter two integer numbers: ");
//    scanf("%d %d", &x, &y);
//    res = Sum(x, y);
//    printf("Result is: %d", res);
//    //printf("%d", Sum(x, y));   edin od printoevete zakomentarisi ka runnues
//
//    return 0;
//}

//2 nacin
//#include <stdio.h>
//
//int Sum (int a, int b)
//{
//    int suma;
//    suma=a+b;
//    return suma;
//}
//
//int main()
//{
//int x,y,result;
//printf("Enter a and b: ");
//scanf("%d",&x);
//scanf("%d",&y);
//result=Sum(x,y);
//printf("The sum of %d and %d is %d",x,y,result);
//}


/* 2) */

//#include <stdio.h>
//#include <stdlib.h>
//
//void f(int x)
//{
//    x = 200;
//    printf("in f x = %d", x);
//}
//
//int main()
//{
//    int a = 5;
//    f(a);
//    printf("\n");
//    printf("in main a = %d", a);
//
//    return 0;
//}


/* 3) Function that calculates the area of a circle*/

//#include <stdio.h>
//#include <stdlib.h>
//
//#define PI 3.1415926535897932384626433
//
//double Area(int r)
//{
//    double area;
//    area = r*r*PI;
//    return area;
//}
//
//int main()
//{
//    int rad;
//    double area;
//    printf("Enter radius of circle: ");
//    scanf("%d", &rad);
//    area = Area(rad);
//    printf("Area of a circle is %.2lf", area);
//
//    return 0;
//}*/


/* 4) Input an integer which is a code of a figure:
      1 - square
      2 - rectangle
      3 - rectangular triangle
      4 - circle
      Display the type and area of the figure for the entered
      code that corresponds to that figure with switch case.
       */

//#include <stdio.h>
//#include <stdlib.h>
//
//#define PI 3.14159
//
//int Square(int a)
//{
//    float s;
//    s = a*a;
//
//    return s;
//}
//
//int Rectangle(int a, int b)
//{
//    float s;
//    s = a*b;
//
//    return s;
//}
//
//int RectangularTriangle(int a, int b)
//{
//    float s;
//    s = a*b/2;
//
//    return s;
//}
//
//float Circle(int r)
//{
//    float s;
//    s = r*r*PI;
//
//    return s;
//}
//
//int main()
//{
//    int n;
//    int a, b, r;
//    float s;
//    printf("Enter number [1, 2, 3, 4]: ");
//    scanf("%d", &n);
//
//    switch(n)
//    {
//    case 1:
//        printf("Enter a: ");
//        scanf("%d", &a);
//        s = a*a;
//        s = Square(a);
//        printf("%.2f", s);
//        break;
//    case 2:
//        printf("Enter a, b: ");
//        scanf("%d %d", &a, &b);
//        s = a*b;
//        s = Rectangle(a, b);
//        printf("%.2f", s);
//        break;
//    case 3:
//        printf("Enter a, b: ");
//        scanf("%d %d", &a, &b);
//        s = a*b/2;
//        s = RectangularTriangle(a, b);
//        printf("%.2f", s);
//        break;
//    case 4:
//        printf("Enter r: ");
//        scanf("%d", &r);
//        s = r*r*PI;
//        s = Circle(r);
//        printf("%.2f", s);
//        break;
//    default:
//        printf("Invalid figure");
//    }
//
//    return 0;
//}


/* 5) Function that checks whether the number is even or odd*/

#include <stdio.h>
#include <stdlib.h>

//void EvenOdd(int n)
//{
//    if (n%2==0) {
//        printf("Even number");
//    }
//    else {
//        printf("Odd number");
//    }
//
//}
//
//int main()
//{
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//    EvenOdd(n);
//
//    return 0;
//}



//6. Convert decimal to binary.

//int main(){
//int a[10],n,i;
//printf("Enter the number to convert: ");
//scanf("%d",&n);
//for(i=0;n>0;i++)
//{
//    a[i]=n%2;
//    n=n/2;
//}
//printf("\nBinary of Given Number is=");
//for(i=i-1;i>=0;i--)
//{
//    printf("%d",a[i]);
//}
//return 0;
//}

// convert binary to decimal

//#include <stdio.h>
//#include <math.h>

// function prototype
//int convert(long long);
//
//int main() {
//  long long n;
//  printf("Enter a binary number: ");
//  scanf("%lld", &n);
//  printf("%lld in binary = %d in decimal", n, convert(n));
//  return 0;
//}
//
//// function definition
//int convert(long long n) {
//  int dec = 0, i = 0, rem;
//
//  while (n!=0) {
//    rem = n % 10;
//    n /= 10;
//    dec += rem * pow(2, i);
//    ++i;
//  }
//
//  return dec;
//}



// convert decimal to binary

#include <stdio.h>
#include <math.h>

//long long convert(int);
//
//int main() {
//  int n, bin;
//  printf("Enter a decimal number: ");
//  scanf("%d", &n);
//  bin = convert(n);
//  printf("%d in decimal =  %lld in binary", n, bin);
//  return 0;
//}
//
//long long convert(int n) {
//  long long bin = 0;
//  int rem, i = 1;
//
//  while (n!=0) {
//    rem = n % 2;
//    n /= 2;
//    bin += rem * i;
//    i *= 10;
//  }
//
//  return bin;
//}
