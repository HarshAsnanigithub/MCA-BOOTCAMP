#include<stdio.h>
int main(){
    int x,y,n,z,k;
  char ch='A';
    scanf("%d",&n);
   for(x=0;x<n;x++){
    for(y=0;y<=x;y++){
      printf("%c",ch+y);
    }
    printf("\n");
  }
  return 0;
}