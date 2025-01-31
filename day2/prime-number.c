#include<stdio.h>
int main(){
    int num,f=0,i=3;
    printf("enter num:");
    scanf("%d",&num);
    if(num==1){
        printf("not prime");
    }
    else{
    while((i<num/2) && f==0){
        if(num%i==0){
            f=1;
            break;
        }
        i++;
    }
    if(f){
        printf("not prime");
    }
    else{
        printf("prime");
    }
    }
    return 0;
}