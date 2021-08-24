//first occurrence in sorted array 
//recursive solution

#include<iostream>
using namespace std;

int firstOcc(int arr[], int low, int high, int x){
    if(low>high)
    return -1;

    int mid=(low+high)/2;
    if(arr[mid]>x)
    return firstOcc(arr,low,mid-1,x);

    else if(arr[mid]<x)
    return firstOcc(arr,mid+1,high,x);

    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        return mid;

        else
        return firstOcc(arr,low,mid-1,x);
    }
}

int main(){
    int arr[]={10,20,20,30,30,30},n=6;
    int x=20;
    
    cout<<firstOcc(arr,0,n-1,x);
    return 0;
}