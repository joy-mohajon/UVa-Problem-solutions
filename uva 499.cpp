#include<stdio.h>
int main()
{
    char st[10000];
    char cnt[52];
    while(gets(st)){
        int i,len = strlen(st);

        for(i=0;i<52;i++)
            cnt[i]=0;

        for(i=0;i<len;i++){
            if(st[i]>='A' && st[i]<='Z')
                cnt[st[i]-'A']++;
            else if(st[i]>='a' && st[i]<='z')
                cnt[st[i]-'a'+26]++;
        }

        int max = -1;
        for(i=0;i<52;i++){
            if(cnt[i]>max)
                max=cnt[i];
        }

        for(i=0;i<52;i++){
            if(max == cnt[i]){
              if(i<26)
                printf("%c",i+'A');
              else if(i>25)
                printf("%c",i+'a'-26);
            }
        }
        printf(" %d\n",max);
    }
    return 0;
}
