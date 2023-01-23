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
// approach: allocating the memory to the value to be inserted and then linking next of allocated memory to head && return temp;
Node* insertbegin(Node* head, int x){
    Node* temp= new Node(x);
    temp->next=head;
    return temp;
}

void printlist(Node* head){
    if(head==NULL) return;
    printlist(head->next);
    cout<<head->data<<' ';
    
}
int main(){
    Node* head= NULL;
    head= insertbegin(head, 10);
    head= insertbegin(head, 20);
    head= insertbegin(head, 30);
    head= insertbegin(head, 40);

    printlist(head);
    return 0;
}
