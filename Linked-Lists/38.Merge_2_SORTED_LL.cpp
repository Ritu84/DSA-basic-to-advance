#include<iostream>
#include<bits/stdc++.h>
using namespace std;

Node* mergesorted(Node*a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;

    Node* head=NULL;
    Node* tail=NULL;
// compare heads of both ll
    if(a->data<=b->data){
        head=tail=a;
        a= a->next;
    }
    else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL &&b!=NULL){
        if(a->data<=b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL) tail->next=b;
    else tail->next=a;

    return head;
}

int main(){
    
    
    return 0;
}