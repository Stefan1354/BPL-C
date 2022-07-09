#include <stdio.h>
#include <stdlib.h>

//2.Да се напише програма, която проверява дали между елементите на редицата a0,a1, ...,an са изпълнени релациите: a0 <a1 >a2 <a3…
//(въвеждат се N и елементите на редицата).
//
//int main()
//{
//    int n;
//    printf("What's the size of the array?\n");
//    scanf("%d", &n);
//
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        int b;
//        printf("a[%d] = ", i);
//        scanf("%d", &b);
//        a[i] = b;
//    }
//
//    int check = 1;
//    int isTrue = 1;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (i < n-1)
//        {
//            if (check == 1) {
//                if (a[i] > a[i+1])
//                {
//                    check = 0;
//                    isTrue = 0;
//                    break;
//                }
//            } else {
//                if (a[i] < a[i+1])
//                {
//                    check = 0;
//                    isTrue = 0;
//                    break;
//                }
//            }
//            if (check == 1)
//            {
//                check = 0;
//            } else {
//                check = 1;
//            }
//        }
//    }
//
//    if (isTrue == 1)
//    {
//        printf("The relations are correct");
//    } else{
//        printf("The relations are NOT correct");
//    }
//    return 0;
//}

//2 nacin

//int main()
//{
//    int i;
//    int n[i];
//    int size;
//    printf("Enter size: ");
//    scanf("%d",&size);
//
//    for(i=0;i<size;i++){
//        scanf("%d", &n[i]);
//        if(n[i]==0){
//            break;
//        }
//    }
//
//    for(i=0;i<=size;i++){
//        if(n[i]<n[i++] && n[i++]>n[i+2] && n[i+2]<n[i+3] && n[i+3]>n[i+4] && n[i+4]<n[i+5])
//        {
//            printf("TRUE");
//        }
//        else{
//            printf("FALSE");
//            break;
//        }
//    }
//}


//3.Напишете програма, която получава масив от N елемента и обръща реда на елементите. Изкарайте ново полученият масив.

//int main()
//{
//    int n;
//
//    printf("What's the size of the array?\n");
//    scanf("%d", &n);
//
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        int b;
//        printf("a[%d] = ", i);
//        scanf("%d", &b);
//        a[i] = b;
//    }
//
//    int newArr[n];
//    int counter = 0;
//    for (int i = n-1; i >= 0; i--)
//    {
//        newArr[counter] = a[i];
//        counter++;
//    }
//
//    printf("The new array equals:\n");
//
//    for (int i = 0; i < n; i++)
//    {
//        printf("b[%d] = %d\n", i, newArr[i]);
//    }
//    return 0;
//}

//2 nacin

//int main(){
//     int a[100],i,j,Size,Temp;
//
//     printf("Please enter the size: ");
//     scanf("%d",&Size);
//
//     for(i=0;i<Size;i++){
//        scanf("%d",&a[i]);
//     }
//     j=i-1;   //assigning j to last element
//     i=0;     //assigning i to first element
//
//     while(i<j){
//        Temp=a[i];
//        a[i]=a[j];
//        a[j]=Temp;
//        i++;
//        j--;
//     }
//
//     printf("\nResult is: ");
//     for(i=0;i<Size;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
//}


//4.Напишете програма, която получава редица с цели N числа. След това получава цяло число К. Отместете всички елементи на редицата с K позиции,
//като използвате правилото за превъртане (когато елемент от последна позиция трябва да се измести то той трябва да отиде на първа позиция в редицата).

//int main()
//{
//    int n;
//
//    printf("What's the size of the array?\n");
//    scanf("%d", &n);
//
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        int b;
//        printf("a[%d] = ", i);
//        scanf("%d", &b);
//        a[i] = b;
//    }
//
//    int k;
//    printf("How much do you want the shift to be?");
//    scanf("%d", &k);
//
//    int b[n];
//    for (int i = 0; i < n; i++)
//    {
//        while(k >= n)
//        {
//            k -= n;
//        }
//        if (k < 0)
//        {
//            k += n;
//        }
//        b[k] = a[i];
//        k++;
//    }
//
//    //Printing new array
//    for (int i = 0; i < n; i++)
//    {
//        printf("b[%d] = %d\n", i, b[i]);
//    }
//    return 0;
//}


//5.Дадена е редица с N цели числа. Да не намери K тия по големина елемент в редицата.

//void swap(int* xp, int* yp)
//{
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//
//void selectionSort(int arr[], int n)
//{
//    int i, j, min_idx;
//
//    for (i = 0; i < n - 1; i++) {
//
//        min_idx = i;
//        for (j = i + 1; j < n; j++)
//            if (arr[j] < arr[min_idx])
//                min_idx = j;
//        swap(&arr[min_idx], &arr[i]);
//    }
//}
//
//int main()
//{
//    int n;
//
//    printf("What's the size of the array?\n");
//    scanf("%d", &n);
//
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        int b;
//        printf("a[%d] = ", i);
//        scanf("%d", &b);
//        a[i] = b;
//    }
//
//    selectionSort(a, n);
//
//    int b[n];
//    int counter = 0;
//    for (int i = n-1; i >= 0; i--)
//    {
//        b[counter] = a[i];
//        counter++;
//    }
//
//    int k;
//    printf("k = ");
//    scanf("%d", &k);
//    if (k > n)
//    {
//        printf("please put in a lower value of k");
//        scanf("%d", &k);
//    }
//    printf("The k=%d size element is %d", k, b[k-1]);
//    return 0;
//}
//

//2 nacin

//int main()
//{
//    int size,i,j,k,temp;
//
//    printf("Enter size of array: \n");
//    scanf("%d",&size);
//
//    int arr[size];
//    printf("Enter array values: \n");
//    for(i=0;i<size;i++){
//        scanf("%d",&arr[i]);
//    }
//
//    printf("\nEnter k value: ");
//    scanf("%d",&k);
//
//    for(i=0;i<size;i++){
//        for(j=0;j<size;j++){
//            if(arr[i]<arr[j]){
//                temp=arr[i];
//                arr[i]=arr[j];
//                arr[j]=temp;
//            }
//        }
//    }
//
//    printf("Sorted array is: ");
//
//    for(i=0;i<size;i++){
//        printf("%d\t",arr[i]);
//    }
//
//    printf("\n%d'th largest value is %d",k,arr[k-1]);
//    return 0;
//}


//6.За дадена редица от числа да се намери и отпечата най-дългата (монотонно) нарастваща (или намаляваща) под редица.




