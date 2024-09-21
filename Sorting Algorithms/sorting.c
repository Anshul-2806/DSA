#include<stdio.h>
#include<conio.h>
// void bubblesort(int[], int);

// sorting is technique to arrange an element of array in particular manner either ascending or descending.
// bubble selection insertion merge quick

// bubble sort
// 8 7 5 6 2
//step 1: 7 8 5 6 2
    // 6 5 8 6 2
    // 7 5 6 8 2
    // 7 5 6 2 8
// step 2: 7 5 6 2
    // 5 7 6 2
    // 5 6 7 2
    // 5 6 2 7

// step 3: 5 6 2
//      5 2 6

// step 4: 5 2
//      2 5
// final output : 2 5 6 7 8
void main()
{
    printf("Bubble Sort");
    printf("\n begin \nCompare 1st element with 2nd \n if 1st > 2nd then swap \n else move to next pairs of two elements \n itearting untill reached last element \n end");
    int n;
    printf("\n Enter size of an array");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter elements in an array :");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    bubblesort(arr, n);    

    printf("\n Sorted array : ");
    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
}

void bubblesort(int arr[], int n)
{    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}