#include <stdio.h>
#include <stdlib.h>

//1.Napisete programa na C, koqto namira sumata na N elementa vavedeni ot potrebitelq.Za izpulnenieto na programata zadelete pametta
//dinamicno izpolzvaiki funkciite malloc ili calloc.


int main()
{
    int num,i,*ptr,sum=0;
    printf("Enter total number of elements: ");
    scanf("%d",&num);
    ptr=(int*)malloc(num*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory nor allocated.");
        return EXIT_FAILURE;
    }

    printf("Enter elements: \n");

    for(i=0;i<num;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum=%d",sum);
    free(ptr);

    return 0;
}
