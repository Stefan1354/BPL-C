#include <stdio.h>
#include <stdlib.h>

//1. Da se deklarira masiv sus 10 chisla i sled tova te da se ispisat v obraten red.

//int main() {
//    int A[10];
//    int i;
//    for (i = 0; i < 10; i++) {
//        printf("Enter number %d: ", i+1);
//        scanf("%d", &A[i]);
//    }
//    for (i = 10-1; i >= 0; i--)
//        printf("A[%d] = %d\n", i, A[i]);
//
//    return 0;
//}


//2. Da se napishe programa v koqto se deklarira masiv sus 7 stoinosti v interval [-100,100]. Programata da izvede nai-golqmoto chislo ot vavedenite.

//int main() {
//    int array[7];
//    int i;
//    for (i = 0; i < 7; i++) {
//        printf("Enter number %d: ", i+1);
//        scanf("%d", &array[i]);
//        while (array[i] < -100 || array [i] > 100) {
//            printf("WARNING! Number is not in range!\n");
//            printf("Enter number %d: ", i+1);
//            scanf("%d", &array[i]);
//        }
//    }
//
//    for (i = 0; i < 7; i++) {
//        if (array[0] < array[i]) {
//            array[0] = array[i];
//        }
//    }
//
//    printf("Largest element in this array is %d", array[0]);
//
//    return 0;
//}


//3. Da se napishe programa koqto namira sumata na 5 elementa v masiv posredstvom funkciq.


//int Sum(int A[], int size) {
//        int s = 0, i;
//        for (i = 0; i < size; i++)
//            s += A[i];
//        return s;
//    }
//
//int main() {
//    int Arr[5] = {33, 10, 4, 2, 8};
//    int result = Sum(Arr, 5);
//
//    printf("The sum is %d", result);
//
//    return 0;
//}



//4. Da se napishe programa koqto namira srednoaritmeticnoto na 5 elementa v ednomeren masiv, posredstvom funckii.

//int Average(int nums[], int size) {
//        int sum = 0, i, avg, cnt = 0;
//        for (i = 0; i < size; i++) {
//            if (nums[i] > 0) {
//                sum += nums[i];
//                cnt++;
//                avg = sum/cnt;
//            }
//            else
//                avg = 0;
//        }
//        return avg;
//    }
//
//int main() {
//    int nums[5];
//    int i;
//    int avg;
//    for (i = 0; i < 5; i++) {
//        printf("Enter number %d: ", i+1);
//        scanf("%d", &nums[i]);
//    }
//    int result = Average(nums, 5);
//    printf("The average is %d", result);
//
//    return 0;
//}
