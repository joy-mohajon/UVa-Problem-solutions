#include<bits/stdc++.h>

using namespace std;

int main()
{
    int flag=0;
    string str;

    while(getline(cin, str))
    {
        if(flag!=0)
            cout << endl;

        map <char, int, greater<char> > m;
        multimap <int, char> mp;

        //counting each of the character of string and store them by descending order
        for(int i=0; i<str.size(); i++)
            m[str[i]]++;

        //store all of the elements of map by multi-map to get ascending order of them
        for(auto x : m)
            mp.insert({x.second, x.first});

        for(auto x : mp)
            cout << (int)x.second << " " << x.first << endl;

        flag=1;
    }
    return 0;
}
