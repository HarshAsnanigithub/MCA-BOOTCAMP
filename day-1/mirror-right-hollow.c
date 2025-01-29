#include<stdio.h>
int main(){
    int x,y,n,z,k;
    scanf("%d",&n);
   for(x=0;x<n;x++){
    //space
    for(y=0;y<n-x-1;y++){
      printf(" ");
    }
    //star
    for(z=0;z<=x;z++){
      if(x==n-1 || z==0 || x==z){
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