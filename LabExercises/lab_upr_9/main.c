#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1.

//int main() {
//    char s1[10] = "Hello ";
//    char s2[9] = "World ";
//    int result;
//    int len;
//
//    printf("\n");
//    printf("%s", s1);
//    printf("%s", s2);
//
//    printf("\n\n");
//
//    strcpy(s1, s2);
//    printf(s1);
//    printf("\n");
//    printf(s2);
//
//    printf("\n\n");
//
//    strcat(s1, s2);
//    printf(s1);
//    printf("\n");
//    printf(s2);
//
//    printf("\n\n");
//
//    len = strlen(s1);
//    printf("%d", len);
//
//    printf("\n\n");
//
//    result = strcmp(s1, s2);
//    printf("%d", result);
//
//    return 0;
//}


//2.Напишете програма, която намира броя на думите в низ.

//int main() {
//    printf("Enter words: ");
//    char str[80];
//    scanf("%c",&str);
//    int cnt = 1;
//    gets(str);
//    int i;
//    for (i = 0; str[i]; i++) {
//        if (str[i] == ' ')
//            cnt++;
//    }
//
//    printf("%d", cnt);
//
//    return 0;
//}

///* C Program to Count Total Number of Words in a String */
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//  	char str[100];
//  	int i, totalwords;
//  	totalwords = 1;
//
//  	printf("Please Enter any String : ");
//  	gets(str);
//
//  	for(i = 0; str[i] != '\0'; i++)
//	{
//		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
//		{
//			totalwords++;
//		}
//	}
//	printf("\nThe Total Number of Words in this String %s  = %d", str, totalwords);
//
//  	return 0;
//}



/*
 * C program to find the length of a string without using the
 * built-in function
 */

//void main()
//{
//    char string[50];
//    int i, length = 0;
//
//    printf("Enter a string \n");
//    gets(string);
//    /*  keep going through each character of the string till its end */
//    for (i = 0; string[i] != '\0'; i++)
//    {
//        length++;
//    }
//    //printf("The length of a string is the number of characters in it \n");
//    printf("So, the length of %s = %d\n", string, length);
//}

//4.Da se napise programa koqto sravnqva dva niza.

//void func(char str1[10], char str2[10]) {
//    if (strcmp(str1, str2) == 0)
//        printf("Strings are same!");
//    else
//        printf("Strings are not same!");
//
//    return;
//
//}
//
//int main() {
//    int s1[10], s2[10];
//    printf("Enter first string: ");
//    scanf("%s", &s1);
//    printf("Enter second string: ");
//    scanf("%s", &s2);
//
//    func(s1, s2);
//
//    return 0;
//}


//5.Da se napise programa koqto namira dulzinata na niz.

//char func(char string[20]) {
//    int len = strlen(string);
//    return len;
//}
//
//int main() {
//    char string[40] = "Hello World";
//    int result = func(string);
//    printf("%d", result);
//
//    return 0;
//}
