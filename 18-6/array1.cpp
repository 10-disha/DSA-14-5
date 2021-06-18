//naive method -- to find largest element among the given array.

#include<iostream>
#include<cmath>
using namespace std;

int findLargest(int arr[],int n){
    for(int i=0;i<n;i++)
    
    {
        bool flag=true;
        for(int j=0;i<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }

        if(flag==true)
        return i;
    }
    
    return -1;
}
int main(){
    int arr[]={5,10,20,4},n=4;
    cout<<findLargest(arr,n);
    return 0;
}