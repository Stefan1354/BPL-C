#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Трябва да опишете база данни която работи с автокъща. Данните ви трябва да имат
//следния вид –
//• марка на автомобил - 5 знака
//• модел на автомобила - 5 знака
//• обем на двигателя – цяло число
//• цена - double
//• има ли регистрация или не (символ Y/N)
//Създайте програма, която записва така дадената структура на базата данни във
//двоичен и паралелно в текстови файл. Напишете възможност за добавяне на нов запис.
//Създайте програма, която прочита двата създадени файла и изкарва един след друг
//данните от бинарния и текстовия файл в конзолата, за да направите сравнение за
//правилната работа на програмата ви.

typedef struct Dealership
{
   char brand[6];
   char model[6];
   int engine;
   double price;
   char registration;
}deal;

void add(deal *a)
{

   printf("Enter brand: ");
   scanf("%s", a->brand);
   printf("Enter model: ");
   scanf("%s", a->model);
   printf("Enter engine volume: ");
   scanf("%d", &a->engine);
   printf("Enter price: ");
   scanf("%lf", &a->price);
   printf("Is the vehicle registrated: ");
   scanf("%s", a->registration);

}

int main()
{
   int i = 0, count = 0;
   char inp[10];
   char end[10] = "end";
   deal *cars =(deal*) malloc (30*sizeof(deal));
   while(1)
   {
       add(&cars[i]);
       i++;
       count++;
       printf("If you are done type \"end\": ");
       scanf("%s", &inp);
       if(strcmp(inp, end) == 0)
           break;

   }
   FILE *fp = fopen("scape.txt", "w");
   if(fp == NULL)
   {
       printf("ERROR\n");
       exit(1);
   }

   for(i=0; i<count; i++)
   {
       fprintf(fp,"%s %s %d %.2lf %c\n", cars[i].brand, cars[i].model, cars[i].engine, cars[i].price, cars[i].registration);
   }
   fclose(fp);

   printf("If you don't want to read from the text file type\"end\": ");
   scanf("%s", &inp);

   deal *read = (deal*) malloc (count*sizeof(deal));

   if(strcmp(inp, end) == 0)
       printf("Done\n");
   else
   {
       i = 0;

       fp = fopen("scape.txt", "r");
       if(fp == NULL)
       {
           printf("ERROR2");
           exit(2);
       }
       for(i=0; i<count; i++)
       {
           fscanf(fp,"%s %s %d %lf %s", &read[i].brand, &read[i].model, &read[i].engine, &read[i].price, &read[i].registration);
       }
       fclose(fp);
       for(int m=0; m<count; m++)
       {
           printf("Brand: %s ", read[m].brand);
           printf("Model: %s ", read[m].model);
           printf("Engine: %d ", read[m].engine);
           printf("Price: %.2lf ", read[m].price);
           printf("Registr: %c\n", read[m].registration);
       }

   }
   return 0;
}


//Задача 1.
//Опишете структура, която да съхранява информация за продуктите в магазин. Съхраняваната
//информация за всеки един продукт е:
//• Име на продукт (низ между 1 и 30 символа)
//• ID (код) на продукт (цяло число)
//• Срок на годност (низ с формат ГГГГ.ММ.ДД)
//• Цена на продукт (реално число)
//Създайте масив в който да съхранявате продуктите. Създайте бинарен файл с име “in.bin”
//На база създадената структура създайте функция, която да добавя нов продукт както в масива,
//така и в бинарния файл. Не забравяйте да заложите проверки за успешно записване във файла.
//Примерен прототип на функцията:
//void AddNewItem(Item *ip);

//Задача 2.
//Създайте функция, която приема масив от продукти и дата (низ с формат ГГГГ.ММ.ДД), след
//което връща масив от продукти, чиито срок на годност изтича на дадената дата. Ако не е открит
//такъв продукт функцията следва да визуализира съответното съобщение.

//Задача 3.
//Създайте функция, която прочита данните за продукта от вече създаденият и попълнен
//бинарен файл “in.bin”, след което ги записва в текстови файл “outTxt” и принтира
//последователно от двата вида файла в конзолата.

FIRST WAY

typedef struct Store_items
{

   char name[31];
   int ID;
   char exp[11];
   float price;

}item;

