#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j;
    while(scanf("%d",&n)){
        if(n==0)break;
        int ar[n+5];
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n);
        printf("%d",ar[0]);
        for(i=1;i<n;i++){
            printf(" %d",ar[i]);
        }printf("\n");
    }
    return 0;
}
