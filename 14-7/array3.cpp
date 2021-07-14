//max subarray sum
//naive solution

#include<iostream>
#include<algorithm>
using namespace std;

int maxSubarr(int arr[],int n){
int res=arr[0];

    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
            res=max(res,curr);
        }
    }

    return res;
}
int main(){
    int arr[]={1,-2,3,-1,2},n=5;
    cout<<maxSubarr(arr,n);
}