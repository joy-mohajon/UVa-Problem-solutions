#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//'1','2','3','4','5','6','7','8','9',
int main()
{
    string s;
    char c,ch[47] = {'q','w','e','r','t','y','u','i','o','p', 91, 93, 92,
    'a','s','d','f','g','h','j','k','l',';',39,
    'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47,
    '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61};
    getline(cin,s);
    //cin>>s;
    //cout<<s;
    for(int i=0;i<s.size();i++){
        int j = 0;
        if(s[i]>=65 && s[i]<=90)s[i]+=32;
        else if(s[i]==32)printf("%c",s[i]);
        while(j<47){
             if(ch[j]==s[i]){
                printf("%c",ch[j-2]);
                break;
            }
            j++;
        }
    }cout<<endl;
    return 0;
}
