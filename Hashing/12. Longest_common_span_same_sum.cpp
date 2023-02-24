#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int commonspan(int a[], int b[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        int sum1=0;
        int sum2=0;
        for(int j=i; j<n; j++){
            sum1= sum1+a[j];
            sum2= sum2+b[j];

            if(sum1==sum2) {res=max(res, j-i+1);}
        }
    }
    return res;
}
int comSpanSum(int a[], int b[], int n){
    //create temp array
    int temp[n];
    for(int i=0; i<n; i++){
        temp[i]= a[i]-b[i];
    }
    unordered_map<int , int> m;
    int pre_sum=0;
    int res=0;
    for(int i=0; i<n; i++){
        pre_sum += temp[i];

        if(pre_sum==0) res=i+1;
        m.insert({pre_sum, i});
        if(m.find(pre_sum-0) != m.end()){
            res= max(res, i-m[pre_sum-0]);
        }


    }
    return res;

}

int main(){
    int a[]= {0, 1, 0, 0, 0, 0};
    int b[]= {1, 0, 1, 0, 0, 1};
    int n=6;
    // int n= sizeof(a)/sizeof(a[0]);
    // int m= sizeof(b)/sizeof(b[0]);

    cout<<commonspan(a, b, n);
    cout<<comSpanSum(a, b, n);
    return 0;
}