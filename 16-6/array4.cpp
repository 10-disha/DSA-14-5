//deletion of an element in an array 
#include<iostream>
#include<cmath>
using namespace std;

int delete(int arr[],int n,int x){
    
}


int main(){
    int arr[]={3,4,66,12,5,6},x=12,n=6;
    cout<<"before deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;

    n=delete(arr[],x,n);
    cout<<"after deletion"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    
}



