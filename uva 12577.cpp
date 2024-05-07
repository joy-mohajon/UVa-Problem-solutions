#include<stdio.h>
#include<string.h>

int main()
{
    int i=1;
    char ch[6];
    while(scanf("%s",&ch)){
        if(ch[0]=='*')break;
        else if(ch[0]=='H'){printf("Case %d: %s\n",i,"Hajj-e-Akbar");}
        else if(ch[0]=='U'){printf("Case %d: %s\n",i,"Hajj-e-Asghar");}
        i++;
    }
    return 0;
}
