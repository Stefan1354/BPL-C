#include <stdio.h>
#include <stdlib.h>

//1.Da se sazdade kvadraten masiv n-n, kato n se vavezda ot potrebitelq, sled koeto zapulvame sys stoinosti
//elementite na toq masiv, i printirame na ekrana purvo celiq masiv, sled koeto printirame samo
//elementite po glavniq diagonal.


//int main()
//{
//    int n;
//    printf("Enter n: ");
//    scanf("%d",&n);
//    int array[n][n];
//    int row,col;
//    for(row=0;row<n;row++)
//    {
//        for(col=0;col<n;col++)
//        {
//            printf("Element [%d] [%d] ",row,col);
//            scanf("%d",&array[row][col]);
//        }
//    }
//
//    for(row=0;row<n;row++)
//    {
//        for(col=0;col<n;col++)
//        {
//            printf("%d ",array[row][col]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//
//    for(row=0;row<n;row++)
//    {
//        for(col=0;col<n;col++)
//        {
//            if(row==col)
//            {
//                printf("%d ",array[row][col]);
//            }
//            else{
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//2.Ako v posledniq red na masiva imame otricatelna stoinost, elementite po vtorostepenniq diagonal da umnozim po 3.

//int main() {
//    int n;
//    printf("Enter n: ");
//    scanf("%d", &n);
//    int arr[n][n];
//    int row, col;
//    for (row = 0; row < n; row++) {
//        for (col = 0; col < n; col++) {
//            printf("Element: [%d] [%d]: ", row, col);
//            scanf("%d", &arr[row][col]);
//        }
//    }
//
//    int change = 1;
//    for (row = 0; row < n; row++) {
//        if (arr[n-1][row] < 0) {
//            change = 0;
//        }
//    }
//
//    if (change == 0) {
//        for (row = 0; row < n; row++) {
//            arr[row][n-row-1] *= 3;
//        }
//    }
//
//    for (row = 0; row < n; row++) {
//        for (col = 0; col < n; col++) {
//            printf("%d ", arr[row][col]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//3. Da se izpise na ekrana minimalniq element v glavniq diagonal.

//int main() {
//    int n;
//    printf("Enter n: ");
//    scanf("%d", &n);
//    int arr[n][n];
//    int row, col;
//    for (row = 0; row < n; row++) {
//        for (col = 0; col < n; col++) {
//            printf("Element: [%d] [%d]: ", row, col);
//            scanf("%d", &arr[row][col]);
//        }
//    }
//
//    int min = arr[1][0];
//
//    for (row = 0; row < n; row++) {
//        for (col = 0; col < n; col++) {
//            if (row < col) {
//                if (min > arr[row][col]) {
//                    min = arr[row][col];
//                    printf("Min = %d", min);
//                }
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
