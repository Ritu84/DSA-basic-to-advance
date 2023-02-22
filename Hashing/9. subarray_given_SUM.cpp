#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//subarray with given sum and return bool value
int givensum(int a[], int n, int sum){
    for(int i=0; i<n; i++)
    {
        int curr_sum=0;

        for(int j=i; j<n; j++)
        {
         curr_sum += a[j];

         if(curr_sum==sum) return true;
        }
    }
    return false;

}
//o(n)
int givensumsubarray(int a[], int n, int sum){
    unordered_set<int> s;

    int pre_sum=0;

    for(int i=0; i<n; i++){
        pre_sum += a[i];
        
        s.insert(pre_sum);

        if(s.find(pre_sum-sum) != s.end()) return true;
        if(pre_sum==sum) return true;
    }
    return false;
}

int main(){
     int a[]= {3,2,5,6};
     int n=sizeof(a)/sizeof(a[0]);
     int sum=10;
    cout<<givensum(a, n, sum)<<endl;
    cout<<givensumsubarray(a, n, sum);
    
    return 0;
}