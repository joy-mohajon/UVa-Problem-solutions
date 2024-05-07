#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    scanf("%d",&n);
    cin.ignore();
    while(n--){
        string ch;
        stack <char> c;
        getline(cin,ch);

        for(i=0;i<ch.length();i++){
            if(!c.empty() && c.top()== '(' && ch[i]==')')
                c.pop();
            else if(!c.empty() && c.top()== '[' && ch[i]==']')
                c.pop();
            else
                c.push(ch[i]);
        }

        if(c.empty())
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
