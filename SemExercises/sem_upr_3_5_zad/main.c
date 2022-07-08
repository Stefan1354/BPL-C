#include <stdio.h>
#include <stdlib.h>

//5.Трима спортни състезатели финишират за някакъв брой секунди (между
//1 и 50). Да се напише програма, която чете времената на състезателите,
//въведени от потребителя, и пресмята сумарното им време във формат
//"минути:секунди". Секундите да се изведат с водеща нула (2 🡪 "02", 7 🡪
//"07", 35 🡪 "35").
//Примери:

//вход     изход        вход      изход
//35       2:04          22       1:03
//45                      7
//44                     34

void calc_time(int s1, int s2, int s3)
{
    int sum, minutes, seconds;
    sum = s1 + s2 + s3;

    minutes = sum /60;
    seconds = sum % 60;

    if (seconds > 10)
    {
        printf("%d:%d", minutes, seconds);
    }
    else
    {
        printf("%d:0%d", minutes, seconds);
    }
}

int main()
{
    int s1, s2, s3;
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);

    calc_time(s1, s2, s3);
    return 0;
}



//second way

int n1, n2, n3;
   int num, i, j;
   printf("Time one: ");
   scanf("%d", &n1);
   printf("Time two: ");
   scanf("%d", &n2);
   printf("Time three: ");
   scanf("%d", &n3);


   num = n1 + n2 + n3;
   j = 0;

   for(i=num; i>=60; i-=60){
       j += 1;
   }
   if(i <= 10){
       printf("%d:0%d", j, i);
   }
   else{
       printf("%d:%d", j, i);
   }
