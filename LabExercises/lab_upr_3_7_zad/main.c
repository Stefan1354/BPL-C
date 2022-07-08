#include <stdio.h>
#include <stdlib.h>

//Да се напише програма, при която се въвеждат две числа N и К. След това се въвеждат още N числа и се извежда броят на числата,
//които са по-малки от K и не се делят на 3.

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int k;
    printf("Enter K: ");
    scanf("%d", &k);
    int new_num;
    int count = 0;
	
    for (int i=0; i<n; i++)
    {
         printf("Enter N numbers: ");
	 scanf("%d", &new_num);
	 if (new_num < k && new_num % 3 != 0)
	 {
		count++;
	 }
     }
     printf("\nNumber of numbers which are smaller than K and are not divisible by 3 is %d.", count);
    return 0;
}
