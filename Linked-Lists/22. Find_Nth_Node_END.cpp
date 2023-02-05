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
// naive: traversing twice from the ll
void printnthfromend(Node* head, int n){
    //find length of ll
    int len=0;
    for(Node* curr=head; curr!=NULL; curr=curr->next)
     len++;

    if(len<n) return;

//traverse ll again from head to len-n+1 position
    Node* curr= head;
    for(int i=1; i<len-n+1; i++)
      curr=curr->next;

    cout<<curr->data;

}
//efficient: only in one traversal...
/*
2 pointer method:
        . move 'first' n positions of head
        . start 'second' pointer from head
        . move first and second with same speed. when first reaches NULL, sec reaches the required NODE.
*/
void Insertnend(Node* head, int n){
    if(head==NULL) return;

    Node* first= head;
    for(int i=0; i<n; i++){
       if(first==NULL) return;
       first=first->next;
    }
    Node* second= head;

    while(first!=NULL){
        second= second->next;
        first= first->next;
    } 
    cout<<second->data<<" ";
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
    printnthfromend(head, 3); //call the fn. simply dont write head= as its not a pointer
    cout<<endl;
     Insertnend(head, 4); //call the fn. simply dont write head= as its not a pointer
    return 0;
}