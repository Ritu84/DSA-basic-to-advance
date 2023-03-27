#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TC: O(1), AS:O(1);

int findxor(int a){
//gives xor from 0 to a
    if((a%4)==0) return a;
    if((a%4)==1) return 1;
    if((a%4)==2) return a+1;
    return 0;
}

int main(){
    int a=2;
    int b=7;
//range xor for a and b= xor(b)^xor(a-1)
    int ans= findxor(b)  ^ findxor(a-1);
//another method is loop using but TC:O(n) gives TLE for bigge numbers.
    int ans2=0;
    for(int i=a; i<=b; i++){
        ans2^= i;
    }
    cout<<ans2<<"\n";
    cout<<ans;
    return 0;
}