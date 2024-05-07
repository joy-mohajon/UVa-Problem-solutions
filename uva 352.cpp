#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        char s[55];
        gets(s);
        if(s[0] == '#')
            break;
        if (!next_permutation(s,s+strlen(s)))
        {
            puts("No Successor");
            continue;
        }
        puts(s);
    }
    return 0;
}
