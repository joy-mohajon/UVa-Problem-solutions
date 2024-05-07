#include<bits/stdc++.h>

using namespace std;

int n, ld[10010];

void f(int n) {
    long long m = 1;
    for(int i = 1; i <= n; i++) {
        m = (m * i);
        while(m % 10 == 0)
           m /= 10;
        m = m % 100000;
        ld[i] = m % 10;
    }
}

int main() {
    f(10000);
    while(scanf("%d", &n) == 1) {
        printf("%5d -> %d\n", n, ld[n]);
    }
}
