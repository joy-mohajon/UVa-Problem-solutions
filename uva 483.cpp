#include<stdio.h>

int main()
{
    char ch[100000];
    while(gets(ch)){
        int i,j,a=0;
        for(i=0;i<=strlen(ch);i++){
            if(ch[i]==' ' || ch[i]=='\0'){

                for(j=i-1;j>=a;j--){
                    printf("%c",ch[j]);
                }

                if(ch[i]==' ')
                    printf(" ");
                else printf("\n");

                a = i+1;
            }
        }
    }
    return 0;
}
