#include<stdio.h>

int main()
{
    int n,j=1,i,k;
    while(scanf("%d",&n)){
            if(n==0)break;
    int arr[n],s=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    k = s/n;
    s=0;
    for(i=0;i<n;i++){
        if(arr[i]>k)s+=(arr[i]-k);
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,s);
    j++;
    }

    return 0;
}
