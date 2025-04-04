//WAP to find DFS

#include <stdio.h>

#define MAX 10

int n = 6, i, j, vis[MAX];
int adj[MAX][MAX] = {
    {0, 1, 0, 1, 0, 0},
    {1, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 1},
    {0, 0, 1, 0, 1, 0}
};

void dfs(int v) {
    // Print the current node
    printf("%d ", v);
    vis[v] = 1;

    // Explore all adjacent nodes
    for (i = 0; i < n; i++) {
        if (adj[v][i] && !vis[i]) {
            dfs(i);
        }
    }
}

int main() {
    int v = 0; // Starting vertex

    // Initialize visited array
    for (i = 0; i < n; i++) {
        vis[i] = 0;
    }

    printf("Adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }

    printf("DFS traversal starting from vertex %d:\n", v);
    dfs(v);

     

    return 0;
}
