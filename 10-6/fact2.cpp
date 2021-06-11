#include<iostream>
using namespace std;

int Facto(int n){
    if(n==0)
    return 1;

    return n*Facto(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<Facto(n);
    return 0;
}