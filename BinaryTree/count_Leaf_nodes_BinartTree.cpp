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

//here first return of left node return 1 when it reaches left leaf node and adds to 1 returned from count(left->right) at the end, hence total becomes 2 after processing for any one node which has left and right child.
int count(Node* node){
    if(node==NULL){
        return 0;
    } 
    if(node->left ==NULL && node->right ==NULL)
        return 1;
    else
        return count(node->left)+count(node->right);
}
int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    
    int temp = count(root);
    cout << "total leaves is: "<< temp;
}