#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;
// insert fn.
    m.insert({"ritu", 2});
    m["gfg"]= 1;
    m["ide"]= 3;

    for(auto it: m) cout<<it.first<<" "<<it.second<<endl;
// search fn.
if(m.find("ritu") != m.end()) cout<<"found"<<endl;
else cout<<"not found"<<endl;//find key present or not

auto it= m.find("ide");//find value of key to be found
if(it!= m.end()) cout<<it->second<<endl;

for(auto it=m.begin(); it!=m.end(); it++){// here they are pointers so use arrow operators
    cout<<it->first<<" "<<it->second<<endl;

    //delete fn.
    cout<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin(), m.end());
    cout<<m.size();
}
    return 0;
}