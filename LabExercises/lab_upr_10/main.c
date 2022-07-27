#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1.Programa, koqto zadelya dinamichno pamet za masiv ot simvoli, prochita niza i tursi purviq interval, printira ostatuka ot niza na ekrana

//int main()
//{
//    char *str, ws = ' ';
//    str = (char*) malloc (100 * sizeof(char));
//    char *str = (char*) malloc (100 * sizeof(char));
//    printf("Input string: ");
//    scanf("%[^\n]s", str);
//    int i=0;
//    while (i < strlen(str))
//    {
//        if (str[i] == ws)
//        {
//            while (i < strlen(str))
//            {
//                printf("%c", str[i+1]);
//                i++;
//            }
//        }
//        else
//        {
//            i++;
//        }
//    }
//    return 0;
//}


//2. Printirayte niz otzad napred.

//int main()
//{
//    char str[50];
//    printf("Input string: ");
//    scanf("%s", str);
//
//    int i;
//    for (i = 0; str[i]; i++)
//    {
//        printf("%c", str[i]);
//    }
//
//    printf("\n");k
//
//    for (i = strlen(str) - 1 ; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//
//    return 0;
//}


//3. Programa koqto printira broq na tochkite, zapetaite i intervalite ot stringa.

//int main()
//{
//    char str[50];
//    printf("Input string: ");
//    scanf("%[^\n]s", str);
//
//    int pnt = 0, com = 0, spc = 0;
//
//    int i = 0;
//    while (i < strlen(str))
//    {
//        if (str[i] == '.')
//        {
//            pnt++;
//        }
//
//
//        if (str[i] == ',')
//        {
//            com++;
//        }
//
//
//        if (str[i] == ' ')
//        {
//            spc++;
//        }
//
//        i++;
//
//    }
//
//    printf("Points: %d\n", pnt);
//    printf("Commas: %d\n", com);
//    printf("Spaces: %d", spc);
//
//
//    return 0;
//}

//4.
#define MAX 150
#define NL printf("\n")
int main()
{
    char bigString[MAX];
    char str[MAX];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++)
    {
        bigString[i] = str[i];
    }
    while(strcmp(str, "quit") != 0)
    {
        if(strlen(str) + strlen(bigString) < MAX)
        {
            strcat(bigString, str);
            scanf("%s", str);
        }
        else
        {
            break;
        }
    }
    NL;
    printf("%s", bigString);
    return 0;
}
