#include<stdio.h>
int sorted(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,i;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(sorted(arr,n)){
        printf("yes sorted");
    }
    else{
        printf("not");
    }
    return 0;
}