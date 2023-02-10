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
bool isloop(Node* head){
    Node* slow= head;
    Node* fast= head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast) return true;
    }
    return false;
}


int main(){
    //   Node* head= new Node(100);
    // head->next=  new Node(200);
    // head->next->next=  new Node(500);
    // head->next->next->next=  new Node(500);
    // head->next->next->next->next=  new Node(500);
    // head->next->next->next->next->next=  new Node(600);
    // head->next->next->next->next->nex->next=  ;
    Node* head= new Node(10);
    Node* temp1= new Node(20);
    Node* temp2= new Node(30);

    head->next=temp1;
    temp1->next=temp2;


    printlist(head);
    cout<<endl;

    cout<<isloop(head);
    


    return 0;
}