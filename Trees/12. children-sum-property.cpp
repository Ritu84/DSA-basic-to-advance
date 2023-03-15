#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

// sum of left and right child is equal to root
struct Node{
    int key;
    Node* left;
    Node* right;

    Node(int k){
        key=k;
        left=right=NULL;
    }
};
bool iscsum(Node* root){
    if(root==NULL) return true;//empty tree

    if(root->left==NULL && root->right==NULL) return true;//check if leaf node or not

    int sum=0;
    if(root->left!=NULL){sum += root->left->key;}
    if(root->right!=NULL){sum += root->right->key;}

    return (root->key==sum && iscsum(root->left) && iscsum(root->right));
}

int main(){
     Node* root= new Node(20);
    root->left= new Node(8);
    root->right= new Node(12);
    root->right->left= new Node(3);
    root->right->right= new Node(9);

    cout<<iscsum(root);
    return 0;
}