#include<stdio.h>
int main(){
    int x,y,n,z,k;
    scanf("%d",&n);
    for(x=0;x<n;x++){
    //space
    for(y=0;y<n-x-1;y++){
      printf(" ");
    }
    //first star
    for(z=0;z<=x;z++){
   // printf("%d",y);
      if(z%2==0){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    //second star
    for(k=0;k<x;k++){
      if(x%2==0){ 
        if(k%2==0){
          printf(" ");
        }
        else{
          printf("*");
        }
      }
      else{
        if(k%2==0){
          printf("*");
        }
        else{
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}