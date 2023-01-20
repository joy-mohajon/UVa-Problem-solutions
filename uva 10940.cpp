#include<bits/stdc++.h>

using namespace std;

int main()
{
    // It has a pattern such as if n is 4 then
    //last remaining card will be 4 as usual 8=8. 16=16...
    // and the remaining number between 4 to 8 will be
    //even number from 2 to 8 as usual 8 to 16 = 2 to 16 so on...

    int n;
    while(cin >> n)
    {
        if(n==0)
            break;

        int x=1;
        while(x<=n)
            x*=2;

        int sub = x-n;

        if(x==sub*2)
            cout << sub << endl;
        else
            cout << x-sub*2 << endl;
    }
    return 0;
}
