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
//naive: 2 traversals and AS:O(N) which is more and not suitable for large data is its not feasible
Node* revlist(Node* head){
    vector<int> arr;
    //copying ll in AUXArr 
    for(Node* curr= head; curr!=NULL; curr=curr->next){
        arr.push_back(curr->data);
    }
    //traversing ll again and copy the auxarr contents  back to ll in reverse order
    for(Node* curr= head; curr!=NULL; curr=curr->next){
        curr->data=arr.back();//access to last ele of auxarr
        arr.pop_back();//remove last element

    }
    return head;
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

    head= revlist(head);
    printlist(head);  

    return 0;
}