#include <stdio.h>
#include <stdlib.h>

//Да се прочете от клавиатурата едно целочислено число и да се изведе съобщение, ако то е по-голямо от 6.

int main()
{
  int a;
  scanf("%d", &a);
  if (a>6) {
      printf("%d is bigger than 6", a);
  }
  else if (a<6) {
      printf("%d is smaller than 6", a);
  }
  else {
      printf("Numbers are same");
  }
  return 0;
}



