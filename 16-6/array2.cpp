//to insert an element in the given array

#include<iostream>
using namespace std;

int main(){
    int array[100],position,value,n,c;
    cout<<"enter the no. of elements"<<endl;
    cin>>n;

    cout<<"enter the elements"<<endl;
    for(c=0;c<n;c++){
        cin>>array[c];
    }

    cout<<"enter position where element to be inserted"<<endl;
    cin >>position;

    cout<<"enter value of an element to be inserted"<<endl;
    cin>>value;

    for(c=n-1; c>=position -1;c--){
      array[c+1]=array[c];
    }
    array[position-1]=value;

    cout<<"resultant array:"<<endl;
     for(c=0;c<n;c++){
        cout<<array[c]<<endl;
    }
   return 0;
}