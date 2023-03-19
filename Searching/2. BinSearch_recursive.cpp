#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
// tc:O(log n), as:O(log n)
int bsearch(int arr[], int low, int high, int key){
    if(low>high) return -1;

    int mid=(low+high)/2;

    if(arr[mid]==key) return mid;

    else if(arr[mid]>key) return bsearch(arr, low, mid-1, key);
    else  return bsearch(arr, mid+1,high, key);
}

int main(){
    int arr[]={1, 2, 3, 4, 5};
    // int n= sizeof(arr)/sizeof(arr[0]);
    int key=3;

    cout<<bsearch(arr,0,4, key);
    return 0;
}