 #include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

     cin >> t;
     while(t--)
     {
        string str;
        cin >> str; //a string(maximum length 1,00,000)

        cin >> n; //number of sub string in a test case:
        while(n--)
        {
            string st, s = "";
            cin >> st;

            // determining whether or not
            for(int i=0; i<st.size(); i++)
            {
                s += str[i];
            }

            if(s==st)
                cout << "y" << endl;
            else
                cout << "n" << endl;
        }
    }
    return 0;
}
