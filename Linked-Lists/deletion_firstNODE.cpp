#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int x){
        value=x;
        next= NULL;
    }
};


void printlist(Node* head){
    // Node* curr=head;
    // while(curr != NULL){
    //     cout<<curr->value<<' ';
    //     curr= curr->next;
    // }
    if(head==NULL) return;
    cout<<head->value<<' ';
    printlist(head->next);
    
}
// Node* insertend(Node* head, int x){
//    Node* temp= new Node(x);
   
// //    case when  head is null, then return temp where memory is allocated
//    if(head==NULL) return temp;

//    Node* curr= head;
//    while(curr->next!=NULL)
//       curr= curr->next;

//     curr->next= temp;

//     return head;  
// }
Node* insertbegin(Node* head, int x){
    Node* temp= new Node(x);
    temp->next=head;

    return temp;
}

Node* deletefirstnode(Node* head){
    //1.   no ele is present 
    if(head==NULL) return NULL;

    //2.   1ele is present
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    // 3.  normal case
    Node* temp= head->next;
    delete head;

    return temp;
    
}

int main(){
     Node* head= NULL;
    head= insertbegin(head, 100);
    head= insertbegin(head, 400);
    head= insertbegin(head, 600);
    printlist(head);
    cout<<endl;
    head=  deletefirstnode(head);
    head=  deletefirstnode(head);
    printlist(head);

   
    return 0;
}
