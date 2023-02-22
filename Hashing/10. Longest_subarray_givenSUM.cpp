#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

//time: O(n2), as: O(1)
int longestsum(int a[], int n, int sum){
    int res=0;

    for(int i=0; i<n; i++){
        int curr_sum=0;

        for(int j=i; j<n; j++){
            curr_sum= curr_sum+ a[j];

            if(curr_sum==sum) {
                res= max(res, j-i+1);
            }
        }

    }
    return res;
}
//o(n)
int longsubsum(int a[], int n, int sum){
    unordered_map<int, int> m;
    int pre_sum=0;
    int res=0;

    for(int i=0; i<n; i++){
        pre_sum += a[i];//calculate prefix sum

        if(pre_sum==sum) res=i+1;//cond. 1 when sum present in prefix sum already

        // if(m.find(pre_sum)==m.end()) {
        //     m.insert({pre_sum, i});
        // }//creating map with key,values as we are finding the prefix sum and when we are not finding it we are simply adding them as key,val pairs  

        if(m.find(pre_sum-sum) != m.end()){
            res= max(res, i-m[pre_sum-sum]);
        }//cond. 2 when subtrac. of 2 is present in map
        m.insert({pre_sum, i});
    }
    return res;
}

int main(){

     int a[]= {5, 8, -4, -4, 9, -2, 2};
     int n=sizeof(a)/sizeof(a[0]);
     int sum=0;

     cout<<longestsum(a, n ,  sum);
     cout<<longsubsum(a, n ,  sum);
     

    return 0;
}