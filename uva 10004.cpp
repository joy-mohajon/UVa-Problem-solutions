#include<bits/stdc++.h>

using namespace std;

vector <int> v[200];

int bfs(int node)
{
    int color[200]={0};
    int visit[200]={0};
    queue <int> q;
    q.push(node);
    color[node]=1;

    while (!q.empty())
    {
        int f=q.front();
        q.pop();
        int d=color[f]==1?2:1;
        int l=v[f].size();
        for (int i=0;i<l;i++)
        {
            node=v[f][i];
            if (color[f]==color[node]) return 0;
            if (!visit[node])
            {
                q.push(node);
                color[node]=d;
                visit[node]=1;
            }
        }
    }
    return 1;
}

int main()
{
    int node, edge, a, b;
    while (scanf("%d",&node))
    {
        if (node==0) break;
        scanf("%d",&edge);

        for (int i=0;i<edge;i++)
        {
           scanf("%d %d",&a,&b);
           v[a].push_back(b);
           v[b].push_back(a);
        }

        if (bfs(0)==1) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

        for (int i=0;i<node;i++)
            v[i].clear();
    }
    return 0;
}
