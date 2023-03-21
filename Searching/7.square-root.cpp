#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int squarefloor(int x){
    int i;
    for(i = 0; i*i <= x; i++);
    return i-1;
}


// navie: o(x^1/2)tc
int squaretfloor(int x){
  
    int i=1;
    while(i*i<=x)
     {
        i++;
     }
    return (i-1);
}
//tc: o(log x)
int sqrtfloor(int x){
    int low=1, high=x, ans=-1;

    while(low<=high){
        int mid= low+(high-low)/2;//prevents overflow of int

        int msq=mid*mid;

        if(msq==x) return mid;//we r simply returning the index only as this is our ans only

        else if(msq>x) high=mid-1;

        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int x= 15;
    cout<<squaretfloor(x)<<endl;
    cout<<sqrtfloor(x)<<endl;
    cout<<squarefloor(x);
    return 0;
}