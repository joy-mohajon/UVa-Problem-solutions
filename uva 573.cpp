#include<bits/stdc++.h>

using namespace std;

int main()
{
    double h, u, d, f;

    while(cin >> h >> u >> d >> f)
    {
        if(h==0)
            break;

        f=u*(f/100); // calculating fatigue factor

        double sum=0, cnt=0;
        while(1)
        {
            sum+=u; // calculating total climbing distance

            if(sum<0 || sum>h)
            {
                cnt++;
                break;
            }
            sum-=d; // excluding the distance for slides down

            if(sum<0 || sum>h)
            {
                cnt++;
                break;
            }
            u-=f; // decreasing the climbing efficiency day by day for the fatigue
            if(u<=0)
                u=0;
            cnt++;
        }

        if(sum>h)
            cout << "success on day " << cnt << endl;
        else
            cout << "failure on day " << cnt << endl;
    }
    return 0;
}
