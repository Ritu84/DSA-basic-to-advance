#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next= NULL;
        
    }
};
//using for loop:
void printlist(Node* head){
    if(head==NULL) return;

    cout<<head->data<<' ';

    for(Node* curr= head->next; curr!=head; curr=curr->next)
        cout<<curr->data;
}
// using do while loop
void Printlist(Node* head){
    if(head==NULL) return;

    Node* curr= head;
    do
    {
        cout<<curr->data<<' ';
        curr= curr->next;
    } while(curr!=head);
}


int main(){
    Node* head= new Node(10);
    head->next= new Node(13);
    head->next->next= new Node(14);
    head->next->next->next = head;

//  Node* head= new Node(10);
//     Node* temp1= new Node(20);
//     Node* temp2= new Node(30);

//     head->next=temp1;
//     temp1->next=temp2;
//     temp2->next=head;
    printlist(head);
    cout<<endl;
    Printlist(head);



    
    return 0;
}