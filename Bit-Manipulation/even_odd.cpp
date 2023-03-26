#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//below fn is for odd no checking 
bool odd(int n){
    return n & 1 == 1 ;
}

int main(){
 int n;
 cin>>n;
 int ans= odd(n);
 cout<<ans;
    
    return 0;
}
}