void add(item *a)
{
   fflush(stdin);
   printf("Enter name: ");
   scanf("%[^\n]s", a->name);
   printf("Enter ID: ");
   scanf("%d", &a->ID);
   printf("Enter expire date: ");
   scanf("%s", a->exp);
   printf("Enter price: ");
   scanf("%f", &a->price);
}
item *expire(item *a, int count, char date[30],int *p)
{
   item *items = NULL;
   int j = 0;
   int counter = 0;

   for(int i=0; i<count; i++)
   {
       if(strcmp(a[i].exp, date) == 0)
       {
           items = (item*) realloc (items, (++counter)*sizeof(item));
           items[j] = a[i];
           j++;

       }
   }
   *p = j;

   return items;
}
int main()
{

   int i = 0, count = 0;
   char inp[10];
   char end[] = "end";
   item *items = (item*) malloc (30*sizeof(item));
   while(1)
   {
       add(&items[i]);
       count++;
       i++;
       printf("To end type end: ");
       scanf("%s", inp);
       if(strcmp(inp, end) == 0)
       {
           break;
       }
   }
   FILE *fp = fopen("in.bin", "wb");

   for(i=0; i<count; i++)
   {
       if(fwrite(&items[i], sizeof(item),1,fp) != 1)
       {
           printf("ERROR1\n");
           exit(1);
       }
   }
   fclose(fp);
   item *read = (item*)malloc(count*sizeof(item));
   fp = fopen("in.bin", "rb");
   if(fp == NULL)
   {
       printf("ERROR2\n");
       exit(2);
   }
   int j = 0;
   while(!feof(fp))
   {
       fread(&read[j], sizeof(item), 1, fp);
       j++;

   }
   fclose(fp);

//    printf(" J = %d\n", j);
//    printf(" Count = %d\n", count);

   printf("\n");
   printf("Binary text:\n");
   for(i=0; i<count; i++)
   {
       printf("NAME:%s, ID: %d, DATE: %s, PRICE: %.2f\n", read[i].name, read[i].ID, read[i].exp, read[i].price);
   }

   fp = fopen("outText.txt", "r");
   for(i=0; i<count; i++)
   {
       fprintf(fp,"%s %d %s %f\n", read[i].name, read[i].ID, read[i].exp, read[i].price);
   }
   fclose(fp);
   printf("\n");
   int counter = 0;
   char date[20];
   printf("Enter expire date: ");
   scanf("%s", date);
   item *ret = expire(items,count,date,&counter);
   printf("\n");
   printf("Items that expire on %s: \n", date);
   for(i=0; i<counter; i++)
   {
       printf("%s %d %s %.2f\n", ret[i].name, ret[i].ID, ret[i].exp, ret[i].price);
   }
//    char line[300];
//    fp = fopen("outTxt.txt", "r");
//
//    printf("Text text:\n");
//    for(i=0; i<count; i++)
//    {
//        fgets(line, 300, fp);
//        printf("%s\n", line);
//    }
//    fclose(fp);

   return 0;
}

//SECOND WAY

// 'Product' Structure (part of the first task):
typedef struct
{
    char* name;
    int ID;
    char* expiration_date;
    float price;
} product;

product create_product()
{
    product product;
    product.name = (char*) malloc (31*sizeof(char));
    product.expiration_date = (char*) malloc (11*sizeof(char));
    product.ID = 0;
    product.price = 0;

    return product;
}

void create_product_list(product* product_list, int size)
{
    for (int i=0; i<size; i++)
        product_list[i] = create_product();
}

