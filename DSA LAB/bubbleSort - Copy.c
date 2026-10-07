#include<stdio.h>
void printarr(int*arr,int n){
  for(int i=0;i<n;i++){
    printf("%d", arr[i]);
  }
  printf("\n");
}
void bubblesort(int*arr,int n){
  for(int i=0;i<n-1;i++){//no of passes
    for(int j=0;j<n-i-1;j++){//no of swaps
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }

    }
  }
}
int main(){
  int arr[]={34,78,24,98,23,12,89,10,19,20};
  int n=10;
  printarr(arr,n);
  printarr(arr,n);
  bubblesort(arr,n);
  return 0;

}