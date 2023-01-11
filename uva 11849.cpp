#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int m, n, cd;
    map <int, int> mp;

    while(cin >> m >> n)
    {
        if(m==0 && n==0)
            break;

        for(int i=0; i<m; i++)
        {
            cin >> cd;
            mp[cd]=1;
        }
        int cnt=0;
        for (int i=0; i<n; i++)
        {
            cin >> cd;
            if(mp[cd]==1)
                cnt++;
        }
        cout << cnt << endl;
        mp.clear();
    }
    return 0;
}
