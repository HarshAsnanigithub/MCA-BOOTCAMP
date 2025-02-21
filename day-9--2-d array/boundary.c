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
        printf("%d ",arr[0][i]);
    }
    for(int i=1;i<n;i++){
        printf("%d ",arr[i][n-1]);
    }
    for(int i=n-2;i>=0;i--){
        printf("%d ",arr[n-1][i]);
    }
    for(int i=n-2;i>0;i--){
        printf("%d ",arr[i][0]);
    }
    return 0;
}