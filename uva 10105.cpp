#include<stdio.h>

int main()
{
    int n, k, i, var;
    long int res[13] = {1};

    for(i=1;i<13;i++){
        res[i]=res[i-1]*i;
    }
    while(scanf("%d %d",&n, &k)!=EOF){
        long int ans = res[n];
        for(i=0;i<k;i++){
            scanf("%d",&var);
            if(var>1)
              ans/=res[var];
        }
        printf("%ld\n",ans);
    }
    return 0;
}
