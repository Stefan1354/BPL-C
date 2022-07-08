#include <stdio.h>
#include <stdlib.h>

//5.Напишете конвертор от инчи в милиметри, сантиметри, дециметри, метри.

int main()
{
   float inch, mm, cm, dm, m;
   printf("Convert inch to mm, cm, dm and m\n\nType inch: ");
   scanf("%f", &inch);
   mm = inch * 25.4;
   cm= inch * 2.54;
   dm = inch * 0.254;
   m = inch * 0.0254;
   printf("\nmm: %f", mm);
   printf("\ncm: %f", cm);
   printf("\ndm: %f", dm);
   printf("\nm: %f", m);
   return 0;
}
