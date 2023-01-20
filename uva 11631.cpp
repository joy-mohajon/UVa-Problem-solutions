#include<bits/stdc++.h>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Graph {
    int V, E;
    
    // Edge use as a array
    struct Edge* edge;
};

struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->E = E;
    graph->V = V;
    graph->edge = new Edge[E];
    return graph;
}

bool compare(struct Edge e1, struct Edge e2)
{
    return e1.weight < e2.weight;
}

int findParent(int v, int* parent)
{
    if(parent[v] == v){
        return v;
    }
    else{
        return findParent(parent[v], parent);
    }
}

int kruskal(struct Graph* graph)
{
    int V = graph->V;
    int E = graph->E;
    struct Edge* edges = graph->edge;

    // sorting edge array based on weight 
    sort(edges, edges + E, compare);

    int* parent = new int[E];
    for(int i=0; i<V; i++){
        parent[i] = i;
    }

    struct Edge* output = new Edge[V];
    int min_cost = 0;
    int i=0, cnt=0;

    // check if source parent and destination parent 
    //will be same then it will create a cycle.
    while(cnt != V-1){
        struct Edge currentEdge = edges[i];

        int srcParent = findParent(currentEdge.src, parent);
        int destParent = findParent(currentEdge.dest, parent);
        int cost = currentEdge.weight;

        if(srcParent != destParent){
            output[cnt] = currentEdge;
            cnt++;
            parent[destParent] = srcParent;
            min_cost += cost;
        }
        i++;
    }
    return min_cost;
}

int main()
{
    int m, n;

    while(cin >> m >> n){
        if(m==0 && n==0){
            break;
        }

        struct Graph* graph = createGraph(m, n);

        int a, b, c;
        int total_cost = 0;

        for(int i=0; i<n; i++){
            cin >> a >> b >> c;
        
            graph->edge[i].src = a;
            graph->edge[i].dest = b;
            graph->edge[i].weight = c;
            
            total_cost += c;
        }
        
        int min_cost = kruskal(graph);

        cout << total_cost - min_cost << endl;
    }
    return 0;
}