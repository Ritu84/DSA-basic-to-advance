#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node* head){
    if(head==NULL) return;
    cout<<head->data<<' ';
    printlist(head->next);
}
Node* revlist(Node* head){
    Node* curr= head;
    Node* prev= NULL;

    while(curr!=NULL){
        Node* next= curr->next;
        curr->next= prev;
        prev= curr;
        curr=next;
    }
    return prev;
}


int main(){
      Node* head= new Node(100);
    head->next=  new Node(200);
    head->next->next=  new Node(500);
    head->next->next->next=  new Node(90);
    head->next->next->next->next=  new Node(500);
    head->next->next->next->next->next=  new Node(500);
    printlist(head);

    cout<<endl;

    head= revlist(head);
    printlist(head);  

    return 0;
}