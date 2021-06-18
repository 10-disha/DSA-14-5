//efficient method to find 2nd largest element.
#include<iostream>
using namespace std;

int findLargest(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }

        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

int main(){
    int arr[]={12,333,4444,555555},n=4;
    cout<<findLargest(arr,n);
    return 0;
}