void create_binary_file(product* product_list, int size)
{
    FILE* file_pointer;
    if ((file_pointer = fopen("products.bin", "wb")) == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    for (int i=0; i<size; i++)
        fwrite((product_list + i), sizeof(product), 1, file_pointer);
    fclose(file_pointer);
}

void add_product_to_file(product* product)
{
    FILE* file_pointer;
    if ((file_pointer = fopen("products.bin", "ab")) == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    fwrite(product, sizeof(product), 1, file_pointer);
    fclose(file_pointer);
}

product* expiration_date_products(product* product_list, int size, char* expiration_date)
{
    int new_size = 0;
    product* new_product_list = NULL;

    for (int i=0; i<size; i++)
    {
        if (strcmp(product_list[i].expiration_date, expiration_date) == 0)
        {
            new_size++;
            new_product_list = (product*) realloc(new_product_list, new_size*sizeof(product));
            if (new_product_list == NULL)
            {
                printf("Memory allocation error!\n");
                exit(1);
            }
            else
            {
                new_product_list[new_size - 1].name = (char*) malloc(31*sizeof(char));
                new_product_list[new_size - 1].expiration_date = (char*) malloc(11*sizeof(char));

                strcpy(new_product_list[new_size - 1].name, product_list[i].name);
                new_product_list[new_size - 1].ID = product_list[i].ID;
                strcpy(new_product_list[new_size - 1].expiration_date, product_list[i].expiration_date);
                new_product_list[new_size - 1].price = product_list[i].price;
            }
        }
    }
    return new_product_list;
}

void print_products(product* product_list, int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%s\n", product_list[i].name);
        printf("%d\n", product_list[i].ID);
        printf("%s\n", product_list[i].expiration_date);
        printf("%.2f\n", product_list[i].price);
        printf("\n");
    }
}

product* add_new_product(product* product_list, int size)
{
    product* new_products = (product*) realloc(product_list, (size + 1)*sizeof(product));
    if (new_products == NULL)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    else
    {
        new_products[size].name = (char*) malloc(31*sizeof(char));
        new_products[size].expiration_date = (char*) malloc(11*sizeof(char));

        printf("Enter Product Name: ");
        fgets(new_products[size].name, 31*sizeof(char), stdin);
        new_products[size].name[strcspn(new_products[size].name, "\n")] = 0;
        fflush(stdin);

        printf("Enter Product ID: ");
        scanf("%d", &new_products[size].ID);

        printf("Enter Product Expiration Date: ");
        scanf("%s", new_products[size].expiration_date);

        printf("Enter Product Price: ");
        scanf("%f", &new_products[size].price);
    }

    add_product_to_file(&product_list[size]);
    return new_products;
}

void save_product_to_text_file(product* product)
{
    FILE* file_pointer;
    if ((file_pointer = fopen("products.txt", "a")) == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    else
    {
        fprintf(file_pointer, "Name = %s\n ID = %d\n Expiration Date = %s\n Price = %f\n", product->name,
                                                                                           product -> ID,
                                                                                           product->expiration_date,
                                                                                           product->price);
    }
    fclose(file_pointer);
}

void binary_to_text()
{
    FILE* file_pointer;

    product product;

    if ((file_pointer = fopen("products.bin", "r")) == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    else
    {
        while (fread(&product, sizeof(product), 1, file_pointer))
            save_product_to_text_file(&product);
    }

    fclose(file_pointer);
}

void print_from_binary()
{
     FILE* file_pointer;
     product product;

    if ((file_pointer = fopen("products.bin", "r")) == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    else
    {
        while (fread(&product, sizeof(product), 1, file_pointer))
        printf("Name = %s\n ID = %d\n Expiration Date = %s\n Price= %f\n", product.name,
                                                                           product.ID,
                                                                           product.expiration_date,
                                                                           product.price);
    }
    fclose(file_pointer);
}

void print_from_text()
{
    FILE* file_pointer;
    char buffer[256];
    if ((file_pointer = fopen("products.txt", "r")) == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    else
    {
        while (fgets(buffer, 256, file_pointer))
        {
             buffer[strcspn(buffer, "\n")] = 0;
             printf("%s\n", buffer);
        }
    }
    fclose(file_pointer);
}

void free_products(product* product_list, int size)
{
    for (int i=0; i<size; i++)
    {
        free(product_list[i].name);
        free(product_list[i].expiration_date);
    }

    free(product_list);
}

int main()
{
    product* product_list = (product*) malloc (2*sizeof(product));
    create_product_list(product_list, 2);

    strcpy(product_list[0].name, "Milk");
    product_list[0].ID = 1;
    strcpy(product_list[0].expiration_date, "2022.10.15");
    product_list[0].price = 2.30;

    strcpy(product_list[1].name, "Bread");
    product_list[1].ID = 2;
    strcpy(product_list[1].expiration_date, "2022.07.15");
    product_list[1].price = 1.25;

    create_binary_file(product_list, 2);

// Test #1:
    product_list = add_new_product(product_list, 2);
    product* expired_products = expiration_date_products(product_list, 3, "2022.10.15");
    print_products(expired_products, 2);

// Test #2:
    binary_to_text();
    printf("Binary Item:\n");
    print_from_binary();
    printf("Text Item:\n");
    print_from_text();
    free_products(product_list, 2);

    return 0;
}
