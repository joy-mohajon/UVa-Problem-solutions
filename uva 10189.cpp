#include<bits/stdc++.h>

using namespace std;

int n, m;
char ch[100][100];

void adj(int i, int j)
{
    // increment by 1

    if(i-1>=0 && ch[i-1][j]!='*')
        ch[i-1][j] = (char)((ch[i-1][j]-48)+1)+48;
    if(i+1<n && ch[i+1][j]!='*')
        ch[i+1][j] = ((ch[i+1][j]-48)+1)+48;
    if(j-1>=0 && ch[i][j-1]!='*')
        ch[i][j-1] = ((ch[i][j-1]-48)+1)+48;
    if(j+1<m && ch[i][j+1]!='*')
        ch[i][j+1] = ((ch[i][j+1]-48)+1)+48;
    if(i-1>=0 && j-1>=0 && ch[i-1][j-1]!='*')
        ch[i-1][j-1] = ((ch[i-1][j-1]-48)+1)+48;
    if(i+1<n && j+1<m && ch[i+1][j+1]!='*')
        ch[i+1][j+1] = ((ch[i+1][j+1]-48)+1)+48;
    if(i-1>=0 && j+1<m && ch[i-1][j+1]!='*')
        ch[i-1][j+1] = ((ch[i-1][j+1]-48)+1)+48;
    if(i+1<n && j-1>=0 && ch[i+1][j-1]!='*')
        ch[i+1][j-1] = ((ch[i+1][j-1]-48)+1)+48;
}

int main()
{
    int t=1;

    while(cin >> n >> m) {
        if(n!=0 && m!=0 && t!=1)
           cout << endl;

        if(n==0 && m==0)
            break;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> ch[i][j];
            }
        }

        // converting every '.' to '0'
        for(int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if(ch[i][j]!='*')
                    ch[i][j]='0';

        // adjacent of character '*' increasing by 1
        for(int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if(ch[i][j]=='*'){
                    adj(i, j);
                }
            }
        }
        cout << "Field #" << t << ":" << endl;

       for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << ch[i][j];
            }
            cout << endl;
        }


        t++;
    }
    return 0;
}
