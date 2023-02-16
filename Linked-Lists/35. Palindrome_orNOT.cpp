#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//method1: stack
bool ispalin(Node* head){
    stack<int> st;
    //put ll ele in stack
    for(Node* curr= head; curr!=NULL; curr=curr->next){
        st.push(curr->data);
    }
    //compare ll data and stack data
    for(Node*curr=head; curr!=NULL; curr=curr->next){
        if(st.top()!=curr->data) return false;
        st.pop();
    }
    return true;
}
//met2: find middle node........reverse nodes after middle node........compare nodes before and after middle node if same return true and if not return false
bool ispalindrome(Node* head){
    if(head==NULL) return true;
    //find middle : slow will point to middle node only
    Node* slow= head;
    Node* fast= head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //reverse nodes after middle caaling rev fn. made before
    Node* rev= reverselist(slow->next); 

    //compare ele before and after middle node
    Node* curr= head;
    while(rev!=NULL){
        if(rev->data != curr->data) return false;
        rev= rev->next;
        curr= curr->next;
    }
    return true;

}

int main(){
    
    return 0;
}