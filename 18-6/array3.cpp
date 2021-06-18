//naive method to find second largest element.
#include<iostream>
using namespace std;

int getSecond(int arr[],int n){
    int largest=getLargest(arr,n);
    int res=-1;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
            res=i;

            else if(arr[i]>arr[res])
            res=i;
        }
    }

    return res;
}

int getLargest(int arr[],int n){
  int largest=0;
   for(int i=0;i<n;i++){
       if(arr[largest] < arr[i])
       largest=i;
   }

   return largest;
}

int main(){
    int arr[]={2,4,55,33},n=4;
    cout<<getSecond(arr,n);
    return 0;
}