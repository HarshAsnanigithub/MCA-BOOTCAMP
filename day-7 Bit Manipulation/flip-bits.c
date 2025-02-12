#include<stdio.h>
int countflipbits(int n){
    int count=0;
    while(n){
        count++;
        n=n&(n-1);
    }
    return count;
}
int main(){
    int a=10,b=6;
    printf("bits to flip==%d",countflipbits(a^b));
    return 0;
}