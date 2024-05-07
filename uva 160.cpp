#include<stdio.h>
int main()
{
    int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int n,i,j,cnt[30];
    while(scanf("%d",&n)){
        if(n==0)break;

        for(i=0;i<25;i++){
            cnt[i] = 0;
        }

        for(i=2;i<=n;i++){
            int tmp = i;
            for(j=0;j<25;j++){
                if(i<prime[j])break;

                while(tmp%prime[j]==0){
                   tmp/=prime[j];
                   cnt[j]++;
                }
            }
        }
        int stock;
        for(i=0;i<25;i++){
            if(cnt[i]>0)
               stock = i;
        }

        printf("%3d! =",n);
        for(i=0;i<=stock;i++){
            if(i>0 && i%15==0)printf("\n      ");
            printf("%3d",cnt[i]);
        }
        printf("\n");
    }
    return 0;
}
