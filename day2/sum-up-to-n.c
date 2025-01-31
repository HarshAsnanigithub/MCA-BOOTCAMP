#include<stdio.h>
int main(){
    int num,i;
    int sum=0;
    printf("enter num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum += i;
    }
    printf("sum=%d",sum);
    return 0;
}