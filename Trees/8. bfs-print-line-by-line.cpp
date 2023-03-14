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
void printlevelorder(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size()>1){
        Node* curr= q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
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

    printlevelorder(root);
    return 0;
}