#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

//naive
int ispair(int a[], int n, int sum){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==sum) return true;
        }
        
    }
    return false;
}
//o(n)
int pairsum(int a[], int n, int sum){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.find(sum-a[i]) != s.end()) return true;

        s.insert(a[i]);
    }
    return false;
}

int main(){
     int a[]= {11, 5,8};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=10;

    cout<<pairsum(a, n, sum)<<endl;
    cout<<ispair(a, n, sum);
    return 0;
}