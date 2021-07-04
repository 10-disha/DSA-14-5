//leaders in an array
//efficient method


#include<iostream>
#include<cmath>
using namespace std;

int leaders(int arr[],int n){

 int curr_lead = arr[n-1];
 cout<<curr_lead<<endl;

 for(int i=n-2;i>=0;i--)
 {
     if(arr[i]>curr_lead )
     {
         cout<<arr[i]<<endl;
         curr_lead = arr[i];
     }
 }
 return -1;
}

int main(){
    
    int arr[]={7,10,4,10,6,5,2},n=7;
    leaders(arr,n);
}