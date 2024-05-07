
#include <stdio.h>

int main()
{
    int n, i;
    while(scanf("%d",&n)){
        if(n==0)break;
        int sum=0, max=0, arr[n];

        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        for(i=0;i<n;i++){
            sum+=arr[i];
            if(sum>max)
               max = sum;
            else if(sum<0)
               sum = 0;
        }
        if(max>0)
          printf("The maximum winning streak is %d.\n",max);
        else printf("Losing streak.\n");
    }

    return 0;
}
