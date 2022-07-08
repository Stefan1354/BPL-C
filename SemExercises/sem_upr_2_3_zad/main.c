#include <stdio.h>
#include <stdlib.h>

//3.Напишете програма, която отпечатва рамка с размер 10х5 изградена от знак, въведен от потребителя.

int main()
{
    char symbol;
    printf("Enter a character: ");
	scanf("%c", &symbol);

	for (int i=0; i<10; i++)
	{
		printf("%c", symbol);
	}
	printf("\n");
	for (int b=0; b<3; b++)
	{
		for (int i=0; i<10; i++)
		{
			if (i==0 || i==9)
			{
				printf("%c", symbol);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i=0; i<10; i++)
	{
		printf("%c", symbol);
	}
    return 0;
}
