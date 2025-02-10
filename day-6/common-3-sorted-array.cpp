#include<iostream>
using namespace std;
void printcommon(int arr[],int n1,int brr[],int n2,int crr[],int n3){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(arr[i]<brr[j] && arr[i]<crr[k]){
            i++;
        }
        else if(brr[j]<crr[k] && brr[j]<arr[i]){
            j++;
        }
        else if(crr[k]<arr[i] && crr[k]<brr[j]){
            k++;
        }
        else if(arr[i]==brr[j] && brr[j]==crr[k]){
            cout<<arr[i]<<" ";
            i++;
            j++;
            k++;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n1=5;
    int brr[]={2,3,5,7,8,9};
    int n2=6;
    int crr[]={3,3,4,5,6};
    int n3=5;
    printcommon(arr,n1,brr,n2,crr,n3);
    return 0;
}