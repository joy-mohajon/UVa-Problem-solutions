#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    char s[500],s1[500],c;
    while (gets(s))
    {
        if (!strcmp(s,"DONE")) return 0;
        int l=strlen(s);
        int k=-1;
        for (int i=0;i<l;i++)
        {
            c=tolower(s[i]);
            if (c>='a' && c<='z') s1[++k]=c;
        }
        int flag=1;
        for (int i=0;i<k;i++,k--)
        {
            if (s1[i]!=s1[k])
            {
                flag=0;
                break;
            }
        }
        if (flag==1) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}