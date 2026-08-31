#include <iostream>
using namespace std;

int leftChild[100], rightChild[100];

void createTree() {
    leftChild[1] = 2; rightChild[1] = 3;
    leftChild[2] = 4; rightChild[2] = 5;
    leftChild[3] = -1; rightChild[3] = 6;

    leftChild[4] = rightChild[4] = -1;
    leftChild[5] = rightChild[5] = -1;
    leftChild[6] = rightChild[6] = -1;
}

void preorder(int node) {
    if (node == -1) return;

    cout << node << " ";
    preorder(leftChild[node]);
    preorder(rightChild[node]);
}

void inorder(int node) {
    if (node == -1) return;

    inorder(leftChild[node]);
    cout << node << " ";
    inorder(rightChild[node]);
}

void postorder(int node) {
    if (node == -1) return;

    postorder(leftChild[node]);
    postorder(rightChild[node]);
    cout << node << " ";
}

int main() {
    createTree();

    cout << "Preorder: ";
    preorder(1);

    cout << "\nInorder: ";
    inorder(1);

    cout << "\nPostorder: ";
    postorder(1);
}
