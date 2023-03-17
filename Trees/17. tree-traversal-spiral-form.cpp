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
//o(n)time
void printspiral(Node* root){//simple level order traversal and adding stack and bool variable to it
    if(root==NULL) return;

    queue<Node*> q;
    stack<int> s;
    bool reverse= false;
    q.push(root);

    while(q.empty()==false)
    {
        int count= q.size();
        for(int i=0; i<count; i++)
        {
            Node* curr= q.front();
            q.pop();

            if(reverse){
                s.push(curr->key);
            }
            else cout<<curr->key<<" ";
                
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);

        }
            
            if(reverse){
                while(s.empty()==false){
                    cout<<s.top()<<" ";
                    s.pop();
                }
            }
            reverse=!reverse;
            // cout<<endl;
    }
}

//method2: using 2 stacks
int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->right= new Node(6);
    root->right->left= new Node(7);

    printspiral(root);

    return 0;
}