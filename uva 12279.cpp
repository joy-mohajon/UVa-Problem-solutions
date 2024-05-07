#include<stdio.h>

int main()
{
    int n,i,j=1;
    while(scanf("%d",&n)){
        int ar[n],k=0,d=0;
        if(n==0)break;
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        for(i=0;i<n;i++){
            if(ar[i]>0){k++;}
            else if(ar[i]==0){d++;}
        }
        printf("Case %d: %d\n",j,k-d);
        j++;
    }
    return 0;
}
