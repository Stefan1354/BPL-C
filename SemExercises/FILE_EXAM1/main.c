#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Трябва да опишете база данни която работи с автокъща. Данните ви трябва да имат
//следния вид –
//• марка на автомобил - 15 знака
//• модел на автомобила - 15 знака
//• обем на двигателя – цяло число
//• цена - double
//• има ли регистрация или не (символ Y/N)
//Създайте програма, която записва дадената структура на базата данни в текстов файл.
//Създайте възможност за добавяне на нов запис (динамично, чрез конзолата). Създайте
//възможност за печат на данните от файла на конзолата.


typedef struct
{
   char brand[16];
   char model[16];
   int engine_capacity;
   double price;
   char registration;

}CarDealership;

int main()
{
   int n;
   printf("Enter number of cars: ");
   scanf("%d", &n);
   CarDealership *car = (CarDealership*)malloc(n*sizeof(CarDealership));

   FILE *fp;
   fp = fopen("cars.txt", "w"); //файлът трябва да завършва с .txt или с .bin, зависи от режима дали е w/r или wb/rb (в този случай "cars.txt" трябва да е), иначе ще излизат грешки
   if(fp==NULL)
   {
       printf("ERROR: ");
       exit(1);
   }
   for(int i=0; i<n; i++)
   {
       printf("Enter %d. car: \n", i+1);
       printf("Enter brand of car: ");
       scanf("%s", car[i].brand);
       printf("Enter model of car: ");
       scanf("%s", car[i].model);
       printf("Enter engine capacity: ");
       scanf("%d", &car[i].engine_capacity);
       printf("Enter price: ");
       scanf("%lf", &car[i].price);
       fflush(stdin);
       printf("Enter Y (YES) or N (NO) for registration: ");
       scanf("%c", &car[i].registration);
       printf("\n");
       fprintf(fp, "%s %s %d %g %c\n", car[i].brand, car[i].model, car[i].engine_capacity, car[i].price, car[i].registration); //тук може би грешно ти ги е записвало, тъй като с оня запис май си добавил тия плюсове към адреса, не към стойността на адреса. тоя запис с cars[i] е по-лесен и по няма да имаш грешки.
   }
   fclose(fp);

   fp = fopen("cars.txt", "a");
   char oper[5];
   printf("Do you want to add new car in car dealership? ");
   scanf("%s", oper);
   if (strcmp(oper, "YES") == 0)
   {
       n++; //добавям 1 към n, защото добавяме нова кола тук. така n ще ни е действителният брой коли.
       car = (CarDealership*)realloc(car, sizeof(CarDealership) *n);
       printf("Enter brand of car: ");
       scanf("%s", car[n - 1].brand); //правя car[n - 1], защото искам да заделя тези стойности за последния елемент.
       printf("Enter model of car: ");
       scanf("%s", car[n - 1].model);
       printf("Enter engine capacity: ");
       scanf("%d", &car[n - 1].engine_capacity);
       printf("Enter price: ");
       scanf("%lf", &car[n - 1].price);
       fflush(stdin);
       printf("Enter Y (YES) or N (NO) for registration: ");
       scanf("%c", &car[n - 1].registration);
       fprintf(fp, "%s %s %d %g %c\n", car[n - 1].brand, car[n - 1].model, car[n - 1].engine_capacity, car[n - 1].price, car[n - 1].registration);
   }
   fclose(fp);

   fp = fopen("cars.txt", "r");
   if(fp==NULL)
       exit(2);


   for(int i=0; i<n; i++)
   {
       //сега като n го увеличихме с 1, всички записи ще излязат на екрана
       fscanf(fp, "%s %s %d %lf %c\n", car[i].brand, car[i].model, &car[i].engine_capacity, &car[i].price, &car[i].registration);
       printf("%s %s %d %0.2lf %c\n", car[i].brand, car[i].model, car[i].engine_capacity, car[i].price, car[i].registration); //car[i] записът няма да те подведе никога. този запис е много по-удобен, също.
   }
   free(car);

   return 0;
}


//PRIMEREN IZPIT

//Задача 1.
//Опишете структура, която да съхранява информация за световните кино звезди. Съхраняваната
//информация за всяка кино звезда е:
//• Име на артиста
//• Възраст
//• Държава
//• Спечелени приходи
//• Брой статуетки “Оскар”

