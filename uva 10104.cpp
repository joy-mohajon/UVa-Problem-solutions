#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    // greatest common divisor
    return (a%b==0)? b : (gcd(b, a%b));
}
int main()
{
    int a, b;
    while(cin >> a >> b){

        cout << gcd(a, b) << endl;
    }
    return 0;
}
