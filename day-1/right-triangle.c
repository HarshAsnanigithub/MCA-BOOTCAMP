#include<stdio.h>
int main(){
    int x,y,n;
    scanf("%d",&n);
    for(x=0;x<n;x++){
    for(y=0;y<=x;y++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}