#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
Node* recrevlist(Node* head){
 //base case : empty or only 1element
 if(head==NULL || head->next==NULL) return head;

 Node* rest_head= recrevlist(head->next);
 Node* rest_tail= head->next;

 rest_tail->next= head;
 head->next=NULL;

 return rest_head;
}

int main(){
      Node* head= new Node(100);
    head->next=  new Node(200);
    head->next->next=  new Node(500);
    head->next->next->next=  new Node(90);
    head->next->next->next->next=  new Node(500);
    head->next->next->next->next->next=  new Node(500);
    printlist(head);

    cout<<endl;

    head= recrevlist(head);
    printlist(head);  

    return 0;
}