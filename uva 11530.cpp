#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, test=1;
    cin >> n;

    getchar();

    string str;
    while(n--)
    {
        getline(cin, str);

        int cnt=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] >= 119)
                cnt += (str[i]-119)+1;
            else if(str[i] >= 116)
                cnt += (str[i]-116)+1;
            else if(str[i] >= 112)
                cnt += (str[i]-112)+1;
            else if(str[i] >= 97)
            {
                int rem = (str[i]-97) % 3;
                cnt += rem + 1;
            }
            else
                cnt++;
        }
        cout << "Case #" << test << ": " << cnt << endl;

        test++;
    }
    return 0;
}
