#include<stdio.h>
void printdes(int n){
    if(n==0){
        return;
    }
    printf(" %d",n);
    printdes(n-1);
}
void printasc(int n){
    if(n==0){
        return;
    }
    printasc(n-1);
    printf(" %d",n);
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printasc(n);
    printf("\n");
    printdes(n);
    return 0;
}