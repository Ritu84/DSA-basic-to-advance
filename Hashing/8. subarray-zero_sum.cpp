#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int sumzero(int a[], int n){//o(n2) solution
    for(int i=0; i<n; i++){
        int curr_sum=0;
        for(int j=i; j<n; j++){
            curr_sum += a[j];
         
        if(curr_sum==0) return true;}
    }
    return false;
}
int zerosum(int a[], int n){
    unordered_set<int> s;
        int pre_sum=0;

    for(int i=0; i<n; i++){
       pre_sum += a[i];

       if(s.find(pre_sum) != s.end()) return true;//finding the prefix sum if already present or not..if present return true

       if(pre_sum==0) return true;//case when we find the prefix sum as 0 in the starting itself

       s.insert(pre_sum);
    }
    return false;
}

int main(){
     int a[]= {-3, 4, -3, -1, 5 };
    int n=sizeof(a)/sizeof(a[0]);

    cout<<sumzero(a, n);
    cout<<zerosum(a, n);
    return 0;
}