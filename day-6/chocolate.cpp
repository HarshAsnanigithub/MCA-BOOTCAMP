#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]{7,3,1,8,9,56,12};
    int n=7,m=3;
    sort(arr,arr+n);
    int mindiff=arr[m-1]-arr[0];
    for(int i=0;(i+m-1)<n;i++){
        int currdiff=arr[i+m-1]-arr[i];
        mindiff=min(currdiff,mindiff);
    }
    cout<<"answer= "<<mindiff;
    return 0;
}