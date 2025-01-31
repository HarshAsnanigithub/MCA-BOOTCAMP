#include<stdio.h>
int main(){
    int year;
  printf("enter year:");
  scanf("%d",&year);

  //method--1

  if(year%4==0){
    if(year%100==0){
        if(year%400==0){
            printf("leap year");
        }
        else{
            printf("not leap year");
        }
    }
    else{
        printf("leap year");
    }
  }
  else{
    printf("not leap year");
  }

  //method-2

  if(year%4==0 && (year%100)!=0 || year%400==0){
    printf("leap year");
  }
  else{
    printf("not");
  }
    return 0;
}