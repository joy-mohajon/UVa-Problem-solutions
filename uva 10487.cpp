#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum, m, casee=1;

    while(cin >> n)
    {
        if(n==0)
            break;

        int numbr[n];
        for(int i=0; i<n; i++)
            cin >> numbr[i];

        cin >> m;
        int query[m];
        for(int i=0; i<m; i++)
            cin >> query[i];

        cout << "Case " << casee << ":" << endl;

        // for query series..
        for(int i=0; i<m; i++)
        {
            // next two loops use for number
            int minn=INT_MAX;
            for(int j=0; j<n; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    // find out the closest sum
                    int value = abs(query[i] - (numbr[j] + numbr[k]));

                    if(minn>value)
                    {
                        minn = value;
                        sum = numbr[j] + numbr[k];
                    }
                }
            }
            cout << "Closest sum to " << query[i] << " is " << sum << "." << endl;
        }
        casee++;
    }
    return 0;
}
