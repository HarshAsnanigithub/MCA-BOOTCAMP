#include<stdio.h>
int main(){
    int arr[]={1,2,5,4};
    int n=4,mul=1;
    int brr[n];
    brr[0]=arr[0];
    for(int i=1;i<n;i++){
        brr[i]=arr[i]*brr[i-1];
    }
    for(int i=n-1;i>=0;i--){
        brr[i]=brr[i-1]*mul;
        mul=mul*arr[i];
    }
    brr[0]=mul;
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}