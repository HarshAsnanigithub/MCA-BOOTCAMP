#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num==0){
        printf("zero");
    }
    else if(num>0){
        printf("positive");
    }
    else{
        printf("negative");
    }
    return 0;
}