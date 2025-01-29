#include<stdio.h>
int main(){
    int x,y,n,z,k;
  char ch='A';
    scanf("%d",&n);
for(x=0;x<n;x++){
      //space
      for(y=0;y<n-x;y++){
        printf("*");
      }
      //first
      for(z=0;z<x;z++){
        printf(" ");
      }
      //second
      for(k=0;k<x;k++){
        printf(" ");
      }
      //first star
      for(z=0;z<n-x;z++){
        printf("*");
      }
      printf("\n");
    }
     for(x=n-1;x>=0;x--){
      //space
      for(y=0;y<n-x;y++){
        printf("*");
      }
      //first
      for(z=0;z<x;z++){
        printf(" ");
      }
      //second
      for(k=0;k<x;k++){
        printf(" ");
      }
      //first star
      for(z=0;z<n-x;z++){
        printf("*");
      }
      //third
      printf("\n");
    }
  return 0;
}