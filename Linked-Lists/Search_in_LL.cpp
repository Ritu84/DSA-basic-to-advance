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

void printlist(Node* head){
     if(head==NULL) return;
   
    Node* curr= head;
    cout<<curr->data<<' ';
    printlist(curr->next);
}
Node* insertbegin(Node* head, int x){
    Node* temp= new Node(x);
    temp->next= head;
    return temp;
}
// iterative approach:
int search(Node* head, int key){
    int pos=1;
    Node* curr= head;

    while(curr!=NULL){
        if(curr->data == key)  return pos;

        else{
            pos++;
            curr= curr->next;
        }
    }
    return -1;
}
}
// recursive approach:
int Search(Node* head, int key){
    if(head==NULL) return -1;
    if(head->data==key) return 1;

    else{
        int res= Search(head->next, key);
        if(res==-1) return -1;
        else return(res+1);
    }
}

int main(){
    Node* head= NULL;
    head= insertbegin(head, 10);
    head= insertbegin(head, 20);
    head= insertbegin(head, 30);
    printlist(head);
    cout<<endl;

     cout<<search(head, 20);
     cout<<Search(head, 20);
    
    
    return 0;
}
