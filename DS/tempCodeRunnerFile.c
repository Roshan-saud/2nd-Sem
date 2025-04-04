#include <limits.h>
// #include <stdio.h>

// #define V 4

// typedef enum { false, true } bool;

// int minDist(int dist[], bool sptSet[])
// {
//     int min = INT_MAX, min_index;

//     for (int v = 0; v < V; v++)
//         if (!sptSet[v] && dist[v] <= min)
//             min = dist[v], min_index = v;

//     return min_index;
// }

// void disp(int dist[])
// {
//     printf("Vertex   Distance from Source\n");
//     for (int i = 0; i < V; i++)
//         printf("%d \t\t %d\n", i, dist[i]);
// }

// void dkt(int g[V][V], int src)
// {
//     int dist[V];
//     bool sptSet[V];

//     for (int i = 0; i < V; i++)
//     {
//         dist[i] = INT_MAX;
//         sptSet[i] = false;
//     }

//     dist[src] = 0;

//     for (int count = 0; count < V - 1; count++)
//     {
//         int u = minDist(dist, sptSet);
//         sptSet[u] = true;

//         for (int v = 0; v < V; v++)
//             if (!sptSet[v] && g[u][v] && dist[u] != INT_MAX && dist[u] + g[u][v] < dist[v])
//                 dist[v] = dist[u] + g[u][v];
//     }

//     disp(dist);
// }

// int main()
// {
//     int g[V][V] = { { 0, 4, 0, 0 },
//                     { 4, 0, 6, 0 },
//                     { 0, 6, 0, 3 },
//                     { 0, 0, 3, 0 } };

//     dkt(g, 0);

//     return 0;
// }