//Създайте масив, в който да съхранявате кино звездите.
//На база създадената структура създайте функция, която да добавя нов артист в масива.

//Прототип на функцията:
//void AddNewArtist(Artist *ap);


//Задача 2.
//Създайте функция, която приема масив от артисти и приход, след което връща масив от
//артисти с приход, по-голям от подадения.

//Прототип на функцията:
//Artist * ReturnCertainIncomeArtistArray(Artist *ap, long int income);


//Задача 3.
//Създайте функция, която прочита данни за артисти от текстови файл и ги попълва в масив от
//артисти.
//Файла има следната структура:
//<име>;<възраст>;<държава>;<приходи>;<брой статуетки>
//Пример:
//Ivan;38;BG;2000000;1
//Rado;47;USA;9000000;3


typedef struct Artist
{
   char name[21];
   int age;
   char country[21];
   float income;
   char Oscars[3];
}star;

void add(star *a)
{
   fflush(stdin);
   printf("Enter name:\n");
   scanf("%[^\n]s", &a->name);
   printf("Enter age:\n");
   scanf("%d", &a->age);
   printf("Enter country:\n");
   scanf("%s", &a->country);
   printf("Enter income:\n");
   scanf("%f", &a->income);
   printf("Enter Oscar awards: \n");
   scanf("%s", &a->Oscars);
}

star *return_inc(star *a, long int income, int count)
{
   star *Artist = NULL;
   int counter=0;
   int j=0;
   for(int i=0;i<count;i++)
   {
       if(a[i].income > income)
       {
           Artist = (star*)realloc(Artist, (++counter)*sizeof(star));
           Artist[j] = a[i];
           j++;
       }

   }
   return Artist;
}


int main()
{
   int i = 0, num;
   int count = 0;

   FILE *fp=fopen("izp.txt", "r");

   if(fp == NULL)
   {
       printf("Error\n");
       exit(1);
   }
   int j = 0;
   char inc[30];
   char buf[BUFSIZ];
   star *Artists = (star*)malloc(20*sizeof(star));
   while(!feof(fp))
   {

       fscanf(fp, "%[^ ;]%*c %i", Artists[i].name, &Artists[i].age);
       fseek(fp,1,SEEK_CUR);
       fscanf(fp,"%[^ ;]%*c ", Artists[i].country);
       fscanf(fp,"%[^ ;]%*c ", inc);
       Artists[i].income = atof(inc);

       fscanf(fp,"%[^ \n\0;]%*c", Artists[i].Oscars);

       i++;
       count++;

   }

   for(i=0; i<count; i++)
   {
       printf("%s ", Artists[i].name);
       printf("%d ", Artists[i].age);
       printf("%s ", Artists[i].country);
       printf("%.2f ", Artists[i].income);
       printf("%s\n", Artists[i].Oscars);
   }


   while(1)
   {
       printf("Cinema star %d\n", i+1);
       add(&Artists[i]);
       printf("Enter 0 to stop\n");
       scanf("%d", &num);
       count++;

       if(num == 0)
           break;
       else
           i++;
   }
   int income;
   printf("Enter income: ");
   scanf("%d", &income);
   star *n = return_inc(Artists, income, count);
   for(i=0; i<30; i++)
   {
       printf("%s %d %s %.2f %s\n", n[i].name, n[i].age, n[i].country, n[i].income, n[i].Oscars);
       if(n[i+1].age <1 || n[i+1].age>120)
           break;
   }

   return 0;
}



//SECOND WAY

// 'Artist' structure (part of the first task):
typedef struct
{
    char *name;
    int age;
    char *country;
    int income;
    int oscar_count;
} artist;

// Create a list with default values:
void create_artists(artist *artists, int size)
{
    for (int i=0; i<size; i++)
    {
        artists[i].name = (char*) calloc(10, sizeof(char));
        artists[i].age = 0;
        artists[i].country = (char*) malloc(5*sizeof(char));
        artists[i].income = 0;
        artists[i].oscar_count = 0;
    }
}

