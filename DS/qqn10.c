//WAP to find BFS

#include <stdio.h>
#define MAX 10

int n = 6, i, j, vis[MAX], q[MAX], front = -1, rear = -1;
int adj[MAX][MAX] = {
    {0, 1, 0, 1, 0, 0},
    {1, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 1},
    {0, 0, 1, 0, 1, 0}
};

void bfs(int v) {
    for (i = 0; i < n; i++)
        if (adj[v][i] && !vis[i])
            q[++rear] = i;
    if (front < rear) {
        vis[q[++front]] = 1;
        bfs(q[front]);
    }
}

int main() {
    int v = 0; // Starting vertex

    // Initialize visited array and queue
    for (i = 0; i < n; i++) {
        q[i] = 0;
        vis[i] = 0;
    }

    printf("Adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }

    printf("Starting BFS traversal from vertex %d:\n", v);
    bfs(v);

    printf("The nodes that are reachable are:\n");
    for (i = 0; i < n; i++) {
        if (vis[i])
            printf("%d ", i);
    }
  

    return 0;
}