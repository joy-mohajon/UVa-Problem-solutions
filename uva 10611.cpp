#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x;
    set<int> heights;
    vector<int> queries;

    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            heights.insert(x);
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            queries.push_back(x);
        }

        for (auto i : queries)
        {
            auto it = heights.find(i);
            auto start_boundary = heights.begin();
            auto end_boundary = heights.end();

            if (it != heights.end())
            {
                // cout << " its happned " << endl;
                if (it == start_boundary)
                {
                    cout << "X"
                         << " ";
                }
                else
                {
                    it--;
                    cout << *it << " ";
                    it++;
                }

                if (it == --end_boundary)
                {
                    cout << "X" << endl;
                }
                else
                {
                    it++;
                    cout << *it << endl;
                }
            }
            else
            {
                // cout << " its don't happned " << endl;
                heights.insert(i);
                start_boundary = heights.begin();
                end_boundary = heights.end();
                it = heights.find(i);

                if (it == start_boundary)
                {
                    cout << "X"
                         << " ";
                }
                else
                {
                    it--;
                    cout << *it << " ";
                    it++;
                }

                if (it == --end_boundary)
                {
                    cout << "X" << endl;
                }
                else
                {
                    it++;
                    cout << *it << endl;
                }
                heights.erase(i);
            }
        }
    }
    return 0;
}