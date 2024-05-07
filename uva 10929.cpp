#include<stdio.h>

int main()
{
    int n,i,j,s,len;
    char ch[1010];
   while(scanf("%s",ch))
    {
            s=0;len = strlen(ch);
        if(ch[0]=='0' && len ==1)break;
        for(i=0;i<len;i++)
        {
            if(i%2==0)s+=(ch[i]-48);
            else s-=(ch[i]-48);
        }
        if(s==0 || s%11==0)printf("%s is a multiple of 11.\n",ch);
        else printf("%s is not a multiple of 11.\n",ch);
    }
    return 0;
}
