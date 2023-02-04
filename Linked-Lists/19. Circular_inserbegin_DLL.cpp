#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data=x;
        prev= next= NULL;
        
    }
};
void Printlist(Node* head){
    if(head==NULL) return;

    Node* curr= head;
    do
    {
        cout<<curr->data<<' ';
        curr= curr->next;
    } while(curr!=head);
}
Node* insertbegin(Node* head, int d){
    Node* temp= new Node(d);
    if(head==NULL){
        temp->prev=temp;
        temp->next=temp;
        return temp;
    }

    temp->prev= head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;

    return temp;
}
// same as above only change is return the same head instead of new head as temp
Node* insertend(Node* head, int d){
    Node* temp= new Node(d);
    if(head==NULL){
        temp->prev=temp;
        temp->next=temp;
        return temp;
    }

    temp->prev= head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;

    return head;
}


int main(){
    //  Node* head= new Node(10);
    // head->next= new Node(13);
    // head->next->next= new Node(14);
    // head->next->next->next = head;
    // Node* head= NULL;
    // head= insertbegin(head, 20);
    // head= insertbegin(head, 40);
    // head= insertbegin(head, 50);
    // head= insertbegin(head, 30);
    // Printlist(head);
    // cout<<endl;

    Node* head= NULL;
    head= insertend(head, 20);
    head= insertend(head, 40);
    head= insertend(head, 50);
    head= insertend(head, 30);
    Printlist(head);



    return 0;
}