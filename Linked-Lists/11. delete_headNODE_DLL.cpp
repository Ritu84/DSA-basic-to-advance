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
Node* delHead(Node* head){
    if(head==NULL || head->next==NULL) return NULL;

    // if(head->next==NULL){
    //     delete head;
    //     return NULL;
    // }
    
    else{
        Node* temp= head->next;
        temp->prev=NULL;
        delete head;
        return temp;
    }
}


int main(){
     Node* head= NULL;
    head= insertbegin(head, 10);
    head= insertbegin(head, 20);
    head= insertbegin(head, 30);
    head= insertbegin(head, 40);

    printlist(head);
    cout<<endl;

    head= delHead(head);
    printlist(head);
    
    return 0;
}