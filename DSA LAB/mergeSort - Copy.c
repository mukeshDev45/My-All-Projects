#include<stdio.h>
void printarray(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d", arr[i]);
  }
  printf("\n");
}
void merge(int arr[],int low,int mid,int high){
  int i;
  int j;
  int k;
  i=low;
  j=mid+1;
  k=low;
  int b[100];
  while(i<=mid && j<=high){
    if(arr[i]<arr[j]){
      b[k]=arr[i];
      i++;
      k++;
    }
    else{
      b[k]=arr[j];
      j++;
      k++;
    }
  }
  while(i<=mid){
    b[k]=arr[i];
    i++;
    k++;
  }
  while(j<=high){
    b[k]=arr[j];
    j++;
    k++;
  }
  for(i=low;i<=high;i++){
    arr[i]=b[i];
  }

}
void mergesort(int arr[],int low,int high){
  int mid;
  if(low<high){
    mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}

int main(){
  int arr[]={12,78,5,98,15,7,8,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Given array is \n");
  printarray(arr,n);
  mergesort(arr,0,n-1);
  printf("Sorted array is \n");
  printarray(arr,n);
  return 0;
  

}