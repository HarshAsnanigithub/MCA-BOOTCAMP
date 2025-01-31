#include<stdio.h>
int main(){
    int num,ans=0;
    int i,x;
    printf("enter number:");
    scanf("%d",&num);
    x=num;
    while(x){
        ans= (ans*10)+(x%10);
       x=x/10;
    }
    if(ans==num){
        printf("palindrome");
    }
    else{
        printf("not");
    }
    return 0;
}