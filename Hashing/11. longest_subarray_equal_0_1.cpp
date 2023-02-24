#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int longsub(int a[], int n){
    int res=0;

    for(int i=0; i<n; i++){
        int co=0;
        int c1=0;
        for(int j=i; j<n; j++){
            if(a[j]==0) co++;
            else c1++;

            if(co==c1){
                res= max(res, j-i+1);
            }
        }
    }
    return res;
}

int main(){
    int a[]= {0, 0, 1, 1, 1, 1, 0};
     int n=sizeof(a)/sizeof(a[0]);
    

    //  cout<<longestsum(a, n ,  sum);
     cout<<longsub(a, n );
    return 0;
}