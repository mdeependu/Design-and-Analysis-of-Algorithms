#include<stdio.h>

struct Edge
{
    int source;
    int destination;
    int weight;
};

struct Graph
{
    int vertices,edges;
    struct Edge* edge;
};

struct Graph* create(int vertices,int edges)
{
    struct Graph* graph=(struct Graph) malloc(sizeof(struct Graph));
    graph->vertices=vertices;
    graph->edges=edges;
    graph->edge =(struct Edge) malloc(graph->edges*sizeof(struct Edge));
    return graph;
}

int main
