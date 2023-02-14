#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pairswap(Node* head){
    Node* curr= head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data , curr->next->data);
        curr= curr->next->next;
    }
}

int main(){
    
    return 0;
}