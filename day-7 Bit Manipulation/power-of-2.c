#include<stdio.h>
void powertwo(int n){
    int count=0;
    while(n){
        count++;
        n=n&(n-1);
    }
    
    if(count==1){
        printf("yes");
    }
    else{
        printf("no");
    }
}
int main(){
    int n=14;
    powertwo(n);
    return 0;
}