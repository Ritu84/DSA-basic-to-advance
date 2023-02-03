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
void Printlist(Node* head){
    if(head==NULL) return;

    Node* curr= head;
    do
    {
        cout<<curr->data<<' ';
        curr= curr->next;
    } while(curr!=head);
}
//Naive.O(n)
Node* deletebegin(Node* head){
    if(head==NULL) return NULL;

    if(head->next==head){
        delete head;
        return NULL;
    }
    Node* curr = head ;
    while(curr->next!=head)
    curr=curr->next;

    curr->next= head->next;
    delete head;

    return (curr->next);

}
//optimize.O(1)
Node* DelFirst(Node* head){
    if(head==NULL) return NULL;

    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data= head->next->data;

    Node* temp= head->next;

    head->next= head->next->next;

    delete temp;

    return head;
}


int main(){
      Node* head= new Node(10);
    head->next= new Node(13);
    head->next->next= new Node(14);
    head->next->next->next = head;
    Printlist(head);
    cout<<endl;

    head= deletebegin(head);
     Printlist(head);
     cout<<endl;
    head=DelFirst(head);
     Printlist(head);

    return 0;
}