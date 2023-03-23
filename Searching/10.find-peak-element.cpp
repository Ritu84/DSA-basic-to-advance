#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//peak ele: gretaer than its neighbour

int getpeak(int arr[], int n){
    if(n==1) return arr[0];
    if(arr[0]>=arr[1]) return arr[0];
    if(arr[n-1]>=arr[n-2]) return arr[n-1];

    for(int i=1; i<n-1; i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) return arr[i];
    }
    return -1;
}
int findpeak(int arr[], int n){
    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])) return arr[mid];

        if(mid>0 && arr[mid-1]>=arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(){
    int arr[]={10, 20, 40, 60, 5, 8};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<getpeak(arr, n)<<endl;
    cout<<findpeak(arr, n);
    
    return 0;
}