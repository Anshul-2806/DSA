#include <stdio.h>

// to merge the element which is divided and check whhich is smaller

int conquer(int arr[],int start,int mid,int end)
{
  int i,j,k,m;
  int temp[end - start + 1];
  i = start;
  j = mid + 1;
  k = 0;
  while(i<=mid && j<=end)
  {
    if(arr[i] < arr[j])
    {  
      temp[k] = arr[i];
      i++;
    }
    else
    {
      temp[k] = arr[j];
      j++;
    }
    k++;
  }
  while(i<=mid) 
  {
    temp[k] = arr[i];
    i++;
    k++;
  }
  while(j<=end) 
  {
    temp[k] = arr[j];
    j++;
    k++;
  }
  
  k=0;
  for(m=start;m<=end;m++)
  {
    arr[m] = temp[k++];
  }
  return 0;
}

// divide element of array into 2 part
int divide(int arr[],int start,int end)
{
  if(start>=end)
  {
    return 0;
  }

  int mid = start + (end-start)/2;
  divide(arr,start,mid);
  divide(arr,mid + 1,end);
  conquer(arr,start,mid,end);
}

int main()
{
  int arr[] = {0,4,5,3,1,2,7};
  int length = sizeof(arr) / sizeof(arr[0]);
  divide(arr,0,length-1);
  for(int n=0;n<length;n++)
  {
    printf("%d ",arr[n]);
  }
}