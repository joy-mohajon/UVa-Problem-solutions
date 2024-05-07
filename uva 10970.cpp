#include<stdio.h>

int main()
{
    int m,n,s;
    while(scanf("%d %d",&m,&n)!=EOF){
        s=(m-1)+((n-1)*m);
        printf("%d\n",s);
    }
}
