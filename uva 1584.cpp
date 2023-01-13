#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    set <string> s;

    cin >> n;
    while(n--)
    {
        cin >> str;

        // creating every possible sequence
        // and storing by set lexicographically
        for(int i=0; i<str.size(); i++)
        {
            string st="";
            st+=str[i];

            int j = i + 1;
            while(j!=i)// for circular sequence
            {
                if(j==str.size())
                    j=0;

                st+=str[j];

                j++;
                if(j==str.size())
                    j=0;
            }
            s.insert(st);
        }
        auto it = s.begin();
        cout << *it << endl;

        s.clear();
    }
    return 0;
}
