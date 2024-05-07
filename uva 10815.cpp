#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    set <string> word;
    set <string>::iterator it;

    while(cin>>s){
        int len = s.size();
        string st = "";

        for(int i=0;i<len;i++){
            char c = tolower(s[i]);
            if(c>='a' && c<='z'){
               st+=c;
            }
            else if(st != ""){
               word.insert(st);
               st = "";
            }
        }
        if(st != "")
            word.insert(st);
    }
    for(it=word.begin();it!=word.end();it++)
            cout<<*it<<endl;

    return 0;
}
