#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//return only the distinct ele from the intersection of the  arrays

int unionele(int a[], int b[], int n, int m){
    unordered_set<int> s;
    for(int i=0; i<n; i++) s.insert(a[i]);

    for(int j=0; j<m; j++) s.insert(b[j]);

    return s.size();
}
int UNI(int a[], int b[], int n, int m){
    int c[n+m];
    for(int i=0; i<n; i++) c[i]=a[i];
    for(int i=0; i<m; i++) c[i+n]=b[i];

    unordered_set<int> s;
    for(int i=0; i<m+n; i++) s.insert(c[i]);

    return s.size();
}

int main(){
    int a[]= {1, 2 , 3, 4, 5};
    int b[]= {1, 1, 3, 6};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);

    cout<<unionele(a, b, n, m)<<endl;
    cout<<UNI(a, b, n, m);
    
    return 0;
}