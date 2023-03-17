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

int height(Node* root){
    if(root==NULL) return 0;

    return max(height(root->left),height(root->right))+1;
}
int diameter(Node* root){
    if(root==NULL) return 0;

    int d1= 1+height(root->left)+height(root->right);
    int d2= diameter(root->left);
    int d3= diameter(root->right);

    return max(d1, max(d2,d3));
}
int res=0;
int height1(Node* root){
    if(root==NULL) return 0;

    int lh=height1(root->left);
    int rh=height1(root->right);

    res= max(res, lh+rh+1);

    return 1+max(lh,rh);
    // return res;
}

int main(){
     Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    // root->left->left= new Node(4);
    // root->left->right= new Node(5);
    root->right->left= new Node(7);
    root->right->right= new Node(6);
    root->right->left->left= new Node(7);

cout<<diameter(root);
cout<<height1(root);
    return 0;
}