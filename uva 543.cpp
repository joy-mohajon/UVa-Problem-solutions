#include<stdio.h>
int ar[1000000];

int main()
{
    long int n,a,b;
    while(scanf("%ld",&n))
    {
        if(n==0)
            break;
        long int s,max = 0;
        int p=0,i,j=0,l,k=0;
        for(i=3; i<n; i+=2)
        {
            for(l=2; l<=i/2; l++)
            {
                if(i%l==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                ar[j++]=i;
            }
            p=0;
        }
        for(i=0; i<j; i++)
        {
            for(l=j-1; l>i; l--)
            {
                if(ar[i]+ar[l]==n)
                {
                    /* s = ar[l]-ar[i];
                     if(max < s){*/
                    a = ar[i];
                    b=ar[l];
                    k=1;
                    // max = s;
                    // }
                    printf("%ld = %ld + %ld\n",n,a,b);
                    k=1;
                    break;
                }
            }
            if(k==1)
                break;
        }
        if(k==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
