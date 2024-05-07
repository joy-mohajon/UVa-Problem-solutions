#include<stdio.h>

int main()
{
    int n,i,j,sum;
    while(scanf("%ld",&n)!=EOF){
        i=0,sum=0;
        while(sum<n){
            sum+=i;i++;
        }

        sum=sum-(i-1);
        int a=0,b=i;

       /* while(sum<n){
           a++,b--,sum++;
        }*/
        if(i%2==0)
            printf("TERM %d IS %d/%d\n",n,b-(n-sum),a+(n-sum));
        else printf("TERM %d IS %d/%d\n",n,a+(n-sum),b-(n-sum));
    }

}
