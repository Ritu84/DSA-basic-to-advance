#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest){
    cout<<"source"<<src<<"destination"<<dest<<endl;

    if(src==dest)
    { cout<<"ghar pahuch gaya"<<endl;   
    return;
    }

    //processing - ek step aage badhao
    src++;
    //fn call again
    reachHome(src, dest);
}

int main(){
    int src=1;
    int dest=10;
    
    reachHome(src, dest);
    
    return 0;
}