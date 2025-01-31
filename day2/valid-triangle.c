#include<stdio.h>
int main(){
    int a1,a2,a3;
    int s1,s2,s3;
    int choice;
    printf("press 1 to check with angle\npress 2 to check with side\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
          printf("enter angles:");
          scanf("%d%d%d",&a1,&a2,&a3);
          if((a1+a2+a3)==180){
            printf("valid triangle");
          }
          else{
            printf("not valid");
          }
          break;
        case 2:
          printf("enter sides:");
          scanf("%d%d%d",&s1,&s2,&s3);

          //sum of two shortest side is greater than third side

          (s1>s2)?(s1>s3)?(s2+s3>s1)?printf("valid"):printf("not"):(s1+s2>s3)?printf("valid"):printf("not"):(s2>s3)?(s1+s3>s2)?printf("valid"):printf("not"):(s1+s2>s3)?printf("valid"):printf("not");
          break;
          default:
            printf("invalid");
    }
    return 0;
}