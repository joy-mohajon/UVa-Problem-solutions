#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int i, j, sum =0, arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        for(i=1;i<n;i++){
            int cnt = 0;
            for(j=0;j<i;j++){
                if(arr[i]>=arr[j])
                    cnt++;
            }//printf("%d ",cnt);
            sum += cnt;
        }
        printf("\n%d\n",sum);
    }
    return 0;

}
