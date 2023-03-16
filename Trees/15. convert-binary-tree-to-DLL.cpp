#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;

    Node(int k){
        key=k;
        left=right=NULL;
    }
};

Node* prev=NULL;
Node* BintoDll(Node* root){
    if(root==NULL) return root;

    Node* head= BintoDll(root->left);
     
    if(prev==NULL){ head=root;}//executed only once
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;//update prev
    BintoDll(root->right);//rec. calling for rst

    return head;
}

int main(){
     Node* root= new Node(8);
    root->left= new Node(12);
    root->right= new Node(15);
    root->left->left= new Node(15);
    root->left->right= new Node(20);
    root->right->right= new Node(20);
    root->right->left= new Node(20);

    cout<<BintoDll(root);

    return 0;
}