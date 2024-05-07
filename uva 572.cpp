#include<stdio.h>
#include<string.h>

int m, n;
char ch[110][110];

void find_out(int i, int j)
{
    if(i<0 || j<0 || i==m || j==n)
        return;
    if(ch[i][j]=='*')
        return;
    if(ch[i][j]=='@')
        ch[i][j]='*';
    find_out(i,j+1);
    find_out(i,j-1);
    find_out(i+1,j);
    find_out(i-1,j);
    find_out(i+1,j+1);
    find_out(i-1,j-1);
    find_out(i+1,j-1);
    find_out(i-1,j+1);
}

int main()
{
    int i, j;
    while(scanf("%d %d%*c",&m, &n)){
        if(m==0)break;

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%c",&ch[i][j]);
            }scanf("%*c");
        }

        int cnt=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(ch[i][j]=='@'){
                   find_out(i,j);
                   cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
