#include <stdio.h>
#include <stdlib.h>
//#include "func1.h"

//1.Напишете функция, която получава две числа и връща по – голямото от
//тях. Направете същото и за по - малкото. Демонстрирайте работата на
//функциите като четете множество числа до въвеждане на 0 и изкарате
//най – голямото въведено и най-малкото въведено число.


//int main()
//{
//    int n1,n2;
//    printf("Enter num 1:");
//    scanf("%d",&n1);
//    printf("Enter num 2:");
//    scanf("%d",&n2);
//    printf("Bigger is %d\n",ReturnBig(n1,n2));
//    printf("Enter num 1:");
//    scanf("%d",&n1);
//    printf("Enter num 2:");
//    scanf("%d",&n2);
//    printf("Smaller is %d\n",ReturnSmall(n1,n2));
//
//    return 0;
//}
//int ReturnBig(int a,int b)
//{
//    if(a>b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//
//int ReturnSmall(int a,int b)
//{
//    if(a<b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}


//second way

void func()
{
    int i=0, f=1, count = 0, max=0;
    int n;

    while(f!=0)
    {   i++;
        printf("Enter %d. number: ", i);
        scanf("%d", &n);
        if(n == 0)
            break;
        else
            if(max<n)
                max=n;
    }   printf("Max  = %d", max);
}

int main()
{
    func();
    return 0;
}
