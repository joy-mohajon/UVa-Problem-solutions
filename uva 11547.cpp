#include<stdio.h>
#include<string.h>

int main()
{
    int n,d,len,i,s;
    char ar[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&d);
        s=(((d*567/9)+7492)*235/47)-498;
        sprintf(ar,"%d",s);
        len = strlen(ar);
        printf("%c\n",ar[len-2]);
    }
    return 0;
}
