#include<bits/stdc++.h>

using namespace std;

void permutation(string str)
{
    cout << str << endl;

    while(next_permutation(str.begin(), str.end()))
        cout << str << endl;
}
int main()
{
    int n;
    string str;

    cin >> n;

    while(n--)
    {
        cin >> str;

        sort(str.begin(), str.end());

        permutation(str);

        cout << endl;

    }
    return 0;
}
