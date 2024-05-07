#include<bits/stdc++.h>
#include <set>

using namespace std;

set <int> s;

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        s.insert(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            s.insert(i);
            n = n/i;
        }
    }

    if (n > 2) {
        s.insert(n);
    }
}

int main()
{
    int n;

    while(cin >> n){
        if(n==0)
          break;

        primeFactors(n);

        cout << n << " : " << s.size() << endl;

        s.clear();
    }

    return 0;
}
