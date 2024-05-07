#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int i,j,len1,len2,arr[2000][2000];
int main()
{
    string s1,s2;

    while(getline(cin,s1))
    {
        getline(cin,s2);
        len1=s1.size();
        len2=s2.size();
        for(i=1;i<=len1;i++)
            for(j=1;j<=len2;j++)
            {
                if(s1[i-1]==s2[j-1])
                arr[i][j]=arr[i-1][j-1]+1;
                else
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
            }
        cout<<arr[len1][len2]<<endl;
    }
return 0;
}

