#include<stdio.h>
int main(){
    int choice;
    float m,cm,g,kg;
    printf("press 1 to convert m to cm\npress 2 to convert cm to m\npress 3 to convert kg to g\npress 4 to convert g to kg\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
          printf("enter m:");
          scanf("%f",&m);
          printf("ans in cm=%f",(m*100));
          break;
        case 2:
          printf("enter cm:");
          scanf("%f",&cm);
          printf("ans in m=%f",(cm/100));
          break;
        case 3:
          printf("enter kg:");
          scanf("%f",&kg);
          printf("ans in g=%f",(kg*1000));
          break;
        case 4:
          printf("enter g:");
          scanf("%f",&g);
          printf("ans in kg=%f",(g/1000));
          break;
        default:
          printf("invalid");
    }
    return 0;
}