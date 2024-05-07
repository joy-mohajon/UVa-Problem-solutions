#include<stdio.h>

int main()
{
    int n,i,a,b,l,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        l=a;s=0;
        while(l<=b){
            if(l%2!=0)s+=l;
            l++;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
