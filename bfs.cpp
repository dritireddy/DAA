#include <iostream>
#include <queue>
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

void bfs(int root) {
    queue<int> q;
    q.push(root);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        if (leftChild[node] != -1)
            q.push(leftChild[node]);

        if (rightChild[node] != -1)
            q.push(rightChild[node]);
    }
}

int main() {
    createTree();

    cout << "BFS: ";
    bfs(1);
}
