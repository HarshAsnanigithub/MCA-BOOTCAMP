#include<iostream>
#include<algorithm>
using namespace std;
void unionarray(int arr[],int n1,int brr[],int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr[i]<brr[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else if(brr[j]<arr[i]){
            cout<<brr[j]<<" ";
            j++;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n1){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<n2){
        cout<<brr[j]<<" ";
        j++;
    }
}
int main(){
    int arr[]={2,3,6,7,8};
    int n1=5;
    int brr[]={1,3,5,6,9,10,11};
    int n2=7;
    unionarray(arr,n1,brr,n2);
    return 0;
}