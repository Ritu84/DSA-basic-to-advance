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
// Method1: O(n^2)
// Method2: O(n) modifying ll structure 
/* struct Node{
    int data;
    Node* next;
    bool visited

    Node(int x){
        data=x;
        next=NULL;
        visited= false;
    }
};*/
// Method3: O(n) modifying ll pointer
bool isloop(Node* head){
    Node* temp=new Node;
    Node* curr= head;

    while(curr!=NULL){
        if(curr->next==NULL) return false;// not in loop

        if(curr->next==temp) return true; //if in loop then next will already pointing to temp

        Node* curr_next= curr->next;
        curr->next= temp;
        curr= curr_next;

    }
    return false;
}
// Method4: hashing
bool ISLOOP(Node* head){
    unordered_set<Node*> s;
    
    for(Node* curr=head; curr!=NULL; curr=curr->next){
        if(s.find(curr)!=s.end()) return true;

        s.insert(curr);
    }
    return false; 
}


int main(){
     Node* head= new Node(100);
    head->next=  new Node(200);
    head->next->next=  new Node(500);
    head->next->next->next=  new Node(500);
    head->next->next->next->next=  new Node(500);
    head->next->next->next->next->next=  new Node(600);
    printlist(head);
    return 0;
}