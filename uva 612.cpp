#include<bits/stdc++.h>

using namespace std;

typedef pair <int, int> pairs;

int main()
{
    int test, n, m;

    cin >> test;
    while(test--)
    {
        cin >> n >> m;

        string index[m], data;
        vector <pairs> v;// pair type vector

        for(int i=0; i<m; i++)
        {
            cin >> data;

            index[i] = data;

            int cnt=0;
            for(int i=0; i<n; i++)
            {
                // counting the number of inversions from i'th index to right
                for(int j=i+1; j<n; j++)
                {
                    if(data[i] > data[j])
                        cnt++;
                }
            }
            // pair value of vector are count number and index number of dataset string
            v.push_back({cnt, i});
        }
        // sorting vector by sort function
        sort(v.begin(), v.end());

        // printing dataset by index wise
        for(pairs x : v)
            cout << index[x.second] << endl;

        if(test!=0)
            cout << endl;
    }
    return 0;
}
