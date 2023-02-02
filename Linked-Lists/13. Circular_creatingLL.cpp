#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//SINGLY CLL:
struct Node{
    int value;
    Node* next;

    // constructor:a method automtically called when an obj of a class is created
    Node(int x)
    {
        value=x;
        next=NULL;
    }

};

int main(){
    Node* head= new Node(10);
    Node* temp1= new Node(20);
    Node* temp2= new Node(30);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    cout<<head->value<<' '<<temp1->value<<' '<<temp2->value;

    return 0;
}