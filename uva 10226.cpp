#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<string, int> m;
    char s[35];

    scanf("%d\n\n", &n);
    while (n--)
    {
        int total = 0;

        total = 0;
        while (gets(s))
        {
            if (strlen(s) == 0)
                break;
            m[string(s)]++;

            total++;
        }

        map<string, int>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
        {
            printf("%s %.4lf\n", (*it).first.data(),(double) (*it).second / (double) total * 100.0);
        }
        if (n > 0)
        {
            printf("\n");
            m.clear();
        }
    }

    return 0;
}
