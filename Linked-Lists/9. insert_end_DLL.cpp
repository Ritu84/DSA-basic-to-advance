#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data=x;
        prev= next= NULL;
    }
};

void printlist(Node* head)
{
    if(head==NULL) return ;
    cout<<head->data<<' ';
    printlist(head->next);
}

Node* insertend(Node* head, int value)
{
    Node* temp= new Node(value);

    //empty ll
    if(head== NULL) return temp;

    //normal case
    Node* curr= head;
    while(curr->next!=NULL)
    curr= curr->next;

    curr->next=temp;
    temp->prev=curr;

    return head;

}
int main(){
     Node* head= NULL;
    head= insertend(head, 10);
    head= insertend(head, 20);
    head= insertend(head, 30);
    head= insertend(head, 40);

    printlist(head);
    return 0;
}