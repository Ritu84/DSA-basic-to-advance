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


Node* lca(Node* root, int n1, int n2){
    if(root==NULL) return NULL;

    if(root->key==n1 || root->key==n2) return root;

    Node* lca1= lca(root->left, n1, n2);
    Node* lca2= lca(root->right, n1, n2);

    if(lca1!=NULL && lca2!=NULL) return root;

    if(lca1!=NULL) return lca1;

    else return lca2;
}

int main(){
     Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    // root->left->left= new Node(4);
    // root->left->right= new Node(5);
    root->right->left= new Node(7);
    root->right->right= new Node(6);

    cout<<lca(root, 2, 6);
    return 0;
}