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

int maxwidth(Node* root){
    if(root==NULL) return 0;

    queue<Node*> q;
    q.push(root);
    int res=0;

    while(!q.empty()){
        int count= q.size();
        res=max(res, count);

        for(int i=0; i<count; i++){
            Node* curr=q.front();
            q.pop();
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
    return res;
}

int main(){
     Node* root= new Node(8);
    root->left= new Node(12);
    root->right= new Node(15);
    root->left->left= new Node(15);
    root->left->right= new Node(20);
    root->right->right= new Node(20);
    root->right->left= new Node(20);

    cout<<maxwidth(root);
    return 0;
}