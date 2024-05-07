#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        printf("%d\n",((n + 1) * (n + 1) / 2) - 1);
    }
    return 0;

}
