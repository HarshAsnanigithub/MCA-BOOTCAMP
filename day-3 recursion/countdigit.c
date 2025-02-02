#include<stdio.h>
int countdigi(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+countdigi(n/10);
    }
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("answer=%d",countdigi(n));
    return 0;
}