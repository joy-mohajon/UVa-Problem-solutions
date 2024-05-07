#include<stdio.h>
#include<string.h>

int main()
{
    char ch[500];
    while(scanf("%s",&ch)!=EOF){
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        printf("%c",ch[i]-7);
    }
    printf("\n");
    }
    return 0;
}
