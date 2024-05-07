#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int n, m, x;
    vector <vector <int> > v;

    while(cin >> n >> m){

        v.assign(1000000, vector<int>());

        for(int i=0; i<n; i++){
            cin >> x;
            v[x].push_back(i+1);
        }

        int k, va;
        for(int i=0; i<m; i++){
            cin >> k >> va;
            if(k-1<v[va].size())
                cout << v[va][k-1] << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
