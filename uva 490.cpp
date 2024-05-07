#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j,len=0;
    char ch[110][200];
    while(gets(ch[i])){
        if(len<strlen(ch[i]))
           len = strlen(ch[i]);
        i++;
    }

    int n = i;

    for(i=0;i<len;i++){
       for(j=n-1;j>=0;j--){
           if(strlen(ch[j])>i)
              printf("%c",ch[j][i]);
           else printf(" ");
        } printf("\n");
    }
    return 0;
}
