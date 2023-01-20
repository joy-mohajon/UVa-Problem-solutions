#include<bits/stdc++.h>

using namespace std;
using ll = long long;

//extended euclidean algorithm
ll ex_gcd(ll a, ll b, ll& x, ll& y)
{
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = ex_gcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1*(a/b);
    return gcd;
}

int main()
{
    ll a, b, x, y;

    while(cin >> a >> b){
        ll x, y;
        ll gcd = a > b ? ex_gcd(a, b, x, y):ex_gcd(b, a, x, y);

        if(a >= b)
           cout << x << " " << y << " " << gcd << endl;
        else 
           cout << y << " " << x << " " << gcd << endl; 
    }
    return 0;
}