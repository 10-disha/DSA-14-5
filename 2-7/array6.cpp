//finding second largest element 
//naive approach
#include<iostream>
using namespace std;
int SecondLargest(int arr[],int n){

 int res= getLargest(arr,n);
   int ans=-1;
   for(int i=0;i<n;i++){
       if(arr[i]!=arr[res]){
           if(ans==-1)
           ans=i;

           else if(arr[i]>arr[ans])
           ans=i;
            }
   }
   return ans;

}
int getLargest(int arr[],int n){
     int res=0;
     for(int i=0;i<n;i++){
         if(arr[i]>arr[res])
         res=i;
     }
     return res;
}

int main(){
    int arr[]={1,2,55,45},n;
    SecondLargest(arr,4);
    return 0;
}