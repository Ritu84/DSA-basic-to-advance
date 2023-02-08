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
void Remdup(Node* head){
    //raverse through ll and compare curr and its next data .......if same delete the next node and then link curr to next of deleted node and if not same move forward;s
    Node* curr= head;

    while(curr!=NULL && curr->next!=NULL){
        if(curr->data== curr->next->data){
            Node* temp= curr->next;
            curr->next= curr->next->next;
            delete temp;
        }
        else curr=curr->next;
    }
}

int main(){
      Node* head= new Node(100);
    head->next=  new Node(200);
    head->next->next=  new Node(500);
    head->next->next->next=  new Node(500);
    head->next->next->next->next=  new Node(500);
    head->next->next->next->next->next=  new Node(600);
    printlist(head);
    cout<<endl;

     Remdup(head);
    printlist(head);
    return 0;
}