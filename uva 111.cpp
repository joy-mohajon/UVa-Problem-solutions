#include<algorithm>
#include<cstdio>

using namespace std;

int n, a, b;
int ori[50], ar[50], table[50][50];

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        ori[a - 1] = i;
    }
    while(1){
        for(int i = 0; i < n; i++) {
            if(scanf("%d", &a) != 1) return 0;
            ar[a - 1] = i;
        }
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++) {
                if(ori[i - 1] == ar[j - 1])
                    table[i][j] = table[i - 1][j - 1] + 1;
                else
                    table[i][j] = max(table[i][j - 1],
                            table[i - 1][j]);
            }

        printf("%d\n", table[n][n]);
    }
}
