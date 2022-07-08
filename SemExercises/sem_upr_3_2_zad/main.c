#include <stdio.h>
#include <stdlib.h>

//2.Да се напише програма, която чете час и минути от 24-часово
//денонощие, въведени от потребителя, и изчислява колко ще е часът
//след 15 минути. Резултатът да се отпечата във формат hh:mm.
//Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59.
//Часовете се изписват с една или две цифри. Минутите се изписват
//винаги с по две цифри, с водеща нула когато е необходимо. Примери:

// вход   изход          // вход   изход            // вход    изход
// 1:46    2:01             0:01    0:16               23:59   0:14

int main()
{
   int min, h;
   int minutes = 0;
   printf("Enter a time:\n");
   scanf("%d\n%d", &h, &min);
   if (h>=0 && h<=23 && min>=0 && min<=59){
       if (min<45)
           min += 15;
       else if (min==45) {
           min = 0;
           h += 1;
       }
       else if (min>45) {
           minutes = min - 45;
           min = minutes;
           if (h>=0 && h<=22)
               h += 1;
           else if (h==23)
               h = 0;
       }
       if (min<10)
           printf("%d:0%d",h, min);
       else
           printf("%d:%d", h, min);

   }
   else
       printf("Invalid time");
   return 0;
}


//second way

int main()
{
   int n1, n2;
   int i, j;
   printf("Enter hour: ");
   scanf("%d", &n1);
   printf("Enter min: ");
   scanf("%d", &n2);

   n2+=15;
   if(n2>=60){
       i = n2 - 60;
       n1 += 1;
       j = n1;
   }
   else{
       i = n2;
       j = n1;
   }
  if(n1>=24){
       j = n1 - 24;
  }
  if(i<=10){
       printf("%d:0%d", j, i);
   }
   else{
       printf("%d:%d", j, i);
   }
   return 0;
}


