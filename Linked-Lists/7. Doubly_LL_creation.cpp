#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
   struct Node* prev;
   struct Node* next;

   Node(int x){
    data= x;
    prev= NULL;
    next= NULL;
   }
};


int main(){
    Node* head = new Node(10);
    Node* temp1= new Node(20);
    Node* temp2= new Node(30);

    head->next= temp1;
    temp1->prev= head;
    temp1->next= temp2;
    temp2->prev= temp1;

    // cout<<head->data<<' '<<head->next->data<<' '<<head->next->next->data;
    cout<<head->data<<' '<<temp1->data<<' '<<temp2->data;

    
    return 0;
}