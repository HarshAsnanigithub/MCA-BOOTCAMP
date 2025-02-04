#include<stdio.h>
// ALSO CALLED REVERSAL ALGORITHM------------------

void reverse(int arr[],int i,int j){
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[]={2,4,3,8,9,5,4,0,8,2};
    int n=10;
    int d=5;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}