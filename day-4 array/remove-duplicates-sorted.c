#include<stdio.h>
int removeduplicate(int arr[],int n){
    int i;
    int res=0;
    for(i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            res++;
            arr[res]=arr[i];
        }
    }
    return res;
}
int main(){
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n],i;
    printf("enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index=removeduplicate(arr,n);
    printf("%d\n",index);
    for(i=0;i<=index;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}