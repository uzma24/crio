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
void printRightView(Node* root) {
    if (!root)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 1; i <= n; i++) {
            Node* temp = q.front();
            q.pop();

            if (n == 1)
                cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

Node* printLCA(Node* root, int n1, int n2) {
    if (root == NULL) return NULL;
    if (root->data > n1 && root->data > n2)
        return printLCA(root->left, n1, n2);
    if (root->data < n1 && root->data < n2)
        return printLCA(root->right, n1, n2);
    return root;
}

int main() {


    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    Node* temp = printLCA(root, 10, 14);
    cout << "lca is: " << temp->data;
}