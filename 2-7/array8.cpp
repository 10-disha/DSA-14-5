//sorted array
//naive method

#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
   
   for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(arr[j]<arr[i])
         return false;
     }
   }

  return true;
}

int main(){
    int arr[]={1,2,3,4,5},n;
    cout<<isSorted(arr,5);
    return 0;
}