#include<stdio.h>
//dutch national flag algorithm
int main(){
    int arr[]={1,0,1,2,2,0,1,1,2,2,2,1,1,2,0,0,2,2,1,0};
    // int arr[]={0,1,2,1,2,0};
    int n=20;
    // int n=6;
    int start=0,end=n-1,mid=0;
    while(mid<=end){
        if(arr[mid]==0){
            int temp=arr[start];
            arr[start]=arr[mid];
            arr[mid]=temp;
            start++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int temp=arr[end];
            arr[end]=arr[mid];
            arr[mid]=temp;
            end--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}