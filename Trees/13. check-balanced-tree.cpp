#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//diff bteween lst and rst should not be more than 1 and this should  be true for every node
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

    return max(height(root->left), height(root->right))+1;
}
//tc:o(n2)
bool  isbalanced(Node* root){
    if(root==NULL) return true;//empty tree

    int lh=height(root->left);
    int rh=height(root->right);
//check for 3conditions and return
    return (abs(lh-rh)<=1&& isbalanced(root->left)&& isbalanced(root->right));
}
// tc:o(n)....if tree is balanced then it will return height of the tree otherwise returns -1;
int isbalance(Node* root){
    if(root==NULL) return 0;
    //check for lst and also get the height
    int lh = isbalance(root->left);
    if(lh==-1) return -1;
    //check for rst and also get the height
    int rh = isbalance(root->right);
    if(rh==-1) return -1;

    if(abs(lh-rh)>1) return -1;

    else return max(lh,rh)+1;
}

int main(){
     Node* root= new Node(8);
    root->left= new Node(12);
    root->right= new Node(15);
    root->left->left= new Node(15);
    root->left->right= new Node(20);
    root->right->right= new Node(20);
    root->right->right->right= new Node(20);

    cout<<isbalanced(root);
    cout<<isbalance(root);
    return 0;
}