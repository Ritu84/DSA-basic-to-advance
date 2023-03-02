#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void saydigits(int n, string arr[]){
    //bc
    if(n==0) return;

    //processing
    int digit= n%10;
    n= n/10;

    // rc
    saydigits(n);

    cout<<arr[digits]<<endl;
}

int main(){
    string arr[10]= {"zero", one", "two", "three", "four", "five", "six", "seven", "eight", "nine"    };

    int n;
    cin>>n;

    cout<<endl<<endl<<endl;
    saydigits(n, arr);
      cout<<endl<<endl<<endl;
    
    return 0;
}