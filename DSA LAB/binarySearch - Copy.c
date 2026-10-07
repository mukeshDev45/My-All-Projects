#include<stdio.h>
int linearsearch(int arr[],int element,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int element=8;
    int n=10;
    int result=linearsearch(arr,element,n);
    printf("the element is found at index: %d",result);
    return 0;

}