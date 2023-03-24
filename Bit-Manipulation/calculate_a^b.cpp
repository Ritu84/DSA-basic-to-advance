#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int base=3;
    int power= 2;

    int ans=1;
    
    while(power>0){
        if((power&1)==1) ans=ans*base;//

        base=base*base; //doubling the base everytime
        power= power>>1;//updating the value of power everytime
    }
    cout<<ans;
    return 0;
}