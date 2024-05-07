#include<stdio.h>

int main()
{
    long int n,s=0,d,i;
    char ch[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",ch);
        if(ch[0]=='d'){
           scanf("%ld",&d);
           s+=d;
        }
        else if(ch[0]=='r'){
            printf("%d\n",s);
        }

    }
    return 0;
}
