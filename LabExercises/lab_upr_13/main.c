#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//// 1) Напишете програма , която използва функциите fputs  и fgets .
////Програмата чете 5 низа въведени от потребителя и ги записва във текстов файл с функция fputs.
////След това прочита информацията от файла чрез fgets  и го принтира на екрана.

int main()
{
   char str[10];
   int i;

   FILE *fp;
   fp = fopen("text", "w");
   if (fp == NULL)
   {
       printf("Error opening file");
       exit(1);
   }

   for (i=0; i<5; i++)
   {
       printf("Enter %d. string: ", i + 1);
       scanf("%s", str);
       strcat(str, "\n");
       fputs(str, fp);
   }
   fclose(fp);

   fp = fopen("text", "r");
   if (fp == NULL)
   {
       perror("Error reading file");
       exit(1);
   }

   for (i=0; i<5; i++)
   {
       if (fgets(str, 10, fp) != 0)
       {
           printf("%s", str);
       }
   }
   fclose(fp);

   return 0;
}


// 2)Програма, която записва във двоичен  файл 50 случайни числа.
//След това потребителя въвежда кое от тези числа иска да види на екрана.
//Използвайте функция fseek за достъп до конкретното число.

int main()
{
   int i, n, a;
   time_t t;

   srand((unsigned) time(&t));

   FILE *fp;
   fp = fopen("nums", "wb");
   if (fp == NULL)
   {
       printf("Error opening file");
       exit(1);
   }
   for (i=0; i<50; i++)
   {
       int val = rand() % 100 + 1;
       printf("%d ", val);
       fwrite(&val, sizeof(int), 1, fp);
   }
   fclose(fp);

   fp = fopen("nums", "rb");
   printf("\nEnter the ordinal number of the element: ");
   scanf("%d", &n);
   fseek(fp, (n-1)*sizeof(int), SEEK_SET);
   fread(&a, sizeof(int), 1, fp);
   printf("%d", a);
   fclose(fp);

   return 0;
}


// 3. Напишете програма, която намира броя на думите и изреченията във текстов файл.
//Програмата трябва да включва две потребителски функции едната намира броя думи,
//а другата намира броя изречения.
//И двете функции получават като аргумент файлов указател, асоцииран с файла от процеса на отварянето му.
//В main() извикайте двете функции и принтирайте резултата на екрана.

int words(FILE *fp);
int sentences(FILE *fp);

int main()
{
   int wrd, sent;
   FILE *fp;
   fp = fopen("loremipsum", "r");
   wrd = words(fp);
   sent = sentences(fp);
   printf("Words: %d", wrd);
   printf("\nSentences: %d", sent);
   fclose(fp);

   return 0;
}

int words(FILE *fptr)
{
   int wrd = 0;
   char buff[1000];

   fptr = fopen("loremipsum", "r");
   if(fptr == NULL)
   {
        printf("File does not exist or can not be opened.");
        exit(1);
   }
   while(fgets(buff, 1000, fptr) != NULL)
   {
       for (int i=0; i<1000; i++)
       {
           if(buff[i] == ' ' || buff[i] == '\n')
               wrd++;
       }
   }
   fclose(fptr);

   return wrd;
}

int sentences(FILE *fptr)
{
   int sent = 0;
   char buff[1000];

   fptr = fopen("loremipsum", "r");
   if(fptr == NULL)
   {
        printf("File does not exist or can not be opened.");
        exit(1);
   }
   while(fgets(buff, 1000, fptr) != NULL)
   {
       for (int i=0; i<1000; i++)
       {
           if(buff[i] == '.')
               sent++;
       }
   }
   fclose(fptr);

   return sent;
}

//// 4. В двоичен файл имате цяло число N и след него N на брой цели числа.
////Да се напише програма, която създава файла.
////Да се напише програма, която изкарва на екрана броя на четните и броя на нечетните  от така дадените N числа.
////Да се напише програма, която прочита така подадения масив от N елемента
////и изкарва в текстов файл сортирания във възходящ ред масив.


int main()
{
    FILE *fp;
    fp = fopen("binary", "wb");
    if (fp == NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    int n, i;
    printf("Enter integer number: ");
    scanf("%d", &n);
    fprintf(fp, "%d ", n);

    int array[n];
    printf("Enter %d numbers: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        fprintf(fp, "%d ", array[i]);
    }
    fclose(fp);

    int num, even_cnt = 0, odd_cnt = 0, c = 0;
    int arr[100];
    fp = fopen("binary", "rb");
    fseek(fp, 1, SEEK_SET);
    while(!feof(fp))
    {
        c++;
        fscanf(fp,"%d", &num);
        arr[c-1] = num;
    }
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    int j = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even_cnt++;
        }
        else if(arr[i]%2 !=0)
        {
            odd_cnt++;
        }
    }

    printf("\n");

    printf("\nNumber of even numbers is %d", even_cnt);
    printf("\nNumber of odd numbers is %d", odd_cnt);

    printf("\nSORTED: ");
    int temp;
    for(i=0; i<n; i++)
{

        for(j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }

    for(i=0; i<n;i++)
        printf("%d ", arr[i]);
    fclose(fp);

    fp = fopen("txt", "w");
    for(i=0; i<n; i++)
        fprintf(fp, "%d ", arr[i]);
    fclose(fp);

    return 0;
}
