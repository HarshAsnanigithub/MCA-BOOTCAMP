#include<stdio.h>
int peakele(int arr[],int n,int i,int j){
    while(i<=j){
        int mid=(i+j)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
            return arr[mid];
        }
        if(mid>0 && arr[mid]<=arr[mid-1]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,10,15,17,22,12,9,6,4};
    int n=10;
    printf("peak=%d",peakele(arr,n,0,n-1));
    return 0;
}