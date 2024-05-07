#include<bits/stdc++.h>

using namespace std;

int n, node[30];
int edge[27][27];

void visit(int x)
{
    node[x] = 1; // visited node

    for(int i=0; i<=n; i++)
    {
        if(edge[x][i]==1 && node[i]==0)
            visit(i);
    }
}

int main()
{
    int t, flag=0;

    cin >> t;
    getchar();getchar();

    while(t--)
    {
        if(flag==1)
            cout << endl;

        memset(node, 0, sizeof(node));
        memset(edge, 0, sizeof(edge));

        string chr;
        while(1)
        {
            getline(cin, chr);

            if(chr == "")
                break;

            if(chr.size()==1)
                n = chr[0] - 65; // highest node
            else
            {
                edge[chr[0]-'A'][chr[1]-'A'] = 1;
                edge[chr[1]-'A'][chr[0]-'A'] = 1;
            }
        }

        int cnt=0;
        for(int i=0; i<=n; i++)
        {
            if(node[i]==0)
            {
                visit(i);
                cnt++;
            }
        }

        cout << cnt << endl;

        flag = 1;
    }
    return 0;
}
