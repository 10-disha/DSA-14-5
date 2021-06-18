//efficient mehtod to find largest element in an array.
#include<iostream>
#include<cmath>
using namespace std;

int findLargest(int arr[],int n){
    int result=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[result])
        result = i;
    }
    return result;
}

int main(){
    int arr[]={12,333,4444,555555},n=4;
    cout<<findLargest(arr,n);
    return 0;
}