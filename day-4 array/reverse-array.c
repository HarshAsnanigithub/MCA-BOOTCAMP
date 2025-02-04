#include<stdio.h>
int main(){
    int n,i,start=0,temp;
    printf("enter size:");
    scanf("%d",&n);
    int end=n-1;
    int arr[n];
    printf("enter array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}