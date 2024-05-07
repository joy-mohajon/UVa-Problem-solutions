#include<stdio.h>

int main()
{
    int i,n,m,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        int ar[m+5],k=0,l=0;
        for(j=0;j<m;j++){
            scanf("%d",&ar[j]);
        }
        for(j=0;j<m-1;j++){
            if(ar[j]<ar[j+1]){k++;}
            else if(ar[j]>ar[j+1]){l++;}
        }
       printf("Case %d: %d %d\n",i,k,l);
    }
    return 0;
}
