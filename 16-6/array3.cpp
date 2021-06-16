//insertion as of GFG

#include<iostream>
#include<cmath>
using namespace std;

int insert(int arr[],int n,int x,int cap,int pos){
    if(n==cap)
      return n;

      int idx=pos-1;
      for(int i=n-1;i>=idx;i--){
          arr[i+1]=arr[i];
      }

      arr[idx]=x;

      return n+1;
}

int main(){
  int cap=5,n=3;
  int arr[5]={3,4,6};
  cout<<"before insertion"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<"";
  }

  cout<<endl;

  int x=7,pos=2;

n=insert(arr,n,x,cap,pos);
cout<<"after insetion"<<endl;

 for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<"";
  }

}
