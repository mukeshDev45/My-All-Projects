#include<stdio.h>
void printarr(int*arr,int n){
  for(int i=0;i<n;i++){
    printf("%d", arr[i]);
  }
  printf("\n");
}
void insertionsort(int*arr,int n){
  int key;
  int j;
  for(int i=1;i<=n-1;i++){
    key=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;

  }
}

int main(){
  int arr[]={34,78,24,98,23,12,89,10,19,20};
  int n=10;
  printarr(arr,n);
  printarr(arr,n);
  insertionsort(arr,n);

}