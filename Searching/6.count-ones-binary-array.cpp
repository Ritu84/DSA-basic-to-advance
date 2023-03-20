#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int countones(int arr[], int n){
    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==0) low=mid+1;//right half

        else{
            if(mid==0 || arr[mid-1]==0) return(n-mid);//case when no. will appear first time in both cases

            else high=mid-1;//go to left half
        }

    }
    return 0;
}

int main(){
    int arr[]={0,0,1,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    // int x=3;

    cout<<countones(arr,n);

    return 0;
}