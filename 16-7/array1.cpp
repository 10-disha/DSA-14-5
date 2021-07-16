//minimum group flips to make the same array 

#include<iostream>
using namespace std;
int printGroups(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            if(arr[i]!=arr[0])
              cout<<"from"<<i<<"to";

            else  
              cout<<i-1<<endl;  
        }
    }
    return -1;
}
int main() {
	
     int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0}, n = 9;

     printGroups(arr, n);
    
}