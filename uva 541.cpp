#include<stdio.h>

int main()
{
    int n,i,j;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        int arr[n][n],k=0,a,b,s=0,d=0,l;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&arr[i][j]); /// input array value;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                s+=arr[i][j];   /// find out sum row wise
            }
            if(s%2!=0)
            {
                k++;      ///find out how many have odd sum;
                a=i;      ///store locatoin of i-th
            }
            s=0;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                s+=arr[j][i];  ///  find out sum column wise
            }
            if(s%2!=0)
            {
                d++;      ///find out how many have odd sum;
                b=i;      ///store locatoin of j-th
            }
            s=0;
        }
        if(k==1 && d==1)
        {
            printf("Change bit (%d,%d)\n",a+1,b+1);
        }
        else if(k==0 && d==0)
            printf("OK\n");
        else if(k>1 || d>1)
            printf("Corrupt\n");
    }
    return 0;
}
