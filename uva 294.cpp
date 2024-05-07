#include<stdio.h>
#include<math.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int a,b,cnt1=0,ans=0,cnt,i,j;
        double temp;
        scanf("%lld %lld",&a,&b);
        for(i=a;i<=b;i++)
        {
            cnt=0;
            temp = sqrt(i);
            for(j=1;j<=temp;j++)
            {
                if(i%j==0)
                {
                    cnt++;
                    if(j<temp) cnt++;
                }
            }

            if(cnt1<cnt)
            {
                cnt1=cnt;
                ans=i;
            }
        }
         printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,ans,cnt1);
    }
    return 0;
}
