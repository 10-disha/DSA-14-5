//move zeroes to the end 
//naive solution

#include<iostream>
#include<cmath>
using namespace std;

int pushZerosToEnd(int arr[],int n){
   int temp[n];
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                   temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
            }
        }
    }
    return n;

}

int main(){
     int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9},int n =12;
     pushZerosToEnd(arr, n);
     cout << "Array after pushing all zeros to end of array :\n";
      for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}