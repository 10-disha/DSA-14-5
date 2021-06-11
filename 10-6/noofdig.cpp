
//method 1 --iterative solution
#include<iostream>
using namespace std;

int CountDig(long n){
    int count=0;
    while(n!=0){
        n=n/10;
        ++count;
    }

    return count;
}

int main(void){
    long n;
    cin>>n;
    cout<<CountDig(n);
    return 0;
}