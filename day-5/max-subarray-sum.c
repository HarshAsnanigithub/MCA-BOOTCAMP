#include<stdio.h>

//KADANE'S ALGORITHM

int maxsubsum(int arr[],int n){
    int currsum=1,maxsum=-10000,i;
    for(i=0;i<n;i++){
        currsum += arr[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={-2,-3,4,-1,2,-1,-5,-3};
    int n=8;
    printf("max sum=%d",maxsubsum(arr,n));
    return 0;
}