#include<stdio.h>
int main()
{
    int T,n,k,p,i,j,t=1;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&n,&k,&p);

        for(i=k,j=0;j<=p;i++,j++){
            if(j==p){
                printf("Case %d: %d\n",t,i);
                break;
            }
            if(i==n)i=0;

        }t++;
    }
    return 0;
}
