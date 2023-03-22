#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

// method 1: simply iterate through array and compare x with each element and if found equal return its index
//tc:o(n), as:o(1)

//2. apply bs and find mid...find whether left half is sorted or right half is sorted ......find whether x lies in the range between low to mid or mid to high

int sortedrotated(int arr[], int n, int x){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x) return mid;

        //left half sorted?
        if(arr[low]<arr[mid]){
            if(x>=arr[low] && x<arr[mid]) high=mid-1;//check whether x lies in the range or not
            else low=mid+1;
        }
        //right half sorted?
        else{
            if(x>arr[mid] && x<=arr[high]) low=mid+1;
            else high=mid-1;
        }
    }
    return -1;
    
}

int main(){
    int arr[]={10, 20, 40, 60, 5, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x=5;

    cout<<sortedrotated(arr, n, x);

    return 0;
}