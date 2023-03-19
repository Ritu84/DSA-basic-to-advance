#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//tc:o(logn), sc:o(1)
int lastoccur(int arr[], int n, int x){
    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>x) high=mid-1;
        else if(arr[mid]<x) low=mid+1;
        //mid==x
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1]) return mid;
            else low=mid+1;//go to right half

        }
    }
    return -1;
}

int main(){
    int arr[]={1, 3, 3, 4, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x=3;

    cout<<lastoccur(arr,n, x);

    return 0;
}