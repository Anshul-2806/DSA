#include<stdio.h>

int main()
{
    printf("Insertion sort");
    int arr[]={1,3,2,60,5,4};
    int i;
    
    for(i=1; i<5; i++){
        int index=i;
        int val = arr[i];
        
        while(index>0 && arr[index-1] > val){
            arr[index]=arr[index-1];
            index--;
        }
        arr[index]=val;
    }
    
    for (int k=0; k<5;k++){
        printf("\n %d ", arr[k]);
    }
    return 0;
}
