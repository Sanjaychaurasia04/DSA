#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* createTree(Node* root){
    int data;
    cout<<"Enter the data :";
    cin>>data;
    if(data == -1) return NULL;

    root = new Node(data);
    

    cout<<"Enter the data for the left element/tree :"<<data<<endl;
    root->left = createTree(root->left);
    cout<<"for the right tree : "<<data<<endl;
    root->right =createTree(root->right);
    return root;
}

int main(){
    Node* root = NULL;
    root = createTree(root);


    return 0;
}