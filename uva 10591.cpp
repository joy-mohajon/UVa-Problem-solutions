#include<bits/stdc++.h>

using namespace std;

void checkMessage(string str)
{
    if(str == "1")
    {
        cout << " is a Happy number." << endl;
        return ;
    }
    else if(str.size()==1 && str[0] >= 50 && str[0] <= 57)
    {
        // if element of string is between 2 and 9 then ..
        cout << " is an Unhappy number." << endl;
        return ;
    }

    int sum = 0;
    for(int i=0; i<str.size(); i++)
    {
        // calculate sum of digit's square
        sum += ((str[i]-48)*(str[i]-48));
    }
    string s = to_string(sum);

    checkMessage(s);
}

int main()
{
    int t, n;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> n;

        cout << "Case #" << i << ": " << n;

        if(n<10)
        {
            string str = to_string(n*n);
            checkMessage(str);
        }
        else
        {
            string str = to_string(n);
            checkMessage(str);
        }
    }
    return 0;
}
