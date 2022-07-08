#include <stdio.h>
#include <stdlib.h>

//10.Дадени са n цели числа в интервала [1…1000]. От тях някакъв процент
//p1 са под 200, друг процент p2 са от 200 до 399, друг процент p3 са от
//400 до 599, друг процент p4 са от 600 до 799 и останалите p5 процента
//са от 800 нагоре. Да се напише програма, която изчислява и отпечатва
//процентите p1, p2, p3, p4 и p5.


int main()
{
    int f=1;
    int num = 0;
    float p1, p2, p3, p4, p5;
    int count = 0;
    while(f != 0){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        if(num <= 200){
            p1 += 1;
            count += 1;
        }
        else if(num > 200 && num < 400){
            p2 += 1;
            count += 1;
        }
        else if(num >= 400 && num < 600){
            p3 += 1;
            count += 1;
        }
        else if(num >= 600 && num < 800){
            p4 += 1;
            count += 1;
        }
        else if(num >= 800 && num <= 1000){
            p5 += 1;
            count += 1;
        }
    }
    printf("P1 = %.2f%%\n", p1/count*100);
    printf("P2 = %.2f%%%\n", p2/count*100);
    printf("P3 = %.2f%%%\n", p3/count*100);
    printf("P4 = %.2f%%%\n", p4/count*100);
    printf("P5 = %.2f%%%\n", p5/count*100);
    return 0;
}
