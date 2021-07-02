//largest element 
//efficient approach
#include<iostream>
using namespace std;

int largest(int arr[],int n){
     int res=0;
    for(int i=1;i<n;i++){
        if(arr[res]<arr[i])
        res=i;
    }
    return res;
}

int main(){
    int arr[]={3,4,56,77,78};
    cout<<largest(arr,5);
    return 0;
    
}