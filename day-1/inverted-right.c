#include<stdio.h>
int main(){
    int x,y,n,z;
    scanf("%d",&n);
    for(x=n-1;x>=0;x--){
    for(y=0;y<=x;y++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}