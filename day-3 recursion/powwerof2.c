#include<stdio.h>
int power(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*power(n-1);
    }
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",power(n));
    return 0;
}