// First Task:
artist *add_new_artist(artist* artists, int size)
{
    artist* new_artists = (artist*) realloc(artists, (size + 1)*sizeof(artist));
    if (new_artists == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    else
    {
        new_artists[size].name = (char*) malloc(10*sizeof(char));
        new_artists[size].country = (char*) malloc(5*sizeof(char));

        printf("Enter artist name: ");
        scanf("%s", new_artists[size].name);

        printf("Enter artist age: ");
        scanf("%d", &new_artists[size].age);

        printf("Enter artist country: ");
        scanf("%s", new_artists[size].country);

        printf("Enter artist income: ");
        scanf("%d", &new_artists[size].income);

        printf("Enter 'Oscar' count: ");
        scanf("%d", &new_artists[size].oscar_count);
    }
    return new_artists;
}

// Second Task:
artist* artists_with_bigger_income(artist* artists, int size, int income)
{
    int new_size = 0;
    artist* new_artists = NULL;

    for (int i=0; i<size; i++)
    {
        if (artists[i].income > income)
        {
            new_size++;
            new_artists = (artist*) realloc(new_artists, (new_size)*sizeof(artist));
            if (new_artists == NULL)
            {
                printf("Memory allocation error!\n");
                exit(1);
            }
            else
            {
                new_artists[new_size - 1].name = (char*) malloc(10*sizeof(char));
                new_artists[new_size - 1].country = (char*) malloc(5*sizeof(char));

                strcpy(new_artists[new_size - 1].name, artists[i].name);
                new_artists[new_size - 1].age = artists[i].age;
                strcpy(new_artists[new_size - 1].country, artists[i].country);
                new_artists[new_size - 1].income = artists[i].income;
                new_artists[new_size - 1].oscar_count = artists[i].oscar_count;
            }
        }
    }
    return new_artists;
}

// Helper function to display artists' data:
void print_artists(artist* artists, int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%s %d %s %d %d\n", artists[i].name,
                                   artists[i].age,
                                   artists[i].country,
                                   artists[i].income,
                                   artists[i].oscar_count);
    }
}

// Helper function to count the lines in a file:
int count_file_lines(FILE* file)
{
    int counter = 0;
    char row[256];
    // Counter increments at the end of the line:
    while (fgets(row, 256, file) != NULL) 
    {
        counter++;
    }
    rewind(file);
    return counter;
}

// Third Task: Read artists from file (reversed):
void fill_artists(FILE* file, artist* artists, int counter)
{
    char buffer[256];
    char* string;

    counter-=2;
    while (fgets(buffer, 256, file) != NULL)
    {
        string = strtok(buffer, ";");
        strcpy(artists[counter].name, string);

        string = strtok(NULL, ";");
        artists[counter].age = atoi(string);

        string = strtok(NULL, ";");
        strcpy(artists[counter].country, string);

        string = strtok(NULL, ";");
        artists[counter].income = atoi(string);

        string = strtok(NULL, ";");
        artists[counter].oscar_count = atoi(string);
        counter++;
    }
}

void free_artists(artist* artists, int size)
{
    for (int i=0; i<size; i++)
    {
        free(artists[i].name);
        free(artists[i].country);
    }
    free(artists);
}

void free_new_artists(artist *new_artists, int size)
{

    for (int i=0; i<size; i++)
    {
        free(new_artists[i].name);
        free(new_artists[i].country);
    }
    free(new_artists);
}

int main()
{
    // Test #1:
     artist* artists = (artist*) malloc(3*sizeof(artist));
     create_artists(artists, 3);

     artists[0].name = "Johnny";
     artists[0].age = 58;
     artists[0].country = "USA";
     artists[0].income = 1000;
     artists[0].oscar_count = 0;

     artists[1].name = "Leonardo";
     artists[1].age = 47;
     artists[1].country = "USA";
     artists[1].income = 2600;
     artists[1].oscar_count = 1;

     artists[2].name = "Cate";
     artists[2].age = 53;
     artists[2].country = "AUSTRALIA";
     artists[2].income = 950;
     artists[2].oscar_count = 2;

     // Be careful, when testing the functions!
     // You have to know the exact size of the lists you pass!
     artists = add_new_artist(artists, 3);

     printf("\n");
     print_artists(artists, 4);
     printf("\n");

     artist* new_artists = artists_with_bigger_income(artists, 4, 1100);
     print_artists(new_artists, 2);

    // Test #2:
    FILE* artist_file;

    if ((artist_file = fopen("izp.txt", "r")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    int count = count_file_lines(artist_file);

    //artist* artists = (artist*) malloc(count*sizeof(artist));
    create_artists(artists, count);
    fill_artists(artist_file, artists, count);

    print_artists(artists, count);
    free_artists(artists, count);
    free_new_artists(new_artists, count);

    return 0;
}
