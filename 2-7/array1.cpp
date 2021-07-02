//insertion in an array

#include<iostream>
#include <cmath>
using namespace std;

int insertelement(int arr[],int n,int element,int position,int capacity){

    if(n== capacity)
    return n;
    
    int indx=position-1;
    for(int i=n-1;i>=indx;i--){
        arr[i+1]=arr[i];
       
    }
     arr[indx]=element;
     return n+1;
}

int main()
{
     int arr[5]={2,3,4}, capacity=5,n=3;
     cout<<"before insertion:"<<endl;

     for(int i=0; i<n; i++)
     {
            cout<<arr[i]<<"";
     }

  cout<<endl;

  int element =7, position =2;
  n=insertelement(arr,n,element,capacity,position);
  cout<<"after insertion:"<<endl;

  
     for(int i=0; i<n; i++)
     {
            cout<<arr[i]<<"";
     }

}