#include <stdio.h>
#include <stdlib.h>

//1. Da se napishe programa, koqto pozvlqva na potrebitelq da vavede stoinosti za proizvolen broi obekti ot tip struktura telefonen ukazatel.
//Strukturata sudurza poletata:
//ime - masiv ot tip char
//kod - cqlo chislo
//nomer - masiv ot tip char.
//Vavedenata informaciq za vseki ot obektite se zapisva vuv tekstov fail. Prochita se informaciqta ot faila i se zapisva vuv masiv ot tip struktura
//telefonen ukazatel. Izvejda se sudurzanieto na masiva.

//struct Phone
//{
//    char name[20];
//    int code;
//    char number[20];
//
//} *phone;
//
//int main()
//{
//    FILE *fp;
//    fp = fopen("phones.txt", "w");
//
//    int num;
//    int i = 0;
//    phone = (struct Phone*) malloc(sizeof(struct Phone));
//    while(1)
//    {
//        fflush(stdin);
//        printf("Enter name: ");
//        scanf("%s", phone->name);
//        printf("Enter code: ");
//        scanf("%d", &phone->code);
//        printf("Enter number: ");
//        scanf("%s", phone->number);
//        fprintf(fp, "%s %d %s\n", phone->name, phone->code, phone->number);
//        i++;
//        printf("Enter 0 to stop: ");
//        scanf("%d", &num);
//        if (num == 0)
//            break;
//    }
//    fclose(fp);
//
//    fp = fopen("phones.txt", "r");
//    struct Phone array[i];
//    int j = 0;
//    while (!feof(fp))
//    {
//        fscanf(fp, "%s %d %s\n", array[j].name, &array[j].code, array[j].number);
//        if (j < i)
//            j++;
//    }
//
//    for (i = 0; i < j; i++)
//        printf("%s %d %s\n", array[i].name, array[i].code, array[i].number);
//    free(phone);
//    fclose(fp);
//
//    return 0;
//}


//2. Da se sustavi programa, koqto sazdava dvoichen fail sus zapisi, predstavlqvashti danni za strudnik vuv firma.
//Za vseki strufnik se vavejda:
//identifikacionen nomer
//pochasovo plashtane
//broi otraboteni chasove za edna sedmica
//sedmichna zaplata.
//Obshtiqt broi na strudnicite da ne previshava 30.Programata da vkluchva vazmojnost za dopulvane na novi zapisi vuv faila, kakto i vazmojnost
//za izvezdane na izchislenata sedmichna zaplata na ekrana.Pri izcislqvane na rabotnata zaplata e neobhodimo da se znae, che vseki izvanreden chas, koeto e
//nad 40 chasa sedmichno, se zaplashta 150%, a stoinostta na dancite e 3.6% ot obshtata zarabotka.


// 2.

struct Colabolator
{
    char id[15];
    float hourly_pay;
    int hours_per_week;
    float weekly_salary;

} collabs[30];

void append(int n);
void weekly_salary_neto(int n);

int main()
{
    FILE *fp;
    fp = fopen("collabs", "wb");

    if(fp == NULL)
    {
        printf("Error writing file\n");
        exit(1);
    }

    int n, i;
    printf("Enter number of collaborators: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Colaborator No.%d:\n", i+1);
        fflush(stdin);
        printf("Enter ID: ");
        scanf("%s", collabs[i].id);
        printf("Enter hourly pay: ");
        scanf("%f", &collabs[i].hourly_pay);
        printf("Enter number of hours worked per week: ");
        scanf("%d", &collabs[i].hours_per_week);
        printf("Enter weekly salary: ");
        scanf("%f", &collabs[i].weekly_salary);
        printf("\n");
        fwrite(&collabs, sizeof(collabs), 1, fp);
//        printf("Number of items written to the file: %d\n", chars);
//        fwrite(collabs , sizeof(collabs), 1 , fp);
    }

    fclose(fp);

    char op;
//    float neto;
    while (1)
    {
        fflush(stdin);
        printf("Enter operation: ");
        scanf("%c", &op);
        switch(op)
        {
            case 'A':
                append(n);
                n++;
                break;
            case 'N':
                weekly_salary_neto(n);
//                printf("Weekly neto salary is: %g", neto);
                break;
            case 'E':
                exit(0);
            default:
                printf("Wrong operation");
        }
    }

//    fp = fopen("collabs", "rb");
//    char buffer[50];
//    fread(&buffer, sizeof(buffer), 1, fp);
//    printf("%s", buffer);

//    fclose(fp);


    return 0;
}

void append(int n)
{
    FILE *fp;
    fp = fopen("collabs", "ab");

    for (int i = 0; i <1; i++)
    {
        printf("Colaborator No.%d:\n", i+1);
        fflush(stdin);
        printf("Enter ID: ");
        scanf("%s", collabs[i].id);
        printf("Enter hourly pay: ");
        scanf("%f", &collabs[i].hourly_pay);
        printf("Enter number of hours worked per week: ");
        scanf("%d", &collabs[i].hours_per_week);
        printf("Enter weekly salary: ");
        scanf("%f", &collabs[i].weekly_salary);
        printf("\n");
        fwrite(&collabs, sizeof(collabs), 1, fp);
    }

    fclose(fp);
}

void weekly_salary_neto(int n)
{
    float gross, net;
    for (int i = 0; i < n; i++)
    {
        if (collabs[i].hours_per_week > 40)
        {
            gross = collabs[i].weekly_salary + (collabs[i].hours_per_week - 40) * (collabs[i].hourly_pay) *1.5;
            net = gross - 0.036 *gross;
            printf("Collaborator No.%d have salary %g\n", i+1, net);
        }
        else
        {
            net = collabs[i].weekly_salary - 0.036 *collabs[i].weekly_salary;
            printf("Collaborator No.%d have salary %g\n", i+1, net);
        }
    }
}
