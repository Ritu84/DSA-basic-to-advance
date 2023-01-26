#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void Printlist(Node* head){
    if(head==NULL) return;

    Node* curr= head;
    cout<<curr->data<<' ';
    Printlist(curr->next);

    /*iterative:
    Node* curr= head;
    while(curr!=NULL)
    cout<<curr->data<<' ';
    curr=curr->next;
    */
}
// Node* insertbegin(Node* head, int x){
//     Node* temp= new Node(x);
//     temp->next= head;

//     return temp;
// }
Node* insertend(Node* head, int x){
    // allocating memory to value to be inserted
    Node* temp= new Node(x);
    // if there is no element in ll
    if(head==NULL) return temp;

    Node* curr= head;
    while(curr->next!=NULL)
       curr=curr->next;
  
    // when cond. becomes false ie, reaches to the end
    curr->next= temp;

    return head ;
}
Node* delete_end(Node* head){
    // 1. empty LL
    if(head==NULL) return NULL;

    // 2. 1Node is present
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    // 3. Normal case:=
    Node* curr= head;
    while(curr->next->next!=NULL)
        curr= curr->next;

    delete(curr->next);
    curr->next=NULL;

    return head;    
}


int main(){
    Node* head=NULL;
    head=insertend(head, 10);
    head=insertend(head, 20);
    head=insertend(head, 30);
    head=insertend(head, 40);

    Printlist(head);
    cout<<endl;

    head= delete_end(head);
    // head= delete_end(head);
    
    Printlist(head);

    return 0;
}
