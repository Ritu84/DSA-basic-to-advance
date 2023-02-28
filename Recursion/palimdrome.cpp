#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palim(int i, string &s){
    if(i>=s.size()/2) return true;

    if(s[i] != s[s.size()-i-1]) return false;

    return palim(i+1,s);
}

int main(){
    string s= "ritu";
    cout<<palim(0,s);
    
    return 0;
}