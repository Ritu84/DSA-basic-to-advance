#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
// insert fn.

    s.insert(2); 
    s.insert(4);
    s.insert(6);
    // traversing the set
    for(auto it: s)
     cout<<it<<' ';
// here begin and end are 2 pointers so we are returning address of iterator:=
     for(auto it=s.begin();  it!=s.end(); it++)
      {cout<<*it<<" ";}

      cout<<endl;
//size fn.
      cout<<s.size()<<endl;
      // s.clear();
      // cout<<s.size()<<endl;

//find fn.:it return some value but count fn returns 0 or 1
// if(s.find(4)==s.end()) cout<<"not found"<<endl;
if(s.find(4)!=s.end()) cout<<"found"<<" "<<*(s.find(4))<<endl;
else cout<<"not found"<<endl;

if(s.count(6)) cout<<"found"<<endl;
else cout<<"not found"<<endl;

// erase fn.1.paasing the ele and delete.......2.passing it and delete
cout<<s.size()<<" ";
s.erase(4);
cout<<s.size()<<" ";
auto it= s.find(6);
s.erase(6);
cout<<s.size()<<" ";
s.erase(s.begin(), s.end());
s.empty();
cout<<s.size()<<" ";
    
    return 0;
}
