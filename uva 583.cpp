#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i;
    while(scanf("%d",&n)){
        if(n==0)break;

        m = n ;
        m = abs(m) ;
        printf("%d = ",n) ;

        if(n==1 || n==-1)
        {
            if(n==1)
                printf("1\n") ;
            else
                printf("-1\n") ;
            continue ;
        }

        if(n<0)
            printf("-1 x ") ;

        for(i=2;i<=sqrt(m);i++)
        {
            while(1)
            {
                if(m%i!=0)
                    break ;
                if(m%i==0)
                {
                    printf("%d",i) ;
                    m/=i ;
                    if(m>1)
                        printf(" x ") ;
                }
            }
        }
        if(m>1)
            printf("%d",m) ;

        printf("\n") ;
    }
    return 0;
}
