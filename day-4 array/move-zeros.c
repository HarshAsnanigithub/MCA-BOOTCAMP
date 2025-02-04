#include<stdio.h>
void movezero(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }
        if(arr[j]==0){
            j--;
        }
        i++;
    }
}
int main(){
    int n=10;
    int arr[]={8,0,3,0,0,0,5,4,0,3};
    movezero(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}