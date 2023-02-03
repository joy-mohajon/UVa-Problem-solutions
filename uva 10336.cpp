#include<bits/stdc++.h>

using namespace std;
char ch[10000][10000];
int m, n;

void adjacent(int i, int j, char c)
{
    if(i>m-1 || i<0 || j>n-1 || j<0) return ;
    if(ch[i][j]<97 || ch[i][j]>122)return ;
    if(ch[i][j] != c) return;
    if(ch[i][j]==c)
        ch[i][j] = '0';

    //for connecting to above(i-1, j) area
    //similarly below(i+1, j),
    //left(i, j-1), right(i, j+1)
    adjacent(i-1, j, c);
    adjacent(i+1, j, c);
    adjacent(i, j-1, c);
    adjacent(i, j+1, c);
}
int main()
{
    int t, d=1;

    cin >> t;
    while(t--)
    {
        cin >> m >> n;

        getchar();

        int cnt[27]= {0};

        for(int i=0; i<m; i++)
            cin >> ch[i];

        // counting connected area
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ch[i][j]>='a' && 'z'>=ch[i][j])
                {
                    char c = ch[i][j];
                    cnt[c-97]++;
                    adjacent(i, j, c);
                }
            }
        }

        cout << "World #" << d++ << endl;

        // displaying max number of state
        //for presence alphabets
        for(int i=0; i<27; i++)
        {
            int maxx = -1;
            char cha;
            for(int j=0; j<27; j++)
            {
                if(cnt[j]>maxx)
                {
                    maxx = cnt[j];
                    cha = j+97;
                }
            }
            if(maxx == 0)
                break;
            else
                cout << cha << ": " << maxx << endl;

            cnt[cha-97]=0;
        }
    }
    return 0;
}
