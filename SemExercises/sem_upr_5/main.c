//3. Дадена е матрица NxM запълнена с цели числа. Разменете редовете с най-голям и най-малък елемент.

#include <stdio.h>

//int Num_small(int n,int k,int arr[n][k]);
//int Num_big(int n,int k,int arr[n][k]);
//void printM(int n,int k,int dm[n][k]);
//
//int main()
//{
//
//    int n,m,i,j,big,small;
//    printf("Enter N: ");
//    scanf("%d",&n);
//    printf("Enter M: ");
//    scanf("%d",&m);
//    int arr[n][m];
//    printf("Enter elements: \n");
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("Element[%d][%d]: ",i+1,j+1);
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    big = Num_big(n,m,arr);
//    small = Num_small(n,m,arr);
//    for(i=0;i<n;i++)
//    {
//        int t = arr[big][i];
//        arr[big][i] = arr[small][i];
//        arr[small][i] = t;
//    }
//    printM(n,m,arr);
//
//    return 0;
//}
//
//void printM(int n,int m,int dm[n][m])
//{
//    int i,j;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d ",dm[i][j]);
//        }
//        printf("\n");
//    }
//}
//int Num_big(int n,int m,int dm[n][m])
//{
//    int Num_big = 0;
//    int i,j;
//    int big = dm[0][0];
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            if(big < dm[i][j]){
//                big = dm[i][j];
//                Num_big = i;
//            }
//        }
//    }
//    return Num_big;
//}
//
//int Num_small(int n,int m,int dm[n][m])
//{
//    int Num_low = 0;
//    int i,j;
//    int small = dm[0][0];
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            if(small > dm[i][j]){
//                small = dm[i][j];
//                Num_low = i;
//            }
//        }
//    }
//    return Num_low;
//}


//1. Даден е двумерен масив NxM запълнен с цели числа. Проверете дали всеки ред съдържа числа, подредени в нарастващ ред,
//а всяка колона съдържа числа подредени в намаляващ ред.

//int main()
//{
//    int cow, row=0, n;
//    printf("Enter N:");
//    scanf("%d", &n);
//
//    int arr[n][n];
//    for(cow=0;cow<n;cow++)
//    {
//        for(row=0;row<n;row++)
//        {
//            printf("Arr[%d][%d]: ",cow, row);
//            scanf("%d", &arr[cow][row]);
//        }
//    }
//
//    for(cow=0;cow<n;cow++)
//    {
//        for(row=0;row<n;row++)
//        {
//            printf("%d  ", arr[cow][row]);
//
//        }
//        printf("\n");
//    }
//
//    for(cow=0;cow<n-1;cow++)
//    {
//        for(row=0;row<n-1;row++)
//        {
//            if(arr[cow][row]>arr[cow][row+1])
//                printf("Arr[%d] is decreasing! \n", cow);
//
//
//
//        }
//
//    }
//
//    for(cow=0;cow<n-1;cow++)
//    {
//        for(row=0;row<n-1;row++)
//        {
//            if(arr[cow][row]<arr[cow+1][row])
//                printf("Cow[%d] is increasing! \n", cow);
//        }
//
//
//    }
//
//}
