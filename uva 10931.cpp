#include<stdio.h>

int main()
{
    long long int n;
    int ar[1500];
    while(scanf("%lld",&n))
    {
        int i=0,k=0,rem,j;
        if(n==0)
            break;
        while(n!=0) ///find out binery number and calculate the digit of binery number;
        {
            rem = n%2;
            ar[i] = rem; ///store 0 or 1;
            if(ar[i]==1)
            {
                k++; ///calculate the digit
            }
            n /= 2;
            i++;
        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)///reverse print of the binery digit;
        {
            printf("%d",ar[j]);
        }
        printf(" is %d (mod 2).\n",k);
    }
    return 0;
}

