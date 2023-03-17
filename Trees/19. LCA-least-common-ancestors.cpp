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

 
bool findpath(Node* root, vector<Node*>&p, int n){
    if(root==NULL) return false;
    p.push_back(root);

    if(root->key==n) return true;//if n is present or not

    if(findpath(root->left,p, n)|| findpath(root->right,p,n)) return true;//returns false when lst rst are null

    p.pop_back();
    return false;
}
Node* lca(Node* root, int n1, int n2)
{
    vector<Node*> path1,path2;

    if(findpath(root,path1,n1)==false || findpath(root,path2,n2)==false) return NULL;
    int x=path1.size()-1;
    int y=path2.size()-1;
    for(int i=0; i< x && y ; i++){
        if(path1[i+1]!=path2[i+1]) return path1[i];

    }
    return NULL;
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