#include<bits/stdc++.h>

using namespace std;

typedef pair <double, double> pairs;

int main()
{
    int n;

    while(cin >> n)
    {
        if(n==0)
            break;

        double x, y;
        vector <pairs> v;

        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            v.push_back({x, y});
        }

        // finding closest two points
        double minn = 10000.00;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                // calculating distance between two points
                double dis = sqrt(((v[i].first-v[j].first)*(v[i].first-v[j].first)) + ((v[i].second-v[j].second)*(v[i].second-v[j].second)));

                if(dis < minn)
                    minn = dis;
            }
        }

        if(minn >= 10000)
            cout << "INFINITY" << endl;
        else
            cout << fixed << setprecision(4) << minn << endl;
    }
}
