#include <stdio.h>

int sum_of_digits(int n)
{
    int sum=0;
    while(n>=1){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,i,sum=0,cnt=0,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=n-60,cnt=0;i<=n;i++){
            sum=i+sum_of_digits(i);
            if(sum==n){
                printf("%d\n",i);
                break;
            }
            else
                cnt++;
        }
        if(cnt==61)
            printf("0\n");
    }
    return 0;
}
