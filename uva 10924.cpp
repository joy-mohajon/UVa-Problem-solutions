#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,len,s=0;
    char st[25];
    while(scanf("%s",st)!=EOF){
        int s=0,n=0;
        len = strlen(st);
        for(i=0;i<len;i++){
            if('a'<=st[i] && st[i]<='z'){
                s += st[i]-96;
            }
            else if('A'<=st[i] && st[i]<='Z'){
                s += st[i]-38;
            }
        }
        for(j=2;j<=s/2;j++){
            if(s%j==0){n=1;break;}
        }
        if(n==1)printf("It is not a prime word.\n");
        else if(n==0)printf("It is a prime word.\n");
    }
    return 0;
}
