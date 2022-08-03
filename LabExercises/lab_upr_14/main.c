#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//1. Da se napishe programa za obrabotka na danni na artikli v edin magazin. Za vseki artikul se vavejda:
//naimenovanie koeto e masiv ot tip char
//proizvoditel char
//cena double
//kolichestvo int.
//Broqt na artiklite v magazina se chete ot klaviaturata.
//Da se realizirat:
//funkciq za vavejdane na informaciq za artikulite ot klaviaturata
//funkciq koqto vurshta srednata cena na artiikulite v magazina
//funkciq za sortirane po naimenovanie nalichnite artikli ot magazina i prinitrane na tazi informaciq.


//struct Item
//{
//    char name[15];
//    char user[15];
//    double price;
//    int quantity;
//
//} items[20];
//
//void input(int);
//double average_price(int);
//void sort_by_name(int);
//
//int main()
//{
//    int n;
//    printf("Enter number of items in the store: ");
//    scanf("%d", &n);
//    input(n);
//    double avg_price;
//    avg_price = average_price(n);
//    printf("Average price of the items in the store is %g\n", avg_price);
//    sort_by_name(n);
//
//    return 0;
//}
//
//void input(int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        fflush(stdin);
//        printf("Enter name of the item: ");
//        scanf("%s", items[i].name);
//        fflush(stdin);
//        printf("Enter user: ");
//        scanf("%s", items[i].user);
//        fflush(stdin);
//        printf("Enter price: ");
//        scanf("%lf", &items[i].price);
//        fflush(stdin);
//        printf("Enter quantity: ");
//        scanf("%d", &items[i].quantity);
//        printf("\n");
//    }
//}
//
//double average_price(int n)
//{
//    double avg_price;
//    float sum = 0;
//    for (int i = 0; i < n; i++)
//        sum += items[i].price;
//    avg_price = (double)sum/n;
//
//    return avg_price;
//}
//
//void sort_by_name(int n)
//{
//    struct Item temp;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i+1; j < n; j++)
//            if (strcmp(items[j].name, items[i].name) < 0)
//            {
//                temp = items[j];
//                items[j] = items[i];
//                items[i] = temp;
//            }
//    }
//    printf("Names of the items sorted by alphabet: ");
//        for (int i = 0; i < n; i++)
//            printf("%s ", items[i].name);
//}





//2. Da se napishe programa, obrabotvashta studenti. Da se deklarira struktura ot masiv studenti,
//kato broq na elementite se chete ot klaviaturata.
//Za vseki student se vavejda informaciq za:
//ime
//prezime
//familiq
//specialnost
//uspeh
//vuzrast
//pol.
//Ime, prezime i familiq da sa v otdelna struktura Name, kato trite ukazateli sa v tip char.
//Da se realizirat:
//Funkciq za zapulvane na elementa sus stoinosti
//Funkciq za izvejdane na informaciq za tezi pod 4.80
//Funkciq za izvejdane na informaciq za otlichen uspeh za tezi koito sa pod 22
//Funkciq koqto proverqva dali zhenite ili mazhete imat po-golqm uspeh.

//struct Name
//{
//    char f_name[20];
//    char s_name[20];
//    char l_name[20];
//} *name;
//
//struct Student
//{
//    char specialty[20];
//    float grade;
//    int age;
//    char sex[5];
//} *student;
//
//void input(int n);
//void under_grade(int n);
//void max_grade(int n);
//void men_or_women(int n);
//
//int main()
//{
//    int n;
//    printf("Enter number of students: ");
//    scanf("%d", &n);
//    name = (struct Name*)malloc(n * sizeof(struct Name));
//    student = (struct Student*)malloc(n * sizeof(struct Student));
//
//    if (name == NULL) {
//        printf("Unable to allocate memory\n");
//        return -1;
//    }
//
//    if (student == NULL) {
//        printf("Unable to allocate memory\n");
//        return -1;
//    }
//
//    input(n);
//    while(1)
//    {
//        int oper;
//        printf("Enter operation[1-4]: ");
//        scanf("%d", &oper);
//        switch(oper)
//        {
//            case 1:
//               under_grade(n);
//               break;
//            case 2:
//                max_grade(n);
//                break;
//            case 3:
//                men_or_women(n);
//                break;
//            case 4:
//                exit(0);
//            default:
//                printf("Wrong operation");
//        }
//    }
//    free(name);
//    free(student);
//
//    return 0;
//    }
//
//void input(int n)
//{
//    for(int i = 0; i < n; i++)
//    {
//        printf("Student number %d:\n", i+1);
//        fflush(stdin);
//        printf("Enter first name: ");
//        scanf("%s", name[i].f_name);
//        fflush(stdin);
//        printf("Enter second name: ");
//        scanf("%s", name[i].s_name);
//        fflush(stdin);
//        printf("Enter last name: ");
//        scanf("%s", name[i].l_name);
//        fflush(stdin);
//        printf("Enter specialty: ");
//        scanf("%s", student[i].specialty);
//        fflush(stdin);
//        printf("Enter grade: ");
//        scanf("%f", &student[i].grade);
//        fflush(stdin);
//        printf("Enter age: ");
//        scanf("%d", &student[i].age);
//        fflush(stdin);
//        printf("Enter sex: ");
//        scanf("%s", student[i].sex);
//        printf("\n");
//    }
//}
//
//void under_grade(int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if((student[i].grade) < 4.80)
//        {
////            printf("%s %f %d %s\n", student[i].specialty, student[i].grade, student[i].age, student[i].sex);
//            printf("%s %s %s %s %f %d %s\n", name[i].f_name, name[i].s_name, name[i].l_name, student[i].specialty, student[i].grade, student[i].age, student[i].sex);
//        }
//    }
//}
//
//void max_grade(int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if(student[i].grade > 4.50 && student[i].age < 22)
//            printf("%s %s %s %s %f %d %s\n", name[i].f_name, name[i].s_name, name[i].l_name, student[i].specialty, student[i].grade, student[i].age, student[i].sex);
//    }
//}
//
//void men_or_women(int n)
//{
//    float average1, average2;
//    float sum_man = 0;
//    float sum_woman = 0;
//    int count_man = 0;
//    int count_woman = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        if(strcmp(student[i].sex, "M") == 0)
//        {
//            sum_man += (student[i].grade);
//            count_man++;
//        }
//        else if (strcmp(student[i].sex, "W") == 0)
//        {
//            sum_woman += (student[i].grade);
//            count_woman++;
//        }
//    }
//    average1 = sum_man / count_man;
//    average2 = sum_woman / count_woman;
//    if(count_man !=0 && count_woman !=0)
//    {
//        if(average1 > average2)
//            printf("Mans have bigger grade - %g\n", average1);
//        else if(average1 == average2)
//            printf("UNBELIVEABLE! SAME GRADE!");
//        else
//            printf("Womens have bigger grade - %g\n", average2);
//    }
//    else if (count_man == 0)
//        printf("No mans in this class!\n");
//    else if (count_woman == 0)
//        printf("No womans in this class!\n");
//}
//


