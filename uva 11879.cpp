#include<stdio.h>
#include<string.h>

int main()
{
    char ch[200];
    while(scanf("%s",ch)){
        if(strcmp(ch,"0")==0)break;

        int i, len, p=0;
        len = strlen (ch);
        for (i=0; i< len; i++) {
            p = ((p * 10) + (ch[i]-'0')) % 17;
        }

    if(p==0)
        printf("1\n");
    else
        printf("0\n");

    }
    return 0;
}
