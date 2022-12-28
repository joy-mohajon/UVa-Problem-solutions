#include<bits/stdc++.h>

using namespace std;

long int x, y, n, t;

long long result(long int x, long int y)
{
    if(y==0)
        return 1;
    if(y%2==0)
        return (result(x, y/2)*result(x, y/2)) % n;
    else
        return (x * result(x, y-1)) % n;
}

int main()
{
    while(cin >> t){
        if(t==0)
            break;

        while(t--){
            cin >> x >> y >> n;
            cout << result(x, y) << endl;
        }
    }
    return 0;
}
