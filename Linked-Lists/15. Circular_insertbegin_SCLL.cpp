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
// NAIVE sol: time=O(n):=>>
Node* insertbegin(Node* head, int d){
    Node* temp= new Node(d);

    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        Node* curr= head;
        while(curr->next!=head)
        curr= curr->next;

        curr->next=temp;
        temp->next=head;
    }
    return temp;
}
//optimized: O(1): insert temp after head and swap data of head and temp;
Node* Insertbegin(Node* head, int d){
    Node* temp= new Node(d);

    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        //insert temp after head
        temp->next= head->next;
        head->next=temp;

        //swap head.data and temp.data
        int t= head->data;
        head->data= temp->data;
        temp->data=t;

        return head;
    }

}


int main(){
      Node* head= new Node(10);
    head->next= new Node(13);
    head->next->next= new Node(14);
    head->next->next->next = head;
    Printlist(head);
    cout<<endl;

    head= insertbegin(head, 16);
     Printlist(head);
     cout<<endl;
    head= Insertbegin(head, 20);
     Printlist(head);

    return 0;
}