#include<stdio.h>
void printarray(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter array\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printarray(n,arr);
    printf("\n");
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}