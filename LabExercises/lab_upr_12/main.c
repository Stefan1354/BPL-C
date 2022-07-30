#include <stdio.h>
#include <stdlib.h>

//1. Demonstraciq na rabota na funkciite fprintf i fscanf.
//Da se napishe programa s izpolzvane na funkciq fprintf, zapisvat se edno cqlo chislo, drobno chislo i edin niz.
//Zatvarqme faila otvarqme go v rejim na chetene i otvarqme faila i cheteme zapisanoto s fscanf.

//int main()
//{
//    int a = 5;
//    double b = 4.3;
//    char c[10] = "hello";
//
//    FILE *fp;
//    fp = fopen("myfile", "w");
//    if (fp == NULL)
//    {
//        printf("Error opening file");
//        exit(1);
//    }
//    fprintf(fp, "%d %.2lf %s", a, b, c);
//    fclose(fp);
//
//    fp = fopen("myfile", "r");
//    if (fp == NULL)
//    {
//        printf("Error opening file");
//        exit(1);
//    }
//    fscanf(fp, "%d %lf %s", &a, &b, c);
//    fclose(fp);
//    return 0;
//}

//2.Imame masiv s 10 elementa(drobni chisla). Inicializirame masiva s nqkakvi stoinosti, zapisvame vuv fail masiva,
//izpolzvaiki funkciqta fwrite, sled koeto potrebitelqt vavejda koi element ot toji masiv da se prochete i go printirame na ekrana.

#define SIZE 10

int main()
{
    float array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter %d. element: ", i + 1);
        scanf("%f", &array[i]);
    }

    FILE *fp;
    fp = fopen("file", "wb");
    if (fp == NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    if (fwrite(array, sizeof(array), 1, fp) != 1)
    {
        printf("Writing Error");
        exit(2);
    }
    fclose(fp);

    int n;
    float a;
    printf("Enter the ordinal number of the element: ");
    scanf("%d", &n);
    //fseek(fp, (n-1)*sizeof(float), SEEK_SET);
    //fread(&a, sizeof(float), 1, fp);

    fp = fopen("file", "rb");
    fseek(fp, (n-1)*sizeof(float), SEEK_SET);
    fread(&a, sizeof(float), 1, fp);
    printf("%g", a);
    fclose(fp);

    return 0;
}


