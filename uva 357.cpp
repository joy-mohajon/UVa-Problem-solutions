#include<bits/stdc++.h>

using namespace std;
#define SIZE 30001

unsigned long long ways[30001];
int coin[] = {1, 5, 10, 25, 50};

int main()
{
    ways[0] = 1;
    for (int c = 0; c < 5; ++c)
    {
        for (int i = coin[c]; i < SIZE; ++i)
        {
            ways[i] += ways[i - coin[c]];
        }
    }
    int cents;
    while (cin >> cents)
    {
        if (ways[cents] == 1)
            cout << "There is only 1 way to produce " << cents << " cents change.\n";
        else
            cout << "There are " << ways[cents] << " ways to produce " << cents << " cents change.\n";
    }
}
