//Deletion in an array
#include<iostream>
#include<cmath>
using namespace std;

int deleteElement(int arr[],int n, int x){
     
     int i=0;
    for(i=0;i<n;i++){
        if(arr[i]==x)
        break;
    }
     
     	if(i == n)
		return n;

    for(int j=i;j<n;j++){
        arr[j]=arr[j+1];
    }

    return n-1;
}
int main(){

    int arr[]={2,3,4,5},n=4,x=3;
    
    cout<<"Before deletion"<<endl;

    for(int i=0;i <n;i++)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
     
    n=deleteElement(arr,n,x);

    cout<<"After Deletion:"<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<"";
    }

}