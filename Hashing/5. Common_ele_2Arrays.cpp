#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//effi: O(m+n), as:O(m)
int commonele(int a[], int b[], int n, int m){
    unordered_set<int> s;
//make a set and put all elements of first array inside it
    for(int i=0; i<n; i++) s.insert(a[i]);

    int res=0;
    for(int j=0; j<m; j++){
        //find the second array ele in the set and if equal then increase the res
        if(s.find(b[j])!= s.end()) res++;

        s.erase(b[j]);//basically if it contains then a[i]=b[j] then delete that ele from set
    }
    return res;
}
int intersectionele(int a[] int b[], int n, int m){
    //check whether that ele appeared before in the aray or not
    int res=0;
    for(int i=0; i<n; i++){
        bool flag= false;
        for(int j=0; j<i; j++) if(a[i]==a[j]){flag= true; break;}

        if(flag==true) continue;
    }
    for(int j=0; j<m; j++){
        if(a[i]==b[j]) res++;
        break;
    }
    return res;
}

int main(){
    int arr[]= {1, 1, 1};
    int brr[]= {1, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);

    cout<<commonele(arr, brr, n,m);
    // cout<<intersectionele(a, b, n ,m);
    return 0;
}