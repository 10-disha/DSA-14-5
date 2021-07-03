//sorted array 
//efficient approach

#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
   
   for(int i=0;i<n;i++){
       if(arr[i]<arr[i-1])
       return false;
   }

   return true;
}

int main(){
    int arr[]={2,3,44,55,66},n;
    cout<<isSorted(arr,5);
    return 0;
}