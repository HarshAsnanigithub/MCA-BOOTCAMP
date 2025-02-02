#include<stdio.h>
int sumdigi(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+(sumdigi(n/10));
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("sum=%d",sumdigi(n));
    return 0;
}