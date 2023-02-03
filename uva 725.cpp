#include<bits/stdc++.h>

using namespace std;

bool diff_digit(string str)
{
    set <char> s;

    for(char c : str)
        s.insert(c);

    if(s.size()==str.size())
        return true;
    else
        return false;
}

bool haveSameDigit(string num1, string num2)
{
    set <char> s;

    for(int i=0; i<num1.size(); i++)
        s.insert(num1[i]);

    for(int j=0; j<num2.size(); j++)
        s.insert(num2[j]);

    if(s.size()==(num1.size()+num2.size()))
        return false;
    else
        return true;
}

int main()
{
    int n;
    cin >> n;
    while(1)
    {
        int flag=0;
        for(int i=1234; i*n<100000; i++)
        {
            int temp = i*n;
            string str1 = to_string(temp);
            string str2 = to_string(i);

            // if there is no any same digit in each of the string
            if(diff_digit(str2) && diff_digit(str1))
            {
                // if there is no same digit in two string
                if(str1.size()==5 && !haveSameDigit(str1, str2))
                {
                    string str = "0";

                    if(i<10000)
                    {
                        str+=str2;

                        if(str1.find("0")<str1.size() || !diff_digit(str))
                            continue;
                    }
                    else
                        str = str2;

                    cout << str1 << " / " << str << " = " << n << endl;
                    flag = 1;
                }
            }
        }
        if(flag==0)
            cout << "There are no solutions for " << n << "." << endl;

        cin >> n;

        if(n!=0)
            cout << endl;
        else
            break;
    }
    return 0;
}
