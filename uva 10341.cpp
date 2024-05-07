#include<bits/stdc++.h>
#include <cmath>

using namespace std;

double solve(double p, double q, double r, double s, double t, double u, double x)
{
    return (p * exp(-x)) + (q * sin(x)) + (r * cos(x)) + (s * tan(x)) + (t * x * x)+ u;
}

int main()
{
    double p, q, r, s, t, u, sum;

    while(cin >> p >> q >> r >> s >> t >> u)
    {
        double zero = solve(p, q, r, s, t, u, 0);
        double one = solve(p, q, r, s, t, u, 1);

        if(zero * one > 0)
        {
            cout << "No solution" << endl;
            continue;
        }
        double first =0, last =1, middle;

        for(int i=0; i<30; i++)
        {
            middle = (first+last)/2;
            double sum = solve(p, q, r, s, t, u, middle);
            if(sum>0)
                first = middle;
            else if(sum<0)
                last = middle;

        }
        cout << fixed << setprecision(4) << middle << endl;
    }
    return 0;
}
