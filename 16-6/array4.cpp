//deletion of an element in an array 
#include<iostream>
#include<cmath>
using namespace std;

int deleteEle(int arr[],int n,int x){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        break;
    }
    
    if(i==n)
    return n;

    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }

    return n-1;
}


int main(){
    int arr[]={3,4,66,12,5,6},x=12,n=6;
    cout<<"before deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;

    n=deleteEle(arr,x,n);
    cout<<"after deletion"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    
}



