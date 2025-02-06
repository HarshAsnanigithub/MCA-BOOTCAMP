#include<stdio.h>

//SLIDING WINDOW CONCEPT

int maxsumofk(int arr[],int n,int k){
    int i,currsum=0,maxsum=0;
    for(i=0;i<k;i++){
        currsum +=arr[i];
    }
    maxsum=currsum;
    for(i=k;i<n;i++){
        currsum += arr[i]-arr[i-k];
        if(currsum>maxsum){
            maxsum=currsum;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={1,1,30,-5,2,7};
    int n=6,k=4;
    printf("max sum os k size=%d",maxsumofk(arr,n,k));
    return 0;
}