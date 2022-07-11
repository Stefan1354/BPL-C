#include <stdio.h>
#include <stdlib.h>

//1.Definirame 3 promenlivi ot tip ukazatel kam tip int,double i char. Prisvoiavame im stoinosti posredstvom ukazatelite.
//Printirame stoinostite. Ikrementirame im stoinosttite i otnovo gi printirame.

int main()
{
   int a;
   int *x;
   double b;
   double *y;
   char c;
   char *z;

   x = &a;  //a=*x
   y = &b;
   z = &c;

   *x = 20;
   *y = 30.56;
   *z = 'S';

   printf("%d\n", a);
   printf("%lf\n", b);
   printf("%c\n", c);

   printf("%d\n", *x);
   printf("%lf\n", *y);
   printf("%c\n", *z);

   printf("%p\n", x);
   printf("%p\n", y);
   printf("%p\n", z);

   a++;
   b++;
   c++;

   printf("%p\n", a);
   printf("%p\n", b);
   printf("%p\n", c);
   return 0;
}

//2.Da se napishe funkciq koqto poluchava kato argument 1 chislo.
//Ako chisloto e po-malko ot 1000 go umnozava po 10, ako chisloto e ravno na 1000 dobavq 10, ako
//chisloto e po golqmo ot 1000 go deli na 10.

void func(int *num)
{
   if (*num<1000){
       *num *= 10;
   }
   else if(*num==1000){
      *num += 10;
   }
   else if(*num>1000){
       *num /= 10;
   }
   return;
}

int main(){
   int num;
   printf("Enter number: ");
   scanf("%d", &num);
   func(&num);
   printf("%d", num);
   return 0;
}


//3.Da se napise funkciq, koqto smenq stoinostite na 2 chisla.
//primer: a=2 b=3  -->  a=3 b=2

void swap(int *x, int*y)
{
   int z = *x;
   *x = *y;
   *y = z;
}
int main(){
  int a = 2, b = 3;
  swap(&a, &b);
  printf("a=%d,b=%d", a, b);
  return 0;
}

