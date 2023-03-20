#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

// tc:o(log n)
int firstoccur(int arr[], int n, int x){
    int low=0, high=n-1;

    while(low<=high){
        int mid= (low+high)/2;

        if(arr[mid]<x) low=mid+1;

        else if(arr[mid]>x) high=mid-1;

        else{
            if(mid==0 || arr[mid-1] != arr[mid]) return mid;

            else high=mid-1;//go to left half
        }
    }
    return -1;
}
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

int countoccurences(int arr[], int n, int x){
    int first= firstoccur(arr,n,x);

    if(first==-1) return 0;
    else return(lastoccur(arr,n,x)-first+1);
}



int main(){
int arr[]={1, 3, 3, 4, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x=3;

    cout<<countoccurences(arr,n, x);






   return 0;


}