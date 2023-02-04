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
Node* deleteknode(Node* head, int k){
    if(head==NULL) return head;

    Node* curr= head;
    if(k==1) {
        while(curr->next!=head)
        curr=curr->next;

        curr->next=head->next;
        delete head;
        return (curr->next);
    }

    for(int i=0; i<k-2; i++)
    curr= curr->next;

    Node* temp= curr->next;
    curr->next= curr->next->next;
    delete temp;//Dont use delete curr->next here, first store the reference of curr->next and then delete.

    return head;
}
int main(){
     Node* head= new Node(10);
    head->next= new Node(13);
    head->next->next= new Node(14);
    head->next->next->next = head;
    Printlist(head);
    cout<<endl;

    head=deleteknode(head, 2);//k is the position of element
    Printlist(head);
    return 0;
}