#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//naive: t-O(n2) , as: 
void printfreq(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag=false;

        for(int j=0; j<i;j++) if(arr[i]==arr[j]){ flag=true; break;}
                
               
        if(flag==true) continue;
        
        int freq=1;
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j]) freq++;
        
cout<<arr[i]<<" "<<freq<<endl;
    }
}
int Freqcount(int arr[], int n){
    unordered_map<int, int> m;
    
     //traverse array and store ele in map

     for(int i=0; i<n; i++)
     m[arr[i]]++;
    // for(auto it:m )
    // m[it]++;

    // traverse map and print the key,value pairs
     for(auto x: m)
     cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    int arr[]= {1, 2 , 3, 1, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    printfreq(arr, n);
    cout<<endl;
    Freqcount(arr, n);
    return 0;
}