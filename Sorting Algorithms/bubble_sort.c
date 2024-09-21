#include<stdio.h>
int main()
{

printf("Bubble sort");
    int arr[]={1,3,2,5,4};
    int i=0,j=0;
    for(i=0;i<5;i++){ // size
        for(j=i+1; j<4; j++){	// size-1
        if (arr[j] > arr[j + 1]){
            int temp=arr[j];
            arr[j]=arr[j + 1];
            arr[j + 1]=temp;
            }
        }
    }

    for (int i=0; i<5;i++){
        printf("%d ", arr[i]);
    }

return 0;
}