#include<stdio.h>
int main(){
    int x,y,n,z,k;
    scanf("%d",&n);
   for(x=n-1;x>=0;x--){
    for(y=0;y<=x;y++){
      if(x==n-1 || y==0 || x==y){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}