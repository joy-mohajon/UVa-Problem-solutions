#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100000], st[100000];
    while(scanf("%s %s",ch,st)!=EOF){
        int i, j=0, len =0;

        for(i=0;i<strlen(st) && j<strlen(ch);i++){
            if(st[i]==ch[j]){
                j++; len++;
                if(len == strlen(ch)){
                   printf("Yes\n");
                   break;
                }
            }
        }

        if(len < strlen(ch))
           printf("No\n");

    }
    return 0;
}
