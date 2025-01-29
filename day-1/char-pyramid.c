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
      printf("%c",ch+z);
    }   
   // second 
   for(k=1;k<=x;k++){
     printf("%c",ch+z-k-1);
   }
    printf("\n");
  }
  return 0;
}