#include <stdio.h>

int main()
{
  printf("Selection Sort \n");
    int i,j,k;
    int arr[] = {5,4,3,1,2};
    
    for(i=0;i<4;i++){
      for(j = i + 1;j<5;j++){
        if(arr[i]>arr[j + 1]){
          int temp = arr[i];
          arr[i] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
    for(k=0;k<5;k++){
      printf("%d ",arr[k]);
    }
    
    return 0;
}