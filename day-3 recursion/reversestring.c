#include<stdio.h>
#include<string.h>
int rev(char str[],int i,int j){
    if(i>j){
        return 1;
    }
    if(str[i]!=str[j]){
        return 0;
    }
    else{
        return rev(str,i+1,j-1);
    }
}
int main(){
    char str[20];
    printf("enter string:");
    scanf("%s",str);
    int l=strlen(str);
    if(rev(str,0,l-1)){
        printf("yes");
    }
    else{
        printf("not");
    }
    
    return 0;
}