#include<stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m); //test case
        int ar[m+5];
        for(j=0;j<m;j++){
            scanf("%d",&ar[j]);///number of player
        }
        printf("Case %d: %d\n",i,ar[(m/2)]);//find out midle point
    }
    return 0;
}
