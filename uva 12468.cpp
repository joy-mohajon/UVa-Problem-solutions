#include<stdio.h>

int main()
{
    int a,b,k,s,temp;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==-1 && b==-1)break;
        if(a>b){temp =a;a=b;b=temp;}
        k = 100-(b-a);
        s = b-a;
        if(k>s)printf("%d\n",s);
        else printf("%d\n",k);
    }
    return 0;
}
