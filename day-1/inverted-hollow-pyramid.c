#include<stdio.h>
int main(){
    int x,y,n,z,k;
  char ch='A';
    scanf("%d",&n);
  for(x=n-1;x>=0;x--){
   //space
    for(y=0;y<n-x-1;y++){
      printf(" ");
    }
    //first star
    for(z=0;z<=x;z++){
      if(x==n-1 || z==0){
        printf("*");
      } 
      else{
        printf(" ");
      }
    }
    //second star 
    for(k=0;k<x;k++){
      if(x==n-1 || k==x-1){
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