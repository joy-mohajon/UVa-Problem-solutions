#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main()
{
    stack <string> s;
    string str;

    while(getline(cin, str)){

         for(int i=0; i<str.size(); i++){
            if(str[i]=='['){
                string st = "";
                while(str[i+1]!=']' && str[i+1]!='[' && i+1<str.size()){
                    i++;
                    st+=str[i];
                }
                s.push(st);
            }
         }

         while(!s.empty()){
            cout << s.top();
            s.pop();
         }

         for(int i=0; i<str.size(); i++){
            if(str[i]=='['){
                while(str[i+1]!=']' && str[i+1]!='[' && i+1<str.size()){
                    i++;
                }
            }
            else if(str[i]==']')
                continue;
            else
                cout << str[i];
         }
         cout << endl;
    }
    return 0;
}
