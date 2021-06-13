//print subsets/subsequemces of a given string

#include<iostream>
#include<string>
// #include <bits/stdc++.h>
using namespace std;
 
void subsets(string &str,string curr,int i){
    if(i==str.length()){
            cout<<curr<<" ";
             return;
    }

    subsets(str,curr,i+1);
    subsets(str,curr+str[i],i+1);
} 
int main(){
    string str="ABCD";
    subsets(str,"",0);
    return 0;
}