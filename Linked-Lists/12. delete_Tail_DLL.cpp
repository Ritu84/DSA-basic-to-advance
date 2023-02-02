#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data=x;
        prev=next=NULL;
    }
};
void printlist(Node* head){
    if(head==NULL) return;
    cout<<head->data<<' ';
    printlist(head->next);
}
Node* delTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;

    Node* curr= head;
    while(curr->next!=NULL)
    curr= curr->next;

    curr->prev->next=NULL;
    delete curr;

    return head;
}

int main(){
    Node* head= new Node(10);
    Node* head1= new Node(30);
    head->next=head1;
    head1->prev=head;
    printlist(head);
    cout<<endl;

    head=delTail(head);
    printlist(head);
    
    return 0;
}