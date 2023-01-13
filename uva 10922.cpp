#include<bits/stdc++.h>

using namespace std;

int cnt=0;

int reminder(string str)
{
    int i=0, carry=0, rst=0;
    while(i<str.size())
    {
        rst = (carry*10) + (str[i]-48);
        if(rst>=9)
        {
            int r = rst / 9;
            carry = rst-(r*9);
        }
        else
            carry = rst;

        i++;
    }
    if(carry>0)
        return 1;
    else
        return 0;
}

void recursive(string str)
{
    int sum=0;
    //calculate sum of digit
    for(int i=0; i<str.size(); i++)
        sum += (str[i]-48);

    string strr = to_string(sum);

    if(strr == "9")
        return ;

    if(reminder(strr)==0)
    {
        cnt++;
        recursive(strr);
    }
    return ;
}

int main()
{
    string str;
    while(cin >> str)
    {
        if(str == "0")
            break;

        cnt = 0;

        if(reminder(str)==0)// if number is divided by 9
        {
            cnt++;
            recursive(str); // calculating how many times divided by 9
        }

        if(cnt>0)
            cout << str << " is a multiple of 9 and has 9-degree " << cnt << "." << endl;
        else
            cout << str << " is not a multiple of 9." << endl;
    }
    return 0;
}
