#include<stdio.h>

int main()
{
    int n,l,w,h,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&l,&w,&h);  ///input 3 integer
        if(l<=20 && w<=20 && h<=20){
            printf("Case %d: good\n",i);
        }
        else printf("Case %d: bad\n",i);
    }
    return 0;
}
