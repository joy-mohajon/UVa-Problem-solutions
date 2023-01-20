#include<bits/stdc++.h>
#define pir pair <int, int>

using namespace std;

int x[8]={1, -1, 1, -1, 2, -2, -2, 2};
int y[8]={2, 2, -2, -2, 1, -1, 1, -1};

bool visit[10][10];
int moves[100][100];

int bfs(int a, int b, int c, int d)
{
    // to get initially boolen array as false
    memset(visit, false, sizeof(visit));
    queue <pir> q;
    q.push(pir(a, b));

    visit[a][b] = true;
    moves[a][b] = 0;

    while(!q.empty()){
        pair <int, int> top;
        top = q.front();
        q.pop();

        if(c==top.first && d==top.second)
            return moves[c][d];

        for(int i=0; i<8; i++){
            // controling knight moves
            int m = top.first + x[i];
            int n = top.second + y[i];

            // storing knight moves by queue from present place and
            // number of steps from starting point by moves array
            // visited moves can not visit
            if(m>=0 && m<8 && n>=0 && n<8 && !visit[m][n]){
                visit[m][n] = true;
                moves[m][n] = moves[top.first][top.second] + 1;
                q.push(pir(m, n));
            }
        }
    }
}
int main()
{
    string s1, s2;

    while(cin >> s1 >> s2){
        int a, b, c, d;

        // converting to address of array
        a = s1[0]-97, b = s1[1]-49;
        c = s2[0]-97, d = s2[1]-49;

        cout << "To get from " << s1 << " to " << s2 << " takes " << bfs(a, b, c, d) << " knight moves." << endl;
    }
    return 0;
}
