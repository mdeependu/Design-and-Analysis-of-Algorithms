#include <stdio.h>
#define INFINITY 9999


void Dijkstra(int graph[5][5], int n, int start) {
  int cost[5][5];
  int distance[5];
  int pred[5];
  int visited[5];
  int count, min_dist, nxt_node, i, j;

  for (i=0;i<n;i++)
    for (j=0;j<n;j++)
      if (graph[i][j]==0)
        cost[i][j]=INFINITY;
      else
        cost[i][j]=graph[i][j];

  for (i=0;i<n;i++)
    {
    distance[i]=cost[start][i];
    pred[i]=start;
    visited[i]=0;
    }
    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while (count < n - 1)
    {
            min_dist = INFINITY;
    }

    for (i = 0; i < n; i++)
      if (distance[i] < min_dist && !visited[i])
    {
        min_dist = distance[i];
        nxt_node = i;
    }

    visited[nxt_node] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (min_dist + cost[nxt_node][i] < distance[i]) {
          distance[i] = min_dist + cost[nxt_node][i];
          pred[i] = nxt_node;
        }
    count++;
  }



