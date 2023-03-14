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

int getsize(Node* root){
    if(root==NULL) return 0;

    else 
       return 1+getsize(root->left)+getsize(root->right);
}

int main(){
     Node* root= new Node(10);
    root->left= new Node(20);
    root->right= new Node(40);
    root->left->left= new Node(90);
    root->left->right= new Node(50);

    cout<<getsize(root);
    return 0;
}