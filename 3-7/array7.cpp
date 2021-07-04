//left rotate by D places.
//efficient method

#include<iostream>
#include<cmath>
using namespace std;

void leftRotByD(int arr[],int n,int d){
    int temp[d];

    for(int i=0;i<d;i++)
    {temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {arr[n-d+i]=temp[i];
    }      
}
int main(){
    int arr[]={1,2,3,4,5},n=5,d=2;
    cout<<"before rotation"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    leftRotByD(arr,n,d);

    cout<<"after rotation"<<endl;

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
