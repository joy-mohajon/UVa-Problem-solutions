#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    char ch[1010];
    char st[1010];
    map <char, int> m;

    while(gets(ch)){
        gets(st);

        int i,len1 = strlen(ch);
        int  len2 = strlen(st);

        sort(ch,ch+len1);
        sort(st,st+len2);

        m.clear();

        for(i=0;i<len1;i++)
            m[ch[i]]++;

        for(i=0;i<len2;i++)
            if(m[st[i]]){
               printf("%c",st[i]);
               m[st[i]]--;
            }
        printf("\n");
    }
    return 0;
}
