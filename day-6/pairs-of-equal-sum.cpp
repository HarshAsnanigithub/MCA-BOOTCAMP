#include<iostream>
#include<algorithm>
using namespace std;
void pairsequaltosum(int arr[],int n,int target){
    int start=0,end=n-1;
    while(start<end){
        int sum=arr[end]+arr[start];
        if(sum>target){
            end--;
        }
        else if(sum<target){
            start++;
        }
        else{
            cout<<"("<<arr[start]<<","<<arr[end]<<")\n";
            start++;
            end--;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,5,6,7};
    int n=8;
    int target=7;
    pairsequaltosum(arr,n,target);
    return 0;
}