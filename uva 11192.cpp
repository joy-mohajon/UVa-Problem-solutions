#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string input;

    while (cin >> n)
    {
        if (n == 0)
            break;
        getchar();
        getline(cin, input);

        int len = input.size() / n;
        string output;

        for (int i = len; i <= input.size(); i += len)
        {
            for (int j = i - 1; j >= (i - len); j--)
            {
                output.push_back(input[j]);
            }
        }
        cout << output << endl;
    }
    return 0;
}
