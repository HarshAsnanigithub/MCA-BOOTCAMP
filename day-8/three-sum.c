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
    int arr[]={2,5,7,15,20};
    int n=5,sum=40,f=0;
    for(int i=0;i<n-2;i++){
        int target=sum-arr[i];
        if(pairsum(arr,n,target)){
            f=1;
            break;
        }
    }
    if(f){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}