#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    int n,i;
    scanf("%d",&n);
    while(n--){
        scanf("%s",ch);
        int len = strlen(ch);

        if(strcmp(ch,"1")==0 || strcmp(ch,"4")==0 || strcmp(ch,"78")==0)
                printf("+\n");
        else if(ch[len-2]=='3' && ch[len-1]=='5')
            printf("-\n");
        else if(ch[0]=='9' && ch[len-1]=='4')
             printf("*\n");
        else printf("?\n");
    }

    return 0;
}
