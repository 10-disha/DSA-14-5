//largest element 
//naive approach

#include<iostream>
#include<cmath>
using namespace std;
 
int largest(int arr[],int n){
    int i;
     bool flag;
    for(i =0;i<n;i++){
       bool flag= true;
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j])
            bool flag = false;
        }
        if(flag == true)
    return i;
    }
    return -1;
}

int main(){
    int arr[]={3,4,56,77,78};
    cout<<largest(arr,5);
    return 0;
    
}