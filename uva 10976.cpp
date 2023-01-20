#include<bits/stdc++.h>

using namespace std;

typedef pair <int, int> pairs;

long long longest(int a, int b)
{
    long long value =1;
    int minn = min(a, b);
    for(long long i=2; i<=minn; i++)
    {
        if(a%i==0 && b%i==0)
        {
            a/=i, b/=i;
            value*=i;
            minn = min(a, b);
            i=1;
        }
    }
    return value * a * b;
}

int main()
{
    int k, x, y;

    while(cin >> k)
    {
        y = k +1;

        int cnt=0;
        vector <pairs> v;

        while(k*2 >= y){
            x = longest(k, y);

            int s = (x/k) - (x/y);
            if(s==1){
                v.push_back({x, y});
                cnt++;
            }
            else if(x%s==0){
                v.push_back({x, y});
                cnt++;
            }
            y++;
        }
        cout << cnt << endl;

        for(auto x : v)
            cout << "1/" << k << " = " << "1/" << x.first <<" + " << "1/" << x.second << endl;

        v.clear();
    }
    return 0;
}
