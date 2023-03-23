#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

// 1. given unsorted array and need to find there is a pair whose sum equals the given sum or not ....if yes then return true else return false.
// ->1] run 2 loops find whether a[i]+a[j]==given sum .......t:o(n2), as:o(1)
// ->2]hashing :compute hash table ..put all elements in it and search sum-a[i] in the map made......tc:o(n),o(n)as


// 2. given sorted array ,,find pair if there is a pair with given sum?
// 2 pointer approach : declare left=0 and right=n-1 as 2 pointers ...if(l+r)>givensum then r--; else l++.
bool ispair(int arr[], int n,int x){
    int left=0, right=n-1;

    while(left<right){
        if(arr[left]+arr[right]==x) return true;
        if(arr[left]+arr[right]>x) right--;
        else left++;
    }
    return false;
}
// 3.given sorted array and sum...find triplet with given sum or not.
// ->1.using 3 loops :tc:o(n3),as:o(1)
// ->2.tc:o(n2) as follows:
bool findtriplet(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(ispair(arr,i+1,n-1,x-arr[i])) return true;

    }
    return false;

}
bool triplet(int arr[], int n, int x){
    int left, right;

    for(int i=0; i<n-2; i++){
        left=i+1;
        right=n-1;

        if(arr[i]+arr[left]+arr[right] == x) return true;
        else if(arr[i]+arr[left]+arr[right] > x) right--;
        else left++;
    }
    return false;
}

int main(){
    int *arr={1,2, 3, 4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x=9;

    // cout<<findpair(arr, n, x);
    cout<<triplet(arr, n, x);
    
    return 0;
}