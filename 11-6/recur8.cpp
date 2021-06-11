//print 1 to n using recursion
#include<iostream>
using namespace std;

void fun(int n){

    if(n==0)
          return;
    
    fun(n-1);
    cout<<n<<"";

}

int main(){
    fun(5);
    return 0;
}