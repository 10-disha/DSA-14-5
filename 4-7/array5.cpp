//frequency of an element in an array

#include<iostream>
using namespace std;

void freq(int arr[],int n){

    int fre =1,i=1;
    while(i<n){
        while((i<n) && (arr[i]==arr[i-1]))
        {
            fre++;
            i++;
        }

        cout<<arr[i-1]<<" "<<fre <<endl;
        i++;
        fre=1;
    }

    if(n==1 || arr[n-1] != arr[n-2])
    cout<<arr[n-1]<<" " <<"1";

}

int main() {
	
      int arr[] = {2, 3,3,3, 10,10,10, 6,6,6, 4, 8, 1}, n = 13;

      freq(arr, n);
    
}
