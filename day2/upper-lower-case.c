#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("lowercase");
    }
    else if(ch>='A' && ch<='Z'){
        printf("uppercase");
    }
    else{
        printf("special character");
    }
    return 0;
}