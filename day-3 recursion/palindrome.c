#include<stdio.h>
int palin(int n, int ans){
    if(n==0){
        return ans;
    }
    else{
        ans=ans*10+n%10;
        return palin(n/10,ans);
    }
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int ans=palin(n,0);
    if(ans==n){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}