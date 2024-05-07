#include<stdio.h>
int main()
{
    long int f,e,c,i,n,ans,total,x;
    while(scanf("%ld",&n)==1){
        for(i=0;i<n;i++){
            scanf("%ld%ld%ld",&e,&f,&c);
            total=e+f;
            ans=0;
            while(total>=c){
               x=total/c;
               ans=ans+x;
               total=total/c+total%c;
            }
            printf("%ld\n",ans);
        }
    }
    return 0;
}
