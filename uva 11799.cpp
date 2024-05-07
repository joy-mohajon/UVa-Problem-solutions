#include<stdio.h>

int main()
{
    int n,i,j,max,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d);
        int ar[d+5];
        for(j=0;j<d;j++){
            scanf("%d",&ar[j]);
        }max = ar[0];
        for(j=0;j<d;j++){
            if(max<ar[j]){max = ar[j];}
        }
        printf("Case %d: %d\n",i,max);
    }

    return 0;
}
