#include<stdio.h>
#include<math.h>
int main(){
    int num,x,ans=0,i,digit=0;
    printf("enter number:");
    scanf("%d",&num);
    x=num;
    while(x){
        digit++;
        x=x/10;
    }
    x=num;
    while(x){
        int rev=x%10;
        int a=pow(rev,digit);
        ans += a;
        x=x/10;
    }
    if(ans==num){
        printf("armstrong");
    }
    else{
        printf("not");
    }
    return 0;
}