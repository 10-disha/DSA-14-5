//leader in an array
//naive solution

#include<iostream>
#include<cmath>
using namespace std;

int leaders(int arr[],int n){

 for(int i=0;i<n;i++){
     bool flag = true;

     for(int j=i+1;j<n;j++){
           if (arr[j]>=arr[i])
           {
              flag = false;
              break;
           }
           
     }

     if(flag==true)
     cout<<arr[i]<<endl;
 }
 return -1;

}

int main(){
    
    int arr[]={7,10,4,10,6,5,2},n=7;
    leaders(arr,n);
}