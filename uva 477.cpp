#include <bits/stdc++.h>

using namespace std;

struct data
{
    char ch;
    double a, b, c, d;
};

int main()
{
    char ch;
    double a, b, c, d;
    vector<data> figure;

    while (cin >> ch)
    {
        if (ch == '*')
            break;

        if (ch == 'r')
        {
            cin >> a >> b >> c >> d;
            figure.push_back({ch, a, b, c, d});
        }
        else
        {
            cin >> a >> b >> c;
            figure.push_back({ch, a, b, c, 0});
        }
    }

    int point = 1;
    double x, y;

    while (cin >> x >> y)
    {
        if (x == 9999.9 && y == 9999.9)
            break;

        int contain = 0;

        for (int i = 0; i < figure.size(); i++)
        {
            if (figure[i].ch == 'r')
            {
                // if contain inside of rectangle ..
                if (figure[i].a < x && x < figure[i].c && figure[i].d < y && y < figure[i].b)
                {
                    cout << "Point " << point << " is contained in figure " << i + 1 << endl;
                    contain = 1;
                }
            }
            else if (figure[i].ch == 'c')
            {
                //if contain inside of circle ..
                double dis = ((figure[i].a - x) * (figure[i].a - x)) + ((figure[i].b - y) * (figure[i].b - y));
                if (dis < (figure[i].c * figure[i].c))
                {
                    cout << "Point " << point << " is contained in figure " << i + 1 << endl;
                    contain = 1;
                }
            }
        }

        // if doesn't contain in any figure ..
        if (contain == 0)
            cout << "Point " << point << " is not contained in any figure" << endl;

        point++;
    }

    return 0;
}
