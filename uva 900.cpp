#include<stdio.h>

int main()
{
    while(1)
    {
        int n,i=2;
        long long int b=2,s=0,a=1;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            s=1;
        }
        else if(n==2)
        {
            s=2;
        }
        else
        {
            while(i!=n)
            {
                s=a+b;
                i++;
                a=b;
                b=s;
            }
        }
        printf("%lld\n",s);
    }
    return 0;
}

