#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string str;

    cin >> t;
    for(int l=1; l<=t; l++)
    {
        cin >> str;

        cout << "Case " << l << ": ";

        for(int i=0; i<str.size(); i++)
        {
            string s = "";

            if(str[i]>=65 && str[i]<=90)
            {
                int j=i;
                while(str[j+1]<65)
                {
                    j++;
                    s += str[j];
                }
                for(int j=0; j<stoi(s); j++)
                    cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
