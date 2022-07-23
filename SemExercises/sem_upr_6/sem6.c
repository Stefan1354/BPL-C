#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Харалампий иска да организира рождения си ден, но за целта трябва да закупи инвентар за провеждането, който се изразява в следните предмети:
//Стол – 13,99; Маса за 8 човека – 42.00; комплект от 6 чаши – 5,98; комплект от 6 чинии с прибори – 21.02.
//От клавиатурата се въвеждат броя на гостите. Следват редове с неща, които до момента е купил Харалампий за партито до въвеждане на команда PARTY!.
//Сметнете колко пари е похарчил до момента Харалампий и колко още неща трябва да купи за да може да реализира своето парти и всички гости да имат стол,
//да седят на маса и да разполагат с чаша и прибори.

//Пример:
//10
//Table
//Chair
//Chair
//Chair
//Cups
//Cups
//Dishes
//PARTY!

//Изход:
//116,95
//1 Table
//7 Chairs
//1 Dishes

//(пояснение – поръчаните неща са на стойност 116,95. Има закупена една маса, а за сядането на 10 човека са нужни 2 маси.
//Има закупени 3 стола – нужни са още 7 за да може всеки да седи на стол. Приборите, които са нужни са още 4 броя, което значи закупуване
//на още един комплект).


//    // стол - 13,99
//    // маса за 8 човека - 42,00
//    //6 чаши - 5,98
//    // 6 чинии и прибори-21.02


//    int i,f=1,guest;
//
//    int chair=0;
//    int table = 0;
//    int cups = 0;
//    int dishes = 0;
//    char inv[20];
//    char ch[20] = "Chair";
//    char tab[20] = "Table";
//    char cup[20] = "Cups";
//    char dish[20] = "Dishes";
//    char party[20] = "PARTY!";
//    float sum = 0;
//
//
//    printf("Enter guests: ");
//    scanf("%d", &guest);
//
//    while(f!=0)
//    {
//        printf("Enter inventory: ");
//        scanf("%s", &inv);
//
//        if(strcmp(inv, tab) == 0)
//            table++;
//        else if(strcmp(inv, cup) == 0)
//            cups++;
//        else if(strcmp(inv, dish) == 0)
//            dishes++;
//        else if(strcmp(inv, ch) == 0)
//            chair++;
//        else if(strcmp(inv, party) == 0)
//            break;
//        else
//            printf("invalid input\n");
//
//    }
//
//    sum = chair*13.99 + table*42 + cups*5.98 + dishes*21.02;
//    printf("\n");
//    printf("Total sum = %.2f\n", sum);
//    printf("Total tables = %d\n", table);
//    printf("Total chairs = %d\n", chair);
//    printf("Total cups = %d\n", cups);
//    printf("Total dishes = %d\n", dishes);
//    printf("\n");
//
//    float table_diff = table*8.0;
//    float cups_diff = cups*6;
//    float dishes_diff = dishes*6;
//    table *= 8;
//    cups *= 6;
//    dishes *=6;
//
//
//    if(chair < guest)
//    {
//        printf("You need %d more chairs\n", guest-chair);
//    }
//
//    if(table < guest)
//    {
//        table_diff = (guest - table_diff)/8;
//        printf("You need %g more tables\n", ceil(table_diff));
//    }else
//        printf("");
//
//    if(cups < guest)
//    {
//        cups_diff = (guest - cups_diff)/6;
//        printf("You need %g more set/s of cups\n", ceil(cups_diff));
//    }else
//        printf("");
//
//    if(dishes < guest)
//    {
//        dishes_diff = (guest - dishes_diff)/6;
//        printf("You need %g more set/s of dishes\n", ceil(dishes_diff));
//    }else
//        printf("");




//2.Цецко е програмист и има хоби да прави сладкарски изделия. Помогнете му да напише програма, с която да менажира произведените сладка и техните доставки.
//За целта трябва да създадете структура за продукт, която да описва име на продукта, цена и уникален номер. Създайте и структура за поръчки,
//която да описва адрес на клиент и номер на продукт.
//От стандартния вход постъпват множество продукти и поръчки. Когато Цецко прави сладко той го добавя в списък на създадените сладка, а когато се пуска
//поръчка тя се изпълнява при наличие на продукт, иначе чака до създаването му.
//За входни данни ще получавате две команди:

//Product
//<име на продукт>
//<цена>
//<номер на продукта>

//Тази команда създава нов продукт и го добавя в списъка с продукти. Ако има поръчка за този продукт то поръчката се изпълнява незабавно и се маха от чакащите за изпълнение.
//Order
//<адрес>
//<номер на продукт>

//Ако има наличен вече произведен продукт се изпълнява поръчката, в противен случай чака за създаване на продукта.
//При всяко изпълнение на поръчка изписвайте: Client <address> ordered <product name>
//Програмата приключва работа при въвеждане на команда END.


//    typedef struct Product
//   {
//    char name[20];
//    int price;
//    int number;
//    }product;
//
//    typedef struct Order
//    {
//    char address[30];
//    int number;
//    }order;
//
//void input(product *a)
//{
//    printf("Enter product's name: ");
//    scanf("%s", &a->name);
//    printf("Enter product's price: ");
//    scanf("%d", &a->price);
//    printf("Enter product's number: ");
//    scanf("%d", &a->number);
//}
//void actual_order(order *a)
//{
//    printf("Enter your address: ");
//    scanf("%s", &a->address);
//    printf("Enter the product's number that you want to order: ");
//    scanf("%d", &a->number);
//}
//
//
//    int main()
//    {
//    int i,n,m=0,f=1,j;
//    char done[20];
//    char DONE[5] = "DONE";
//
//    product prod[20];
//    order ord[20];
//
//    printf("Enter how many product you want to add: ");
//    scanf("%d", &n);
//
//
//    int count = 0;
//    for(i=1;i<=n;i++)
//    {
//        printf("Product number %d\n", i);
//        input(&prod[i-1]);
//    }
//
//    while(f!=0)
//    {
//        printf("If you are done type \"DONE\" ->");
//        scanf("%s", &done);
//        if(strcmp(done, DONE) == 0)
//            break;
//        else
//        {
//            m++;
//            printf("Order %d\n", m);
//            actual_order(&ord[m-1]);
//        }
//        for(i=0;i<n;i++)
//        {
//            count = 0;
//            if(ord[m-1].number == prod[i].number)
//            {
//                printf("Client %s, ordered %d! \n", ord[m-1].address, ord[m-1].number);
//                count = 1;
//                break;
//            }
//
//        }
//        if(count < 1)
//            printf("Product not found! \n");
//
//    }
//    return 0;
//}
