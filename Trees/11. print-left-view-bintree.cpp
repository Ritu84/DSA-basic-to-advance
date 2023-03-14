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

//recursive method:
int maxlevel=0;
void leftprint(Node* root, int level){
    if(root==NULL) return;

    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel=level;//update
    }

    leftprint(root->left, level+1);
    leftprint(root->right, level+1);
}

//iterative:using level order traversal of 2loops
void printleft(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();

        for(int i=0; i<count; i++){
            Node* curr= q.front();
            q.pop();
            if(i==0) cout<<curr->key<<" ";

            if(root->left!= NULL) q.push(root->left);
            if(root->right!= NULL) q.push(root->right);
        }
    }
}


int main(){
    Node* root= new Node(10);
    root->left= new Node(20);
    root->right= new Node(40);
    root->left->left= new Node(90);
    root->left->right= new Node(50);

    leftprint(root,1);
    cout<<endl;
    printleft(root);
    return 0;
}