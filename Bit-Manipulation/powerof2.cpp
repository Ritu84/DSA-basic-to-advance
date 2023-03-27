#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;// fix for value of n as 0 to return as false

    bool ans= (n & (n-1))==0;

    cout<<ans;
    return 0;
}