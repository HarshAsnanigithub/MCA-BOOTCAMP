#include<stdio.h>
//BRAIN KARNINGHAM'S ALGORITHM
int countbits(int n){
    int count=0;
    while(n){
        count++;
        n=n&(n-1);
    }
    return count;
}
int main(){
    int n=11;
    printf("%d",countbits(n));
    return 0;
}