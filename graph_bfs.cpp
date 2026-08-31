#include <iostream>
using namespace std;

int graph[10][10], visited[10], n;

void bfs(int start) {
    int q[10], front = 0, rear = 0;

    q[rear++] = start;
    visited[start] = 1;

    while (front < rear) {
        int v = q[front++];
        cout << v << " ";

        for (int i = 0; i < n; i++) {
            if (graph[v][i] && !visited[i]) {
                q[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    bfs(0);
}
