#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        double sum=0.0, gram;
        string str;
        cin >> str;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='C')
                gram = 12.01;
            else if(str[i]=='H')
                gram = 1.008;
            else if(str[i]=='O')
                gram = 16.00;
            else
                gram = 14.01;

            int temp=1, numbr=0, flag=0;
            //finding the quantity number after the chemical symbol
            while(str[++i]>=48 && str[i]<=57 && i<str.size())
            {
                numbr *= temp;
                numbr += (str[i]-48);
                temp = 10;
                flag=1;
            }--i;//so that, can't skip any character

            if(flag==0)
                numbr = 1;

            // calculating the total molar mass
            sum += (double)(gram*numbr);
        }
        cout << fixed << setprecision(3) << sum << endl;
    }
    return 0;
}
