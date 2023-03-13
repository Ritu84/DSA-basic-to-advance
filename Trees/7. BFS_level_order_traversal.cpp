#include<iostream>
#include<unordered_set>
#include<stack>
#include<queue>
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

void levelorder(Node* root){
    if(root==NULL) return ;

    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        Node* curr= q.front();
        q.pop();

        cout<<curr->key<<" ";
        
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
}

int main(){
      Node* root= new Node(10);
    root->left= new Node(20);
    root->right= new Node(40);
    root->left->left= new Node(90);
    root->left->right= new Node(50);

    levelorder(root);
    return 0;
}