#include<bits/stdc++.h>

using namespace std;

map <char, char> m;

int regular(string str)
{
    string s = str;

    reverse(str.begin(), str.end());

    if(str==s)
        return 0;
    else
        return 1;
}
int mirror(string str)
{
    int len = str.size()-1;
    char c;

    for(int i=0; i<=len/2; i++){
        if(m[str[i]]>=48 && m[str[i]]<=90)
            str[i]=m[str[i]];
    }

    for(int i=0, j=str.size()-1; i<=len/2; i++, j--){
        if(str[i]!=str[j])
            return 1;
    }

    for(int i=0; i<str.size(); i++){
        char c = str[i];
        if(c=='B' || c=='C' || c=='D' || c=='F' || c=='G' ||
            c=='K' || c=='P' || c=='Q' || c=='R' || c=='N' ||
              c=='4' || c=='6' || c=='7' || c=='9')
            return 1;
    }
    return 0;
}
int main()
{
    string str;

    m['A']='A'; m['E']='3', m['3']='E'; m['H']='H';
    m['I']='I'; m['J']='L', m['L']='J'; m['M']='M';
    m['S']='2', m['2']='S'; m['Z']='5', m['5']='Z';
    m['2']='S', m['S']='2'; m['3']='E', m['E']='3';
    m['5']='Z', m['Z']='5';

    while(cin >> str){
        if(regular(str)==0 && mirror(str)==0)
            cout << str << " -- is a mirrored palindrome." << endl << endl;
        else if(regular(str)==0)
            cout << str << " -- is a regular palindrome." << endl << endl;
        else if(mirror(str)==0)
            cout << str << " -- is a mirrored string." << endl << endl;
        else
            cout << str << " -- is not a palindrome." << endl << endl;
    }
    return 0;
}
