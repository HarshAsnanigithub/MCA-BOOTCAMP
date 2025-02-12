#include<stdio.h>
int missingno(int arr[],int n){
    int res1=0,res2=0;
    for(int i=1;i<=n;i++){
        res1 ^= i;
    }
    for(int i=0;i<n-1;i++){
        res2 ^= arr[i];
    }
    return (res1^res2);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int n=10;
    printf("ans==%d",missingno(arr,n));
    return 0;
}