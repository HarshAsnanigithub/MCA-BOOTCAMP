#include<stdio.h>
int main(){
    int x,y,n,z,k;
  char ch='A';
    scanf("%d",&n);
  for(x=0;x<n;x++){
      //space
      for(y=0;y<n-x-1;y++){
        printf(" ");
      }
      //first
      for(z=0;z<=x;z++){
        printf("*");
      }
      //second
      for(k=0;k<x;k++){
        printf("*");
      }
      //third
      printf("\n");
    }
     for(x=n-2;x>=0;x--){
      //space
      for(y=0;y<n-x-1;y++){
        printf(" ");
      }
      //first
      for(z=0;z<=x;z++){
        printf("*");
      }
      //second
      for(k=0;k<x;k++){
        printf("*");
      }
      //third
      printf("\n");
    }
  return 0;
}