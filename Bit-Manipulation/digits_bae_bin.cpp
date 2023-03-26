#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int b=10;

    int ans= int(log(n)/log(b))+1;
    cout<<ans;
    return 0;
}