#include <stdio.h>
#include <stdlib.h>

//4.Направете програма, която рисува триъгълник с въведен знак от
//потребителя.

int main()
{
char c;
    scanf("%c", &c);
    printf("\n");

    for(int i=1; i<=5; i++)
    {
        for(int space=0; space<=5-i; space++)
        {
            printf("   ");
        }

        for(int j=1; j<=i*2-1; j++)
        {

            if (j==1 || (j==i*2-1) || i==5 )
            {
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }

    return 0;
}
