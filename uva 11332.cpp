#include<stdio.h>
#include<string.h>

int f(char ch[])
{
    int len = strlen(ch),i,s=0;
    for(i=0;i<len;i++){
       s+=(ch[i]-48);
    }

    char st[15];
    sprintf(st,"%d",s);

    if(s<=9)return s;
    else f(st);

}

int main()
{

    char ch[15];
    while(scanf("%s",ch)){
        if(ch[0]=='0')break;
        printf("%d\n",f(ch));
    }
    return 0;
}
