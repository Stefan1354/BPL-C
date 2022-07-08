#include <stdio.h>
#include <stdlib.h>

//Да се напише програма, която прочита от клавиатурата едно цяло число и изкарва числова пирамида:
//1
//
//1 2
//
//1 2 3
//
//.....

int main()
{
    int a;
    scanf("%d",&a);

    for (int i=1; i<=a; i++)
    {
        for (int j=0; j<i; j++)
        {
            printf("%d ",i);
        }
    printf("\n");
  }
return 0;
}
