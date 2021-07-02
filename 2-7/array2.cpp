//searching in an unsorted array
#include<iostream>
#include<cmath>
using namespace std;

int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x)
        return i;
    }

    return -1;
}

int main(){
    int arr[]={23,4,55,66},x=55;
    cout<<search(arr,4,x);
}