#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}