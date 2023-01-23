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

int main(){
    Node* head= NULL;
    head= insertend(head, 100);
    head= insertend(head, 400);
    head= insertend(head, 600);
    

    printlist(head);


    return 0;
}
