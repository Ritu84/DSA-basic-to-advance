#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// insert given value such that ll remains in the sorted order

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
Node* sortedinsert(Node* head, int d){
    Node* temp= new Node(d);

    // 1. empty ll
    if(head==NULL) return temp;

    //2. insert begin
    if(head->data>d){
        temp->next= head;
        return temp;
    }

    //3. insert anyposition in between  or at end of ll
    Node* curr= head;
    while(curr->next!=NULL && curr->next->data<d)
    curr= curr->next;

    temp->next= curr->next;
    curr->next= temp;

    return head;
}

int main(){
     Node* head= new Node(100);
    head->next=  new Node(200);
    head->next->next=  new Node(500);
    printlist(head);
    head= sortedinsert(head, 205);
    head= sortedinsert(head, 50);
    head= sortedinsert(head, 5007);
    cout<<endl;
    printlist(head);

    return 0;
}