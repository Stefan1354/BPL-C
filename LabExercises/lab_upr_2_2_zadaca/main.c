#include <stdio.h>
#include <stdlib.h>


//2.Da se napise programa na C, koqto na 2 stoinosti, vavedeni ot klaviaturata, shte razmeni mestata.
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a,&b);

    //a=5, b=3
    a+=b; //a=8 b=3
    b=a-b; //a=8 b=5
    a-=b;  //a=3 b=5
    printf("a=%d,b=%d",a,b);
    return 0;
}
