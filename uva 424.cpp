#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=0;
    vector <String> s;

    while(cin >> s){

        if(strcmp(s[i],"0")==0)break;
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%s\n",s[j]);
    }
}
