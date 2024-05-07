#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,ss;
    char ch;
    int sl=1;
    queue<string>q;
    map<string,int> m;
    for(ch='a';ch<='z';ch++){
        s=ch;
        q.push(s);
    }
    int t=83700;
    while(t--){
        ss=q.front();
        for(ch=ss[ss.size()-1]+1;ch<='z';ch++){
            s=ss;
            s+=ch;
            q.push(s);
        }
        m[ss]=sl;
        sl++;
        q.pop();
    }
    while(cin>>s){
        cout<<m[s]<<endl;
    }
    return 0;
}
