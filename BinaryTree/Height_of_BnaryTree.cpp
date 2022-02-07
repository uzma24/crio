#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(Node* node){
    if(node==NULL){
        return -1;
    } 
    if(node->left ==NULL && node->right ==NULL)
        return 0;
    else
    {
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
    
    if(leftHeight>rightHeight)return leftHeight+1;
    else return rightHeight+1;
    }
}
int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    
    int temp = height(root);
    cout << "total height is: "<< temp;
}