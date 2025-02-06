#include<stdio.h>

//BOYER-MOORE MAJORITY VOTING ALGORITHM

int majorityele(int arr[],int n){
    int count=1,res=0,i,c=0;
    for(i=1;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==arr[res]){
            c++;
        }
    }
    if(c>n/2){
        return arr[res];
    }
    return -1;
}
int main(){
    int arr[]={8,4,6,6,6,8,6};
    int n=7;
    printf("majority element=%d",majorityele(arr,n));
    return 0;
}