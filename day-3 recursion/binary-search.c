#include<stdio.h>
int bsearch(int arr[],int i,int j,int key){
    int mid=(i+j)/2;
    if(i>j){
        return 0;
    }
    if(arr[mid]==key){
        return 1;
    }
    else if(key>arr[mid]){
        return bsearch(arr,mid+1,j,key);
    }
    else if(key<arr[mid]){
        return bsearch(arr,i,mid-1,key);
    }
}
int main(){
    int n,i,key;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter value to find:");
    scanf("%d",&key);
    if(bsearch(arr,0,n-1,key)){
        printf("found");
    }
    else{
        printf("not found");
    }
    return 0;
}