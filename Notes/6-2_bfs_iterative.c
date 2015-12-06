/* The recursive implementation of depth first search of graph */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "LinkedGraph.h"  // organized graph ADT
#include "LinkedQueue.h"  // organized queue ADT

/* Modified definition of bfs: support function pointer as an argument */
void bfs_iterative(LGraph graph, Vertex start, void (*func)(nodeptr p));
void visit(nodeptr p);

int main(void)
{
    int vertices = 10;
    LGraph tg = CreateGraph(vertices);
    buildGraph_test(tg);
    showmatrix(tg);
    bfs_iterative(tg, 0, visit);

    return 0;
}

void bfs_iterative(LGraph graph, Vertex start, void (*func)(nodeptr p))
{
    int visited[graph->vertex_num];
    Queue queue = CreateQueue(graph->vertex_num);
    nodeptr curr, startnode;
    curr = startnode = graph->G[start];


}

void visit(nodeptr p)
{
    printf("visiting vertext %d\n", p->adjv);
}