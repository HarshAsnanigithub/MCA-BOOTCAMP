#include<stdio.h>
int main(){
    int x,y,n,z,k;
    scanf("%d",&n);
   for(x=0;x<n;x++){
    //space
    for(y=0;y<n-x-1;y++){
      printf(" ");
    }
    //first
    for(z=1;z<=x+1;z++){
      printf("%d",z);
    }
    //second 
    for(k=0;k<x;k++){
      printf("%d",z-2-k);
    }
    printf("\n");
  }
  return 0;
}