#include<bits/stdc++.h>

using namespace std;

string fibb(string str1, string str2)
{
    int result, value, carry=0;
    string str="", s="";

    for(int i=str1.size()-1, j=str2.size()-1; i>=0; i--, j--){
        if(j<0)
            value = 0;
        else
            value = str2[j]-48;

        result = (str1[i]-48) + value + carry;

        string s = to_string(result);
        if(s.size()>1){
            str += s[1];
            carry = s[0]-48;
        }
        else{
            str += s[0];
            carry = 0;
        }
    }
    if(carry>0)
       str+=(carry+48);

    reverse(str.begin(), str.end());

    if(str[0]=='0'){
        int i=0;
        while(str[i]=='0'){
            i++;
        }
        i++;
        str.erase(0, i);
    }

    return str;
}

int main()
{
    int n, i=2;
    string str[10000];

    str[0]="1"; str[1]="1";

    while(str[i].size()<1001){
        str[i] = fibb(str[i-1], str[i-2]);
        i++;
    }

    while(cin >> n){
        cout << str[n-1] << endl;
    }

    return 0;
}
