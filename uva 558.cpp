#include<bits/stdc++.h>

using namespace std;

struct Edge {
    int src, dest, time;
};

struct Graph {
    int V, E;

    // graph is represented as an array of edges.
    struct Edge* edge;
};

// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
} 

int BellmanFort(struct Graph* graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int time[V];

    for(int i=0; i<V; i++)
        time[i] = INT_MAX;
    time[src] = 0;

    
    for(int i=0; i<V-1; i++){
        for(int j=0; j<E; j++){
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].time;

            // calculate shortest path for every vertecis
            if(time[u] != INT_MAX && time[u] + weight < time[v]){
                time[v] = time[u] + weight;
            }         
        }
    }
    
    // checking have any negative cycle
    for(int j=0; j<E; j++){
        int u = graph->edge[j].src;
        int v = graph->edge[j].dest;
        int weight = graph->edge[j].time;

        if(time[u] != INT_MAX && time[u] + weight < time[v]){
            return 1;
        }    
    }
    return 0;
}

int main()
{
    int test;
    int V, E;
    cin >> test;

    while(test--){
        cin >> V >> E;

        struct Graph* graph = createGraph(V, E);
        
        int src, dest, time;
        for(int i=0; i<E; i++){
            cin >> src >> dest >> time;

            graph->edge[i].src = src;
            graph->edge[i].dest = dest;
            graph->edge[i].time = time;
        }
        
        int possible = BellmanFort(graph, 0);
        if(possible){
            cout << "possible" << endl;
        }
        else 
            cout << "not possible" << endl;
    }
    return 0;
}