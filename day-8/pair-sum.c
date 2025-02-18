#include<stdio.h>
int pairsum(int arr[],int n,int target){
    int i=0,j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            return 1;
        }
        if(sum>target){
            j--;
        }
        
        else if(sum<target){
            i++;
        }
    }
    return 0;
}
int main(){
    int arr[]={2,5,7,11,18};
    int n=5,sum=9;
    if(pairsum(arr,n,sum)){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}