#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

int main() {
    Node* root = new Node(25);
    root->left = new Node(4);
    root->right = new Node(15);
    root->left->left = new Node(6);
    root->left->right = new Node(8);
    root->right->left = new Node(30);
    root->right->right = new Node(45);

    levelOrderTraversal(root);
    return 0;
}