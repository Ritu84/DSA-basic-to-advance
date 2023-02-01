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
Node* insertbegin(Node* head, int value)
{
    Node* temp= new Node(value);
    temp->next= head;

    if(head==NULL) return temp;
    
//base case to link previous of head to temp variable
    if(head!=NULL)
      head->prev=temp;

    return temp;  

}


Node* reversedll(Node* head){
    if(head==NULL || head->next==NULL) 
       return head;//1. empty ll or only ele is present
    
    Node* curr= head;
    Node* prev= NULL;


    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next=prev;

        curr= curr->prev;//not curr->next beacuse now prev has become the next of ll->
    }
    
    return prev->prev;
}

int main(){
    // Node* head = new Node(10);
    // Node* temp1= new Node(20);
    // Node* temp2= new Node(30);
    // head->next=temp1;
    // temp1->prev=head;
    // temp1->next=temp2;
    // temp2->prev=temp1;
    // printlist(head);
    // cout<<endl;

    // head=reversedll(head);
    // printlist(head);

     Node* head= NULL;
    head= insertbegin(head, 10);
    head= insertbegin(head, 20);
    head= insertbegin(head, 30);
    head= insertbegin(head, 40);

    printlist(head);
    cout<<endl;
    head=reversedll(head);
    printlist(head);

    return 0;
}