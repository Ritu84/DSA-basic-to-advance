#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printf(int ind, vector<int> &v, int s, int k, int arr[], int n){
    if(ind==n){
        if(s==k){
            for(auto it: v) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    // pick cond
    v.push_back(arr[ind]);
    s+= arr[ind];
    printf(ind+1, v, s, k, arr, n);
    s-=arr[ind];
    v.pop_back();

    // not pick
    printf(ind+1, v, s, k, arr, n);




}

int main(){
    int arr[]={1, 2, 1};
    int  n=3;
    int  sum=2;
    vector<int> v;
    printf(0, v, 0, sum, arr, n);
    
    return 0;
}
