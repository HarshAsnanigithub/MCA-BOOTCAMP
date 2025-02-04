#include<stdio.h>
int seclargest(int arr[],int n){
    int large=0,sec_large=-1,i;
    for(i=0;i<n;i++){
        if(arr[i]>arr[large]){
            sec_large=large;
            large=i;
        }
        else{
             sec_large=i;
        }
    }
    return sec_large;
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
    printf("array==");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int ans=seclargest(arr,n);
    printf("index==%d",ans);
    return 0;
}