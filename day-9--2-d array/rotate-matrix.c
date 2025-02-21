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
    int arr[n][n],temp[n][n];
    printf("enter array\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printarray(n,arr);
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[n-j-1][i]=arr[i][j];
        }
    }
    printarray(n,temp);
    return 0;
}