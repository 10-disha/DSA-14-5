//left rotate by D places.
//naive method



#include<iostream>
using namespace std;

void leftRotByOne(int arr[],int n){
    
    int temp=arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    	arr[n - 1] = temp;
}

void rotbyd(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        leftRotByOne(arr,n);
    }
}
int main(){
    int arr[]={1,2,3,4,5},n=5,d=2;
    cout<<"before rotation"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    rotbyd(arr,n,d);

    cout<<"after rotation"<<endl;

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}