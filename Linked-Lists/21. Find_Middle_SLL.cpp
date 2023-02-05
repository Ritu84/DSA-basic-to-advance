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
void middleinsert(Node* head){
    if(head==NULL) return;

    int count=0;
    Node* curr;

    //count the nodes
    for(Node* curr= head; curr!=NULL; curr=curr->next)
     count++;

     curr= head;

     //go till half of ll and print middle element
     for(int i=0; i<count/2; i++)
     curr= curr->next;

     cout<<curr->data;
}
void Middleinsert(Node* head){
    if(head==NULL) return;

    Node* slow= head;
    Node* fast= head;

    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast= fast->next;
    }
    cout<<slow->data;
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
    middleinsert(head);
    cout<<endl;
    middleinsert(head);
    return 0;
}