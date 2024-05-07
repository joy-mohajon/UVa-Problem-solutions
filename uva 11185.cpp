#include<stdio.h>
int ar[50];

int ternery(int n,int l)
{
    if(n==1 || n==0)
    {
        if(n==1)
            ar[l++] = n;
        return l;
    }
    int k = n - ((n/3)*3);
    ar[l++] = k;

    ternery(n/3,l);
}
int main()
{
    int n,i;
    while(scanf("%d",&n))
    {
        int l=0;
        ar[0]=0;
        if(n<0)
            break;
        else if(n==0)
            printf("0");
        else
        {
            for(i=ternery(n,l)-1; i>=0; i--)
            {
                printf("%d",ar[i]);
            }
        }
        printf("\n");

    }
    return 0;
}
