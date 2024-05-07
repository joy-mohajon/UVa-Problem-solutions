
///unsolved:

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, w, n, i, j, p;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &w, &n);
        int dp[1005] = {};
        dp[0] = 1;
        for(i = 0; i < n; i++) {
            scanf("%d", &p);
            for(j = w-p; j >= 0; j--) {
                if(dp[j]==1 ){
                    dp[j+p] = 1;
                    cout << p<< " " << j <<" "<<j+p << endl;
                }

            }
        }
        if(dp[w])
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
