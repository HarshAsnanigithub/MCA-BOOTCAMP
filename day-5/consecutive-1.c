#include<stdio.h>

//maximm consecutive 1's

int count(int arr[],int n){
    int currcount=1,maxcount=0,i;
    for(i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            currcount++;
        if(currcount>maxcount){
            maxcount=currcount;
        }
        }
        else{
            currcount=1;
        }
    }
    return maxcount;
}
int main(){
    int arr[]={1,1,0,1,1,1};
    int n=6;
    printf("max count=%d",count(arr,n));
    return 0;
}