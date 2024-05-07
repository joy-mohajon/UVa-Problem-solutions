#include<stdio.h>
int p[150], w[50];

int MaxValue(int n, int weight)
{
    int i, j, tmp = weight, sum =0, max = -2475612;
    for(i=0;i<n;i++){
        if(tmp>=w[i]){
           tmp -= w[i];
           sum+=p[i];
        }
        for(j=0;j<n;j++){
            if(j==i)continue;
            if(tmp>=w[j]){
               tmp -=w[j];
               sum+=p[j];
            }
        }
        if(max<sum)
            max=sum;
        sum = 0;
        tmp = weight;
    }

    return max;
}

int main()
{
    int i, j, t, n, g;
    scanf("%d",&t);
    while(t--){

        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&p[i],&w[i]);
        }

        scanf("%d",&g);
        int mw[50];
        for(i=0;i<g;i++){
            scanf("%d",&mw[i]);
        }

        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(p[j]<p[j+1]){
                    int tmp = p[j];
                    p[j] = p[j+1];
                    p[j+1] = tmp;

                    tmp = w[j];
                    w[j] = w[j+1];
                    w[j+1] = tmp;
                }
            }
        }
        int sum=0;
        for(i=0;i<g;i++){
            sum+=MaxValue(n,mw[i]);
        }

        printf("%d\n",sum);
    }
    return 0;
}
