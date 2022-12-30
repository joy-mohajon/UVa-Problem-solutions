#include<bits/stdc++.h>

using namespace std;

int direct[110][110];
int n, task[110];
vector <int> v;

void dfs(int x)
{
    task[x] = 0;

    for(int i=1; i<=n; i++){
        if(direct[i][x])
            dfs(i);
    }

    if(find(v.begin(), v.end(), x)==v.end())
        v.push_back(x);
}

int main()
{
    int m;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;

        memset(direct, 0, sizeof direct);
        task[n+1] = {0};

        int a, b;
        while(m--){
            cin >> a >> b;
            direct[a][b] = 1; //relation between task
            task[b] = 1; //dependent task
        }

        for(int i=1; i<=n; i++)
            if(task[i]==0)
                v.push_back(i); //independent task

        for(int i=1; i<=n; i++)
            if(task[i])
                dfs(i);

        int flag =0;
        for(auto x : v){
            if(flag==0){
                cout << x;
                flag=1;
            }
            else
                cout << " " << x;
        }
        cout << endl;

        v.clear();
    }
    return 0;
}
