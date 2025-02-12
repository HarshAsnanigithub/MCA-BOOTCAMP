#include<stdio.h>
void setbit(int n,int k){
    int x=1;
    if(n&(x<<(k-1))){
        printf("yes");
    }
    else{
        printf("no");
    }
}
int main(){
    int n=9;
    int k=2;
    setbit(n,k);
    return 0;
}