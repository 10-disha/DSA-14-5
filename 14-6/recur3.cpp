//find sum from given subset elements

#include<iostream>
#include<limits.h>
using namespace std;

int subsetsum(int arr[],int n,int sum){
    if(n==0)
    return sum==0?1:0;

   return subsetsum(arr, n-1, sum) + subsetsum(arr, n-1, sum - arr[n-1]);
}


int main(){
   int n=3,arr[]={10,15,20},sum=25;
   cout<<subsetsum(arr,n,sum);
   return 0;
}