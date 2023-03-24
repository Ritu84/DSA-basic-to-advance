#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int setbits(int n){
int count=0;
    while(n>0){
        count++;
        // n= n-(n &(-n)); //cout set bits(no of 1'es in it) of a binary number
         n= n& (n-1);//this also can be used.

    }
    return count;
}

int main(){
    int n=1222;

    cout<<bitset<15>(n).to_string()<<endl;

    int ans= setbits(n);
    cout<<ans;

}