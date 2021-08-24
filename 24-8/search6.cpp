//last occurrence
//recursive solution

#include<iostream>
using namespace std;

int lastOcc(int arr[], int low,int high,int x, int n){
    if(low>high)
     return -1;

     int mid=(low+high)/2;

     if(x>arr[mid])
        return lastOcc(arr, mid+1, high,x,n);

     else if(x<arr[mid])
        return lastOcc(arr,low,mid-1,x,n);

      else 
      {
          if(mid == n-1 || arr[mid+1] != arr[mid])
          return mid;

          else 
             return lastOcc(arr,mid+1,high,x,n);
      }     
}

int main(){
    int arr[]={10,20,20,30,30,30},n=6;
    int x=30;
    
    cout<<lastOcc(arr,0,n-1,x,n);
    return 0;
}