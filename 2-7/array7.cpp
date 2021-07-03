//second largest
//efficient solution

#include<iostream>
using namespace std;
int SecondLargest(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[largest]<arr[i]){
            res = largest;
            largest =i;
        }

        else if(arr[i]!=arr[largest]){
            if(res = -1 || arr[i]>arr[res])
            res =i;
        }
          

            }
            return res;
    }

  
int main(){
    int arr[]={1,2,55,45},n;
    cout<<SecondLargest(arr,4);
    return 0;
}