#include<stdio.h>
int main(){
    int x,y,n,z;
    scanf("%d",&n);
    
  for(x=n-1;x>=0;x--){
    //space
    for(y=0;y<n-x-1;y++){
      printf(" ");
    }
    //star
    for(z=0;z<=x;z++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}